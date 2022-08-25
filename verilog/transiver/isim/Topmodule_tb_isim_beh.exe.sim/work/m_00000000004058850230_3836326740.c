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
static const char *ng0 = "E:/courses/FPGA/Projects/verilog/New folder/transiver/remote_sources/_/Scramble/Scrambler_control.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {12U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {36U, 0U};
static unsigned int ng5[] = {84U, 0U};



static void Always_45_0(char *t0)
{
    char t4[8];
    char t23[8];
    char t38[8];
    char t45[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
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
    unsigned int t35;
    char *t36;
    char *t37;
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

LAB0:    t1 = (t0 + 3488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 3808);
    *((int *)t2) = 1;
    t3 = (t0 + 3520);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);

LAB5:    xsi_set_current_line(46, ng0);
    t5 = (t0 + 1528U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    memset(t23, 0, 8);
    t24 = (t4 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t24) != 0)
        goto LAB14;

LAB15:    t31 = (t23 + 4);
    t32 = *((unsigned int *)t23);
    t33 = (!(t32));
    t34 = *((unsigned int *)t31);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB16;

LAB17:    memcpy(t45, t23, 8);

LAB18:    t73 = (t45 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t45);
    t77 = (t76 & t75);
    t78 = (t77 != 0);
    if (t78 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB31;

LAB30:    t13 = (t6 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB31;

LAB34:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB32;

LAB33:    t24 = (t4 + 4);
    t7 = *((unsigned int *)t24);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB42;

LAB41:    t13 = (t6 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB42;

LAB45:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB43;

LAB44:    t24 = (t4 + 4);
    t7 = *((unsigned int *)t24);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB51;

LAB50:    t13 = (t6 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB51;

LAB54:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB52;

LAB53:    t24 = (t4 + 4);
    t7 = *((unsigned int *)t24);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(68, ng0);

LAB59:    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 12, 0LL);

LAB57:
LAB48:
LAB37:
LAB28:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    *((unsigned int *)t23) = 1;
    goto LAB15;

LAB14:    t30 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB15;

LAB16:    t36 = (t0 + 1368U);
    t37 = *((char **)t36);
    memset(t38, 0, 8);
    t36 = (t37 + 4);
    t39 = *((unsigned int *)t36);
    t40 = (~(t39));
    t41 = *((unsigned int *)t37);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t36) != 0)
        goto LAB21;

LAB22:    t46 = *((unsigned int *)t23);
    t47 = *((unsigned int *)t38);
    t48 = (t46 | t47);
    *((unsigned int *)t45) = t48;
    t49 = (t23 + 4);
    t50 = (t38 + 4);
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
LAB25:    goto LAB18;

LAB19:    *((unsigned int *)t38) = 1;
    goto LAB22;

LAB21:    t44 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB22;

LAB23:    t57 = *((unsigned int *)t45);
    t58 = *((unsigned int *)t51);
    *((unsigned int *)t45) = (t57 | t58);
    t59 = (t23 + 4);
    t60 = (t38 + 4);
    t61 = *((unsigned int *)t59);
    t62 = (~(t61));
    t63 = *((unsigned int *)t23);
    t64 = (t63 & t62);
    t65 = *((unsigned int *)t60);
    t66 = (~(t65));
    t67 = *((unsigned int *)t38);
    t68 = (t67 & t66);
    t69 = (~(t64));
    t70 = (~(t68));
    t71 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t71 & t69);
    t72 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t72 & t70);
    goto LAB25;

LAB26:    xsi_set_current_line(46, ng0);

LAB29:    xsi_set_current_line(47, ng0);
    t79 = ((char*)((ng1)));
    t80 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t80, t79, 0, 0, 1, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 12, 0LL);
    goto LAB28;

LAB31:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB33;

LAB32:    *((unsigned int *)t4) = 1;
    goto LAB33;

LAB35:    xsi_set_current_line(52, ng0);

LAB38:    xsi_set_current_line(53, ng0);
    t30 = ((char*)((ng3)));
    t31 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 1, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 2568);
    t5 = (t0 + 2568);
    t6 = (t5 + 72U);
    t12 = *((char **)t6);
    t13 = (t0 + 2408);
    t14 = (t13 + 56U);
    t24 = *((char **)t14);
    xsi_vlog_generic_convert_bit_index(t4, t12, 2, t24, 7, 2);
    t30 = (t4 + 4);
    t7 = *((unsigned int *)t30);
    t64 = (!(t7));
    if (t64 == 1)
        goto LAB39;

LAB40:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 7, t5, 7, t6, 7);
    t12 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 7, 0LL);
    goto LAB37;

LAB39:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB40;

LAB42:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB44;

LAB43:    *((unsigned int *)t4) = 1;
    goto LAB44;

LAB46:    xsi_set_current_line(57, ng0);

LAB49:    xsi_set_current_line(58, ng0);
    t30 = (t0 + 2568);
    t31 = (t30 + 56U);
    t36 = *((char **)t31);
    memset(t23, 0, 8);
    t37 = (t23 + 4);
    t44 = (t36 + 4);
    t15 = *((unsigned int *)t36);
    t16 = (t15 >> 0);
    t17 = (t16 & 1);
    *((unsigned int *)t23) = t17;
    t18 = *((unsigned int *)t44);
    t19 = (t18 >> 0);
    t20 = (t19 & 1);
    *((unsigned int *)t37) = t20;
    t49 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t49, t23, 0, 0, 1, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t23, 0, 8);
    t6 = (t23 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 1);
    *((unsigned int *)t23) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t11 & 2047U);
    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 2047U);
    t13 = (t0 + 1208U);
    t14 = *((char **)t13);
    xsi_vlogtype_concat(t4, 12, 12, 2U, t14, 1, t23, 11);
    t13 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 12, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 7, t5, 7, t6, 7);
    t12 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 7, 0LL);
    goto LAB48;

LAB51:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB53;

LAB52:    *((unsigned int *)t4) = 1;
    goto LAB53;

LAB55:    xsi_set_current_line(62, ng0);

LAB58:    xsi_set_current_line(63, ng0);
    t30 = ((char*)((ng3)));
    t31 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 1, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t23, 0, 8);
    t6 = (t23 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 1);
    *((unsigned int *)t23) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t11 & 2047U);
    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 2047U);
    t13 = (t0 + 1208U);
    t14 = *((char **)t13);
    xsi_vlogtype_concat(t4, 12, 12, 2U, t14, 1, t23, 11);
    t13 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 12, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 7, t5, 7, t6, 7);
    t12 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 7, 0LL);
    goto LAB57;

}


extern void work_m_00000000004058850230_3836326740_init()
{
	static char *pe[] = {(void *)Always_45_0};
	xsi_register_didat("work_m_00000000004058850230_3836326740", "isim/Topmodule_tb_isim_beh.exe.sim/work/m_00000000004058850230_3836326740.didat");
	xsi_register_executes(pe);
}
