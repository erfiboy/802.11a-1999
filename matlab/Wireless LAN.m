%%%%%%%%%%%%%%%%%%%%%%%%%%%% Scramble
clc;
clearvars;
seed = ones(1 , 7);
% creating data symbol
Input = randi([0 , 1] , 1 ,8);
service = zeros (1 , 16);
tail = zeros (1 , 6);
pad = zeros (1 , 18);
Data = cat (2 , service , Input , tail ,pad);
%creating siganl symbol
Rate = [0 0 0 1]; 
Reserved = [0];
lenght = [zeros(1,11) , 1];
parity = 0;
for i = 1:8
    parity = xor(parity,Input(i));
end
Tail = zeros(1 , 6);
Service_frame = cat(2 ,Rate , Reserved , lenght , parity , Tail );
% Preamble symbol
Preamble = ones(1,12);
% in frame
Data_frame_in = cat(2 , Service_frame , Data );
f_in = fopen('Input.txt','w');
fprintf(f_in,'%d\n',Data_frame_in(1:72));
% scarambling the data
Data_out = zeros(1,48);
for i=1:48
    operand = xor(seed(4),seed(1));
    Data_out(i) =xor(operand,Data(i));
    seed = circshift(seed,-1);
    seed(7)=operand;
end
Data_out = cat(2 , Preamble , Service_frame , Data_out );
f_scram = fopen('Out_Scramble.txt','w');
fprintf(f_scram,'%d\n',Data_out(1:84));




%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% Convolutional  Encoder
clc;
clearvars;

f_scram = fopen('Out_Scramble.txt','r');
formatSpec = '%d';
input = fscanf(f_scram,formatSpec);
input = input.';
Dataframe = input(37:84);
f_da = fopen('Out_Scramble_Datafram.txt','w');
fprintf(f_da,'%d\n',Dataframe(1:48));
shiftreg = zeros(1,6);
A = zeros(1,96) ;

for i=1:size(Dataframe,2)
    A(i*2-1) = mod(Dataframe(i)+shiftreg(2)+shiftreg(3)+shiftreg(5)+shiftreg(6),2);
    A(i*2) = mod(Dataframe(i)+shiftreg(1)+shiftreg(2)+shiftreg(3)+shiftreg(6),2);
    shiftreg = [Dataframe(i),shiftreg(1:5)];
    Dataframe(i);
end
f_en = fopen('Out_convolutional_encoder.txt','w');
fprintf(f_en,'%d\n',A(1:96));




%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% interleaver
clc;
clear;
Ncbps = 48;
Nbpsc = 1;
num_sym = 1;

f_vit = fopen('Out_convolutional_encoder.txt','r');
formatSpec = '%d';
input = fscanf(f_vit,formatSpec);
input = input.';
% creating matrixes after first and second permu
first_permu = zeros(1,96);
second_permu = zeros(1,96);
% first permu  
k = 0:1:Ncbps-1;
i = (Ncbps/16)*(mod(k,16))+floor(k/16);
% repeating this permution for the next symbol
m = i;
n = k;
for t=1:num_sym
    i = [m+1,m+t*49];
    k = [n+1,n+t*49];
end
% fill the first permu matrix
first_permu(k) = input(i);

% second permu  
s = max(Nbpsc/2,1);
i = 0:1:Ncbps-1;
j = s*floor(i/s)+mod(i+Ncbps-floor(16*i/Ncbps),s);
% repeating this permution for the next symbol
m = i;
n = j;
for t=1:num_sym
    i = [m+1,m+t*49];
    j = [n+1,n+t*49];
end
% fill the second permu matrix
second_permu(i) = first_permu(j);
% write to the file 
f_en = fopen('Out_interleaver.txt','w');
fprintf(f_en,'%d\n',second_permu(1:96));
fclose('all');



%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% deinterleaver 
Ncbps = 48;
Nbpsc = 1;
num_sym =1;
f_inter = fopen('Out_interleaver.txt','r');
formatSpec = '%d';
input1 = fscanf(f_inter,formatSpec);
input1 = input1.';
% creating matrixes after first and second deinterleaver
first_deinter = zeros(1,96);
second_deinter = zeros(1,96);
% first deinterleaver 
s = max(Nbpsc/2,1);
j = 0:1:Ncbps-1;
i = s*floor(j/s)+mod(j+floor(16*j/Ncbps),s);
% repeating this deinterleaver for the next symbol
m = i;
n = j;
for t=1:num_sym
    i = [m+1,m+t*49];
    j = [n+1,n+t*49];
end
% fill the first deinterleaver matrix
first_deinter(i)= input1(j);

% second deinterleaver 
i = 0:1:Ncbps-1;
k = 16*i-(Ncbps-1)*floor(16*i/Ncbps);
% repeating this deinterleaver for the next symbol
m = i;
n = k;
for t=1:num_sym
    i = [m+1,m+t*49];
    k = [n+1,n+t*49];
end
% fill the second deinterleaver matrix
second_deinter(i)= first_deinter(k);
f_en = fopen('Out_deinterleaver.txt','w');
fprintf(f_en,'%d\n',second_deinter(1:96));
fclose('all');

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% Viterbi Decoder
clc;

f_con = fopen('Out_convolutional_encoder.txt','r');
formatSpec = '%d';
input1 = fscanf(f_con,formatSpec);
input1 = input1.';

veterbi_out = zeros(1,48);
cost = 0;
cs = zeros(1,6);

for i=1:2:95
    ns0 = [0,cs(1:5)];
    out01 = mod(0+cs(2)+cs(3)+cs(5)+cs(6),2);
    out02 = mod(0+cs(1)+cs(2)+cs(3)+cs(6),2);
    out0 = [out01 , out02];    
    ns1 = [1,cs(1:5)];
    out11 = mod(1+cs(2)+cs(3)+cs(5)+cs(6),2);
    out12 = mod(1+cs(1)+cs(2)+cs(3)+cs(6),2);
    out1 = [out11 , out12];
    
    hamingout0 = xor(out0(1) , input1(i))+ xor(out0(2) , input1(i+1));
    hamingout1 = xor(out1(1) , input1(i))+ xor(out1(2) , input1(i+1));
    
    if (hamingout0 >  hamingout1)
        cs = ns1;
        veterbi_out((i+1)/2) = 1;
    else
        cs = ns0;
        veterbi_out((i+1)/2) = 0;
    end
end

f_scram = fopen('Out_Scramble.txt','r');
formatSpec = '%d';
input = fscanf(f_scram,formatSpec);
input = input.';

veterbi_out = [input(1:36), veterbi_out];
f_fn = fopen('Out_viterbi.txt','w');
fprintf(f_fn,'%d\n',veterbi_out(1:84));




%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% descramble

f_con = fopen('Out_viterbi.txt','r');
formatSpec = '%d';
Data_out = fscanf(f_con,formatSpec);
Data_out = Data_out.';

%finding the initial seed
Preamble_recived = Data_out(1:12);
signal_frame_recived = Data_out(13:36);
resived_seed(1:7) = Data_out(37:43);

c = xor(resived_seed(5),resived_seed(1));
b = xor(resived_seed(6),resived_seed(2));
a = xor(resived_seed(7),resived_seed(3));
d = xor(resived_seed(4),a);
g = xor(resived_seed(1),d);
e = xor(resived_seed(3),b);
f = xor(resived_seed(2),c);
resived_seed = [g f e d c b a];

Data_descram = zeros(1,48);

for i=1:48
    operand = xor(resived_seed(4),resived_seed(1));
    Data_descram(i) =xor(operand,Data_out(i+36));
    resived_seed = circshift(resived_seed,-1);
    resived_seed(7)=operand;
end

Data_frame_out = cat( 2 , signal_frame_recived , Data_descram);

f_scram = fopen('Out_DeScramble.txt','w');
fprintf(f_scram,'%d\n',Data_frame_out(1:72));

