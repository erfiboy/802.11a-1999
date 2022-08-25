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
static const char *ng0 = "E:/courses/FPGA/Projects/verilog/New folder/transiver/control_interleaver.v";
static int ng1[] = {96, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {0U, 0U, 0U, 0U};
static unsigned int ng4[] = {12U, 0U};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {24U, 0U};
static unsigned int ng7[] = {96U, 0U};
static int ng8[] = {14, 0};
static int ng9[] = {1, 0};
static int ng10[] = {192, 0};
static int ng11[] = {24, 0};



static void Cont_38_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 4608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5520);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 4095U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 11);

LAB1:    return;
}

static void Always_52_1(char *t0)
{
    char t6[8];
    char t18[8];
    char t37[8];
    char t45[8];
    char t81[8];
    char t90[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t91;

LAB0:    t1 = (t0 + 4856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 5424);
    *((int *)t2) = 1;
    t3 = (t0 + 4888);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(52, ng0);

LAB5:    xsi_set_current_line(53, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t4) != 0)
        goto LAB8;

LAB9:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (!(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB10;

LAB11:    memcpy(t45, t6, 8);

LAB12:    t73 = (t45 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t45);
    t77 = (t76 & t75);
    t78 = (t77 != 0);
    if (t78 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t12 = (t4 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB31;

LAB30:    t13 = (t5 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB31;

LAB34:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB32;

LAB33:    t20 = (t6 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t12 = (t4 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB49;

LAB48:    t13 = (t5 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB49;

LAB52:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB50;

LAB51:    t20 = (t6 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t12 = (t4 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB69;

LAB68:    t13 = (t5 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB69;

LAB72:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB70;

LAB71:    memset(t18, 0, 8);
    t20 = (t6 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t20) != 0)
        goto LAB75;

LAB76:    t27 = (t18 + 4);
    t14 = *((unsigned int *)t18);
    t15 = *((unsigned int *)t27);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB77;

LAB78:    memcpy(t81, t18, 8);

LAB79:    t85 = (t81 + 4);
    t61 = *((unsigned int *)t85);
    t62 = (~(t61));
    t63 = *((unsigned int *)t81);
    t65 = (t63 & t62);
    t66 = (t65 != 0);
    if (t66 > 0)
        goto LAB92;

LAB93:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t12 = (t4 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB97;

LAB96:    t13 = (t5 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB97;

LAB100:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB98;

LAB99:    memset(t18, 0, 8);
    t20 = (t6 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB101;

LAB102:    if (*((unsigned int *)t20) != 0)
        goto LAB103;

LAB104:    t27 = (t18 + 4);
    t14 = *((unsigned int *)t18);
    t15 = *((unsigned int *)t27);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB105;

LAB106:    memcpy(t81, t18, 8);

LAB107:    t85 = (t81 + 4);
    t61 = *((unsigned int *)t85);
    t62 = (~(t61));
    t63 = *((unsigned int *)t81);
    t65 = (t63 & t62);
    t66 = (t65 != 0);
    if (t66 > 0)
        goto LAB120;

LAB121:    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB122:
LAB94:
LAB55:
LAB37:
LAB28:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t19 = (t0 + 1368U);
    t20 = *((char **)t19);
    memset(t18, 0, 8);
    t19 = (t20 + 4);
    t21 = *((unsigned int *)t19);
    t22 = (~(t21));
    t23 = *((unsigned int *)t20);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t19) == 0)
        goto LAB13;

LAB15:    t26 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t26) = 1;

LAB16:    t27 = (t18 + 4);
    t28 = (t20 + 4);
    t29 = *((unsigned int *)t20);
    t30 = (~(t29));
    *((unsigned int *)t18) = t30;
    *((unsigned int *)t27) = 0;
    if (*((unsigned int *)t28) != 0)
        goto LAB18;

LAB17:    t35 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t35 & 1U);
    t36 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t36 & 1U);
    memset(t37, 0, 8);
    t38 = (t18 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t18);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t38) != 0)
        goto LAB21;

LAB22:    t46 = *((unsigned int *)t6);
    t47 = *((unsigned int *)t37);
    t48 = (t46 | t47);
    *((unsigned int *)t45) = t48;
    t49 = (t6 + 4);
    t50 = (t37 + 4);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t49);
    t53 = *((unsigned int *)t50);
    t54 = (t52 | t53);
    *((unsigned int *)t51) = t54;
    t55 = *((unsigned int *)t51);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB12;

LAB13:    *((unsigned int *)t18) = 1;
    goto LAB16;

LAB18:    t31 = *((unsigned int *)t18);
    t32 = *((unsigned int *)t28);
    *((unsigned int *)t18) = (t31 | t32);
    t33 = *((unsigned int *)t27);
    t34 = *((unsigned int *)t28);
    *((unsigned int *)t27) = (t33 | t34);
    goto LAB17;

LAB19:    *((unsigned int *)t37) = 1;
    goto LAB22;

LAB21:    t44 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB22;

LAB23:    t57 = *((unsigned int *)t45);
    t58 = *((unsigned int *)t51);
    *((unsigned int *)t45) = (t57 | t58);
    t59 = (t6 + 4);
    t60 = (t37 + 4);
    t61 = *((unsigned int *)t59);
    t62 = (~(t61));
    t63 = *((unsigned int *)t6);
    t64 = (t63 & t62);
    t65 = *((unsigned int *)t60);
    t66 = (~(t65));
    t67 = *((unsigned int *)t37);
    t68 = (t67 & t66);
    t69 = (~(t64));
    t70 = (~(t68));
    t71 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t71 & t69);
    t72 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t72 & t70);
    goto LAB25;

LAB26:    xsi_set_current_line(53, ng0);

LAB29:    xsi_set_current_line(54, ng0);
    t79 = ((char*)((ng2)));
    t80 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t80, t79, 0, 0, 1, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 9, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 9, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 36, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    goto LAB28;

LAB31:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB33;

LAB32:    *((unsigned int *)t6) = 1;
    goto LAB33;

LAB35:    xsi_set_current_line(63, ng0);

LAB38:    xsi_set_current_line(64, ng0);
    t26 = (t0 + 1528U);
    t27 = *((char **)t26);
    t26 = (t27 + 4);
    t14 = *((unsigned int *)t26);
    t15 = (~(t14));
    t16 = *((unsigned int *)t27);
    t17 = (t16 & t15);
    t21 = (t17 != 0);
    if (t21 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(69, ng0);

LAB45:    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3528);
    t4 = (t0 + 3528);
    t5 = (t4 + 72U);
    t12 = *((char **)t5);
    t13 = (t0 + 3048);
    t19 = (t13 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_generic_convert_bit_index(t6, t12, 2, t20, 4, 2);
    t26 = (t6 + 4);
    t7 = *((unsigned int *)t26);
    t64 = (!(t7));
    if (t64 == 1)
        goto LAB46;

LAB47:
LAB41:    goto LAB37;

LAB39:    xsi_set_current_line(64, ng0);

LAB42:    xsi_set_current_line(65, ng0);
    t28 = (t0 + 3048);
    t38 = (t28 + 56U);
    t44 = *((char **)t38);
    t49 = ((char*)((ng5)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 4, t44, 4, t49, 4);
    t50 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t50, t18, 0, 0, 4, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3528);
    t4 = (t0 + 3528);
    t5 = (t4 + 72U);
    t12 = *((char **)t5);
    t13 = (t0 + 3048);
    t19 = (t13 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_generic_convert_bit_index(t6, t12, 2, t20, 4, 2);
    t26 = (t6 + 4);
    t7 = *((unsigned int *)t26);
    t64 = (!(t7));
    if (t64 == 1)
        goto LAB43;

LAB44:    goto LAB41;

LAB43:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t6), 1, 0LL);
    goto LAB44;

LAB46:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t6), 1, 0LL);
    goto LAB47;

LAB49:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB51;

LAB50:    *((unsigned int *)t6) = 1;
    goto LAB51;

LAB53:    xsi_set_current_line(75, ng0);

LAB56:    xsi_set_current_line(76, ng0);
    t26 = (t0 + 2888);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t38 = ((char*)((ng5)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 6, t28, 6, t38, 6);
    t44 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t44, t18, 0, 0, 6, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 3528);
    t4 = (t0 + 3528);
    t5 = (t4 + 72U);
    t12 = *((char **)t5);
    t13 = (t0 + 3048);
    t19 = (t13 + 56U);
    t20 = *((char **)t19);
    t26 = (t0 + 2888);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 6, t20, 4, t28, 6);
    xsi_vlog_generic_convert_bit_index(t6, t12, 2, t18, 6, 2);
    t38 = (t6 + 4);
    t7 = *((unsigned int *)t38);
    t64 = (!(t7));
    if (t64 == 1)
        goto LAB57;

LAB58:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t12 = (t4 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB60;

LAB59:    t13 = (t5 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB60;

LAB63:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB61;

LAB62:    t20 = (t6 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB64;

LAB65:
LAB66:    goto LAB55;

LAB57:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t6), 1, 0LL);
    goto LAB58;

LAB60:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB62;

LAB61:    *((unsigned int *)t6) = 1;
    goto LAB62;

LAB64:    xsi_set_current_line(78, ng0);

LAB67:    xsi_set_current_line(79, ng0);
    t26 = (t0 + 3528);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t38 = (t0 + 3528);
    t44 = (t38 + 72U);
    t49 = *((char **)t44);
    t50 = (t0 + 3688);
    t51 = (t50 + 56U);
    t59 = *((char **)t51);
    xsi_vlog_generic_get_index_select_value(t18, 1, t28, t49, 2, t59, 6, 2);
    t60 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t60, t18, 0, 0, 1, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 6, t4, 6, t5, 6);
    t12 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, 0, 6, 0LL);
    goto LAB66;

LAB69:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB71;

LAB70:    *((unsigned int *)t6) = 1;
    goto LAB71;

LAB73:    *((unsigned int *)t18) = 1;
    goto LAB76;

LAB75:    t26 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB76;

LAB77:    t28 = (t0 + 3368);
    t38 = (t28 + 56U);
    t44 = *((char **)t38);
    t49 = ((char*)((ng8)));
    memset(t37, 0, 8);
    t50 = (t44 + 4);
    if (*((unsigned int *)t50) != 0)
        goto LAB81;

LAB80:    t51 = (t49 + 4);
    if (*((unsigned int *)t51) != 0)
        goto LAB81;

LAB84:    if (*((unsigned int *)t44) < *((unsigned int *)t49))
        goto LAB82;

LAB83:    memset(t45, 0, 8);
    t60 = (t37 + 4);
    t17 = *((unsigned int *)t60);
    t21 = (~(t17));
    t22 = *((unsigned int *)t37);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t60) != 0)
        goto LAB87;

LAB88:    t25 = *((unsigned int *)t18);
    t29 = *((unsigned int *)t45);
    t30 = (t25 & t29);
    *((unsigned int *)t81) = t30;
    t79 = (t18 + 4);
    t80 = (t45 + 4);
    t82 = (t81 + 4);
    t31 = *((unsigned int *)t79);
    t32 = *((unsigned int *)t80);
    t33 = (t31 | t32);
    *((unsigned int *)t82) = t33;
    t34 = *((unsigned int *)t82);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB89;

LAB90:
LAB91:    goto LAB79;

LAB81:    t59 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB83;

LAB82:    *((unsigned int *)t37) = 1;
    goto LAB83;

LAB85:    *((unsigned int *)t45) = 1;
    goto LAB88;

LAB87:    t73 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t73) = 1;
    goto LAB88;

LAB89:    t36 = *((unsigned int *)t81);
    t39 = *((unsigned int *)t82);
    *((unsigned int *)t81) = (t36 | t39);
    t83 = (t18 + 4);
    t84 = (t45 + 4);
    t40 = *((unsigned int *)t18);
    t41 = (~(t40));
    t42 = *((unsigned int *)t83);
    t43 = (~(t42));
    t46 = *((unsigned int *)t45);
    t47 = (~(t46));
    t48 = *((unsigned int *)t84);
    t52 = (~(t48));
    t64 = (t41 & t43);
    t68 = (t47 & t52);
    t53 = (~(t64));
    t54 = (~(t68));
    t55 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t55 & t53);
    t56 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t56 & t54);
    t57 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t57 & t53);
    t58 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t58 & t54);
    goto LAB91;

LAB92:    xsi_set_current_line(83, ng0);

LAB95:    xsi_set_current_line(84, ng0);
    t86 = (t0 + 3368);
    t87 = (t86 + 56U);
    t88 = *((char **)t87);
    t89 = ((char*)((ng5)));
    memset(t90, 0, 8);
    xsi_vlog_unsigned_add(t90, 9, t88, 9, t89, 9);
    t91 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t91, t90, 0, 0, 9, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3528);
    t12 = (t5 + 72U);
    t13 = *((char **)t12);
    t19 = (t0 + 3688);
    t20 = (t19 + 56U);
    t26 = *((char **)t20);
    xsi_vlog_generic_get_index_select_value(t6, 1, t4, t13, 2, t26, 6, 2);
    t27 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t27, t6, 0, 0, 1, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 6, t4, 6, t5, 6);
    t12 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, 0, 6, 0LL);
    goto LAB94;

LAB97:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB99;

LAB98:    *((unsigned int *)t6) = 1;
    goto LAB99;

LAB101:    *((unsigned int *)t18) = 1;
    goto LAB104;

LAB103:    t26 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB104;

LAB105:    t28 = (t0 + 3368);
    t38 = (t28 + 56U);
    t44 = *((char **)t38);
    t49 = ((char*)((ng10)));
    memset(t37, 0, 8);
    t50 = (t44 + 4);
    if (*((unsigned int *)t50) != 0)
        goto LAB109;

LAB108:    t51 = (t49 + 4);
    if (*((unsigned int *)t51) != 0)
        goto LAB109;

LAB112:    if (*((unsigned int *)t44) < *((unsigned int *)t49))
        goto LAB110;

LAB111:    memset(t45, 0, 8);
    t60 = (t37 + 4);
    t17 = *((unsigned int *)t60);
    t21 = (~(t17));
    t22 = *((unsigned int *)t37);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB113;

LAB114:    if (*((unsigned int *)t60) != 0)
        goto LAB115;

LAB116:    t25 = *((unsigned int *)t18);
    t29 = *((unsigned int *)t45);
    t30 = (t25 & t29);
    *((unsigned int *)t81) = t30;
    t79 = (t18 + 4);
    t80 = (t45 + 4);
    t82 = (t81 + 4);
    t31 = *((unsigned int *)t79);
    t32 = *((unsigned int *)t80);
    t33 = (t31 | t32);
    *((unsigned int *)t82) = t33;
    t34 = *((unsigned int *)t82);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB117;

LAB118:
LAB119:    goto LAB107;

LAB109:    t59 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB111;

LAB110:    *((unsigned int *)t37) = 1;
    goto LAB111;

LAB113:    *((unsigned int *)t45) = 1;
    goto LAB116;

LAB115:    t73 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t73) = 1;
    goto LAB116;

LAB117:    t36 = *((unsigned int *)t81);
    t39 = *((unsigned int *)t82);
    *((unsigned int *)t81) = (t36 | t39);
    t83 = (t18 + 4);
    t84 = (t45 + 4);
    t40 = *((unsigned int *)t18);
    t41 = (~(t40));
    t42 = *((unsigned int *)t83);
    t43 = (~(t42));
    t46 = *((unsigned int *)t45);
    t47 = (~(t46));
    t48 = *((unsigned int *)t84);
    t52 = (~(t48));
    t64 = (t41 & t43);
    t68 = (t47 & t52);
    t53 = (~(t64));
    t54 = (~(t68));
    t55 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t55 & t53);
    t56 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t56 & t54);
    t57 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t57 & t53);
    t58 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t58 & t54);
    goto LAB119;

LAB120:    xsi_set_current_line(91, ng0);

LAB123:    xsi_set_current_line(92, ng0);
    t86 = (t0 + 1688U);
    t87 = *((char **)t86);
    t86 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t86, t87, 0, 0, 1, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 9, t4, 9, t5, 9);
    t12 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, 0, 9, 0LL);
    goto LAB122;

}

static void Cont_100_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;

LAB0:    t1 = (t0 + 5104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 2888);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng11)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    memset(t4, 0, 8);
    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t24) != 0)
        goto LAB10;

LAB11:    t31 = (t4 + 4);
    t32 = *((unsigned int *)t4);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t31) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t40, 8);

LAB20:    t41 = (t0 + 5584);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memset(t45, 0, 8);
    t46 = 1U;
    t47 = t46;
    t48 = (t3 + 4);
    t49 = *((unsigned int *)t3);
    t46 = (t46 & t49);
    t50 = *((unsigned int *)t48);
    t47 = (t47 & t50);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t52 | t46);
    t53 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t53 | t47);
    xsi_driver_vfirst_trans(t41, 0, 0);
    t54 = (t0 + 5440);
    *((int *)t54) = 1;

LAB1:    return;
LAB6:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t30 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB11;

LAB12:    t35 = ((char*)((ng5)));
    goto LAB13;

LAB14:    t40 = ((char*)((ng2)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 1, t35, 1, t40, 1);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

}


extern void work_m_00000000002985471261_0257832482_init()
{
	static char *pe[] = {(void *)Cont_38_0,(void *)Always_52_1,(void *)Cont_100_2};
	xsi_register_didat("work_m_00000000002985471261_0257832482", "isim/Topmodule_tb_isim_beh.exe.sim/work/m_00000000002985471261_0257832482.didat");
	xsi_register_executes(pe);
}
