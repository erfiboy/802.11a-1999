/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/courses/FPGA/Projects/verilog/New folder/transiver/Scrambler_descrambler_tb.v";
static const char *ng1 = "Input.txt";
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static int ng4[] = {1000, 0};
static int ng5[] = {70, 0};
static unsigned int ng6[] = {0U, 0U};
static int ng7[] = {180, 0};
static int ng8[] = {250, 0};



static void Initial_45_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);

LAB4:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2248);
    xsi_vlogfile_readmemb(ng1, 0, t2, 0, 0, 0, 0);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(52, ng0);

LAB5:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 3136);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(52, ng0);
    t3 = (t0 + 1448);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t7) == 0)
        goto LAB7;

LAB9:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB10:    t14 = (t4 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t4) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB12;

LAB11:    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1448);
    xsi_vlogvar_assign_value(t24, t4, 0, 0, 1);
    goto LAB5;

LAB7:    *((unsigned int *)t4) = 1;
    goto LAB10;

LAB12:    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t4) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB11;

LAB13:    goto LAB1;

}

static void Initial_55_1(char *t0)
{
    char t6[8];
    char t17[8];
    char t27[8];
    char t38[8];
    char t42[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    int t61;
    int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;

LAB0:    t1 = (t0 + 3576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);

LAB4:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3384);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB6:    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(73, ng0);
    xsi_vlog_stop(1);
    goto LAB1;

LAB7:    xsi_set_current_line(60, ng0);

LAB9:    xsi_set_current_line(61, ng0);
    t13 = (t0 + 2408);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng5)));
    memset(t17, 0, 8);
    xsi_vlog_signed_less(t17, 32, t15, 32, t16, 32);
    t18 = (t17 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (~(t19));
    t21 = *((unsigned int *)t17);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB12:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3896);
    *((int *)t2) = 1;
    t3 = (t0 + 3608);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB10:    xsi_set_current_line(62, ng0);
    t24 = (t0 + 2248);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t28 = (t0 + 2248);
    t29 = (t28 + 72U);
    t30 = *((char **)t29);
    t31 = (t0 + 2248);
    t32 = (t31 + 64U);
    t33 = *((char **)t32);
    t34 = (t0 + 2408);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    xsi_vlog_generic_get_array_select_value(t27, 1, t26, t30, t33, 2, 1, t36, 32, 1);
    t37 = (t0 + 2088);
    xsi_vlogvar_assign_value(t37, t27, 0, 0, 1);
    goto LAB12;

LAB13:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_greater(t6, 32, t4, 32, t5, 32);
    memset(t17, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t7) != 0)
        goto LAB16;

LAB17:    t14 = (t17 + 4);
    t19 = *((unsigned int *)t17);
    t20 = *((unsigned int *)t14);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB18;

LAB19:    memcpy(t42, t17, 8);

LAB20:    t33 = (t42 + 4);
    t69 = *((unsigned int *)t33);
    t70 = (~(t69));
    t71 = *((unsigned int *)t42);
    t72 = (t71 & t70);
    t73 = (t72 != 0);
    if (t73 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t6, 0, 8);
    xsi_vlog_signed_greater(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB32;

LAB33:
LAB34:
LAB30:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB6;

LAB14:    *((unsigned int *)t17) = 1;
    goto LAB17;

LAB16:    t13 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB17;

LAB18:    t15 = (t0 + 2408);
    t16 = (t15 + 56U);
    t18 = *((char **)t16);
    t24 = ((char*)((ng8)));
    memset(t27, 0, 8);
    xsi_vlog_signed_less(t27, 32, t18, 32, t24, 32);
    memset(t38, 0, 8);
    t25 = (t27 + 4);
    t22 = *((unsigned int *)t25);
    t23 = (~(t22));
    t39 = *((unsigned int *)t27);
    t40 = (t39 & t23);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t25) != 0)
        goto LAB23;

LAB24:    t43 = *((unsigned int *)t17);
    t44 = *((unsigned int *)t38);
    t45 = (t43 & t44);
    *((unsigned int *)t42) = t45;
    t28 = (t17 + 4);
    t29 = (t38 + 4);
    t30 = (t42 + 4);
    t46 = *((unsigned int *)t28);
    t47 = *((unsigned int *)t29);
    t48 = (t46 | t47);
    *((unsigned int *)t30) = t48;
    t49 = *((unsigned int *)t30);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB20;

LAB21:    *((unsigned int *)t38) = 1;
    goto LAB24;

LAB23:    t26 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB24;

LAB25:    t51 = *((unsigned int *)t42);
    t52 = *((unsigned int *)t30);
    *((unsigned int *)t42) = (t51 | t52);
    t31 = (t17 + 4);
    t32 = (t38 + 4);
    t53 = *((unsigned int *)t17);
    t54 = (~(t53));
    t55 = *((unsigned int *)t31);
    t56 = (~(t55));
    t57 = *((unsigned int *)t38);
    t58 = (~(t57));
    t59 = *((unsigned int *)t32);
    t60 = (~(t59));
    t61 = (t54 & t56);
    t62 = (t58 & t60);
    t63 = (~(t61));
    t64 = (~(t62));
    t65 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t65 & t63);
    t66 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t66 & t64);
    t67 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t67 & t63);
    t68 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t68 & t64);
    goto LAB27;

LAB28:    xsi_set_current_line(66, ng0);

LAB31:    xsi_set_current_line(67, ng0);
    t34 = ((char*)((ng3)));
    t35 = (t0 + 1928);
    xsi_vlogvar_assign_value(t35, t34, 0, 0, 1);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2248);
    t7 = (t5 + 72U);
    t13 = *((char **)t7);
    t14 = (t0 + 2248);
    t15 = (t14 + 64U);
    t16 = *((char **)t15);
    t18 = (t0 + 2408);
    t24 = (t18 + 56U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng7)));
    memset(t17, 0, 8);
    xsi_vlog_signed_minus(t17, 32, t25, 32, t26, 32);
    xsi_vlog_generic_get_array_select_value(t6, 1, t4, t13, t16, 2, 1, t17, 32, 1);
    t28 = (t0 + 1608);
    xsi_vlogvar_assign_value(t28, t6, 0, 0, 1);
    goto LAB30;

LAB32:    xsi_set_current_line(71, ng0);
    t13 = ((char*)((ng2)));
    t14 = (t0 + 1608);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 1);
    goto LAB34;

}


extern void work_m_00000000000468569973_1356243842_init()
{
	static char *pe[] = {(void *)Initial_45_0,(void *)Initial_55_1};
	xsi_register_didat("work_m_00000000000468569973_1356243842", "isim/Topmodule_tb_isim_beh.exe.sim/work/m_00000000000468569973_1356243842.didat");
	xsi_register_executes(pe);
}
