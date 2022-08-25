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
static const char *ng0 = "E:/courses/FPGA/Projects/verilog/New folder/reciever/remote_sources/_/Descrambler/Descrambler.v";
static unsigned int ng1[] = {6U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {7U, 0U};
static int ng4[] = {1, 0};



static void Cont_32_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char t27[8];
    char t36[8];
    char t53[8];
    char t62[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t52;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 2088);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB5;

LAB4:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t6) > *((unsigned int *)t7))
        goto LAB6;

LAB7:    memset(t4, 0, 8);
    t12 = (t8 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t8);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t12) != 0)
        goto LAB11;

LAB12:    t19 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t19);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB13;

LAB14:    t76 = *((unsigned int *)t4);
    t77 = (~(t76));
    t78 = *((unsigned int *)t19);
    t79 = (t77 || t78);
    if (t79 > 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t19) > 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t4) > 0)
        goto LAB19;

LAB20:    memcpy(t3, t80, 8);

LAB21:    t81 = (t0 + 3832);
    t82 = (t81 + 56U);
    t83 = *((char **)t82);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    memset(t85, 0, 8);
    t86 = 1U;
    t87 = t86;
    t88 = (t3 + 4);
    t89 = *((unsigned int *)t3);
    t86 = (t86 & t89);
    t90 = *((unsigned int *)t88);
    t87 = (t87 & t90);
    t91 = (t85 + 4);
    t92 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t92 | t86);
    t93 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t93 | t87);
    xsi_driver_vfirst_trans(t81, 0, 0);
    t94 = (t0 + 3736);
    *((int *)t94) = 1;

LAB1:    return;
LAB5:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t8) = 1;
    goto LAB7;

LAB9:    *((unsigned int *)t4) = 1;
    goto LAB12;

LAB11:    t18 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB12;

LAB13:    t23 = (t0 + 1368U);
    t24 = *((char **)t23);
    t23 = (t0 + 2248);
    t25 = (t23 + 56U);
    t26 = *((char **)t25);
    memset(t27, 0, 8);
    t28 = (t27 + 4);
    t29 = (t26 + 4);
    t30 = *((unsigned int *)t26);
    t31 = (t30 >> 6);
    t32 = (t31 & 1);
    *((unsigned int *)t27) = t32;
    t33 = *((unsigned int *)t29);
    t34 = (t33 >> 6);
    t35 = (t34 & 1);
    *((unsigned int *)t28) = t35;
    t37 = *((unsigned int *)t24);
    t38 = *((unsigned int *)t27);
    t39 = (t37 ^ t38);
    *((unsigned int *)t36) = t39;
    t40 = (t24 + 4);
    t41 = (t27 + 4);
    t42 = (t36 + 4);
    t43 = *((unsigned int *)t40);
    t44 = *((unsigned int *)t41);
    t45 = (t43 | t44);
    *((unsigned int *)t42) = t45;
    t46 = *((unsigned int *)t42);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB22;

LAB23:
LAB24:    t50 = (t0 + 2248);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    memset(t53, 0, 8);
    t54 = (t53 + 4);
    t55 = (t52 + 4);
    t56 = *((unsigned int *)t52);
    t57 = (t56 >> 3);
    t58 = (t57 & 1);
    *((unsigned int *)t53) = t58;
    t59 = *((unsigned int *)t55);
    t60 = (t59 >> 3);
    t61 = (t60 & 1);
    *((unsigned int *)t54) = t61;
    t63 = *((unsigned int *)t36);
    t64 = *((unsigned int *)t53);
    t65 = (t63 ^ t64);
    *((unsigned int *)t62) = t65;
    t66 = (t36 + 4);
    t67 = (t53 + 4);
    t68 = (t62 + 4);
    t69 = *((unsigned int *)t66);
    t70 = *((unsigned int *)t67);
    t71 = (t69 | t70);
    *((unsigned int *)t68) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB14;

LAB15:    t80 = ((char*)((ng2)));
    goto LAB16;

LAB17:    xsi_vlog_unsigned_bit_combine(t3, 1, t62, 1, t80, 1);
    goto LAB21;

LAB19:    memcpy(t3, t62, 8);
    goto LAB21;

LAB22:    t48 = *((unsigned int *)t36);
    t49 = *((unsigned int *)t42);
    *((unsigned int *)t36) = (t48 | t49);
    goto LAB24;

LAB25:    t74 = *((unsigned int *)t62);
    t75 = *((unsigned int *)t68);
    *((unsigned int *)t62) = (t74 | t75);
    goto LAB27;

}

static void Always_34_1(char *t0)
{
    char t4[8];
    char t23[8];
    char t38[8];
    char t45[8];
    char t81[8];
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

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 3752);
    *((int *)t2) = 1;
    t3 = (t0 + 3448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(35, ng0);
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

LAB27:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB30;

LAB31:
LAB32:
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

LAB16:    t36 = (t0 + 1208U);
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

LAB26:    xsi_set_current_line(35, ng0);

LAB29:    xsi_set_current_line(36, ng0);
    t79 = ((char*)((ng2)));
    t80 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t80, t79, 0, 0, 7, 0LL);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB28;

LAB30:    xsi_set_current_line(39, ng0);

LAB33:    xsi_set_current_line(40, ng0);
    t5 = (t0 + 2088);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng3)));
    memset(t4, 0, 8);
    t14 = (t12 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB35;

LAB34:    t24 = (t13 + 4);
    if (*((unsigned int *)t24) != 0)
        goto LAB35;

LAB38:    if (*((unsigned int *)t12) < *((unsigned int *)t13))
        goto LAB36;

LAB37:    t31 = (t4 + 4);
    t15 = *((unsigned int *)t31);
    t16 = (~(t15));
    t17 = *((unsigned int *)t4);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t23, 0, 8);
    t6 = (t23 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 6);
    t9 = (t8 & 1);
    *((unsigned int *)t23) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 6);
    t15 = (t11 & 1);
    *((unsigned int *)t6) = t15;
    t13 = (t0 + 2248);
    t14 = (t13 + 56U);
    t24 = *((char **)t14);
    memset(t38, 0, 8);
    t30 = (t38 + 4);
    t31 = (t24 + 4);
    t16 = *((unsigned int *)t24);
    t17 = (t16 >> 3);
    t18 = (t17 & 1);
    *((unsigned int *)t38) = t18;
    t19 = *((unsigned int *)t31);
    t20 = (t19 >> 3);
    t21 = (t20 & 1);
    *((unsigned int *)t30) = t21;
    t22 = *((unsigned int *)t23);
    t25 = *((unsigned int *)t38);
    t26 = (t22 ^ t25);
    *((unsigned int *)t45) = t26;
    t36 = (t23 + 4);
    t37 = (t38 + 4);
    t44 = (t45 + 4);
    t27 = *((unsigned int *)t36);
    t28 = *((unsigned int *)t37);
    t29 = (t27 | t28);
    *((unsigned int *)t44) = t29;
    t32 = *((unsigned int *)t44);
    t33 = (t32 != 0);
    if (t33 == 1)
        goto LAB43;

LAB44:
LAB45:    t49 = (t0 + 2248);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    memset(t81, 0, 8);
    t59 = (t81 + 4);
    t60 = (t51 + 4);
    t39 = *((unsigned int *)t51);
    t40 = (t39 >> 0);
    *((unsigned int *)t81) = t40;
    t41 = *((unsigned int *)t60);
    t42 = (t41 >> 0);
    *((unsigned int *)t59) = t42;
    t43 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t43 & 63U);
    t46 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t46 & 63U);
    xsi_vlogtype_concat(t4, 7, 7, 2U, t81, 6, t45, 1);
    t73 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t73, t4, 0, 0, 7, 0LL);

LAB41:    goto LAB32;

LAB35:    t30 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB37;

LAB36:    *((unsigned int *)t4) = 1;
    goto LAB37;

LAB39:    xsi_set_current_line(40, ng0);

LAB42:    xsi_set_current_line(41, ng0);
    t36 = (t0 + 1368U);
    t37 = *((char **)t36);
    t36 = (t0 + 2248);
    t44 = (t36 + 56U);
    t49 = *((char **)t44);
    memset(t38, 0, 8);
    t50 = (t38 + 4);
    t51 = (t49 + 4);
    t20 = *((unsigned int *)t49);
    t21 = (t20 >> 0);
    *((unsigned int *)t38) = t21;
    t22 = *((unsigned int *)t51);
    t25 = (t22 >> 0);
    *((unsigned int *)t50) = t25;
    t26 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t26 & 63U);
    t27 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t27 & 63U);
    xsi_vlogtype_concat(t23, 7, 7, 2U, t38, 6, t37, 1);
    t59 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t59, t23, 0, 0, 7, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 3, t6, 32);
    t12 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 3, 0LL);
    goto LAB41;

LAB43:    t34 = *((unsigned int *)t45);
    t35 = *((unsigned int *)t44);
    *((unsigned int *)t45) = (t34 | t35);
    goto LAB45;

}


extern void work_m_00000000001357163849_1252677226_init()
{
	static char *pe[] = {(void *)Cont_32_0,(void *)Always_34_1};
	xsi_register_didat("work_m_00000000001357163849_1252677226", "isim/Topmodule_tb_isim_beh.exe.sim/work/m_00000000001357163849_1252677226.didat");
	xsi_register_executes(pe);
}
