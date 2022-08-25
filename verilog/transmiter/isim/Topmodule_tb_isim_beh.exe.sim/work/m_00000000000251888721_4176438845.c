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
static const char *ng0 = "E:/courses/FPGA/Projects/verilog/New folder/transmiter/remote_sources/_/_/_/phase2/ConvolutionalEncoder/Encoder.v";
static int ng1[] = {1, 0};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U};



static void Always_36_0(char *t0)
{
    char t8[32];
    char t10[8];
    char t17[8];
    char t33[8];
    char t42[8];
    char t59[8];
    char t68[8];
    char t85[8];
    char t94[8];
    char t109[8];
    char t119[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t84;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    char *t110;
    char *t111;
    char *t112;
    char *t113;
    char *t114;
    char *t115;
    char *t116;
    unsigned int t117;
    int t118;
    char *t120;

LAB0:    t1 = (t0 + 3896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 4712);
    *((int *)t2) = 1;
    t3 = (t0 + 3928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 2496);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    xsi_vlog_unsigned_rshift(t8, 100, t6, 100, t7, 32);
    t9 = (t0 + 2656);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 100);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1456U);
    t3 = *((char **)t2);
    t2 = (t0 + 2816);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t10, 0, 8);
    t6 = (t10 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 0);
    t16 = (t15 & 1);
    *((unsigned int *)t6) = t16;
    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t10);
    t20 = (t18 ^ t19);
    *((unsigned int *)t17) = t20;
    t9 = (t3 + 4);
    t21 = (t10 + 4);
    t22 = (t17 + 4);
    t23 = *((unsigned int *)t9);
    t24 = *((unsigned int *)t21);
    t25 = (t23 | t24);
    *((unsigned int *)t22) = t25;
    t26 = *((unsigned int *)t22);
    t27 = (t26 != 0);
    if (t27 == 1)
        goto LAB6;

LAB7:
LAB8:    t30 = (t0 + 2816);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memset(t33, 0, 8);
    t34 = (t33 + 4);
    t35 = (t32 + 4);
    t36 = *((unsigned int *)t32);
    t37 = (t36 >> 1);
    t38 = (t37 & 1);
    *((unsigned int *)t33) = t38;
    t39 = *((unsigned int *)t35);
    t40 = (t39 >> 1);
    t41 = (t40 & 1);
    *((unsigned int *)t34) = t41;
    t43 = *((unsigned int *)t17);
    t44 = *((unsigned int *)t33);
    t45 = (t43 ^ t44);
    *((unsigned int *)t42) = t45;
    t46 = (t17 + 4);
    t47 = (t33 + 4);
    t48 = (t42 + 4);
    t49 = *((unsigned int *)t46);
    t50 = *((unsigned int *)t47);
    t51 = (t49 | t50);
    *((unsigned int *)t48) = t51;
    t52 = *((unsigned int *)t48);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB9;

LAB10:
LAB11:    t56 = (t0 + 2816);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    memset(t59, 0, 8);
    t60 = (t59 + 4);
    t61 = (t58 + 4);
    t62 = *((unsigned int *)t58);
    t63 = (t62 >> 3);
    t64 = (t63 & 1);
    *((unsigned int *)t59) = t64;
    t65 = *((unsigned int *)t61);
    t66 = (t65 >> 3);
    t67 = (t66 & 1);
    *((unsigned int *)t60) = t67;
    t69 = *((unsigned int *)t42);
    t70 = *((unsigned int *)t59);
    t71 = (t69 ^ t70);
    *((unsigned int *)t68) = t71;
    t72 = (t42 + 4);
    t73 = (t59 + 4);
    t74 = (t68 + 4);
    t75 = *((unsigned int *)t72);
    t76 = *((unsigned int *)t73);
    t77 = (t75 | t76);
    *((unsigned int *)t74) = t77;
    t78 = *((unsigned int *)t74);
    t79 = (t78 != 0);
    if (t79 == 1)
        goto LAB12;

LAB13:
LAB14:    t82 = (t0 + 2816);
    t83 = (t82 + 56U);
    t84 = *((char **)t83);
    memset(t85, 0, 8);
    t86 = (t85 + 4);
    t87 = (t84 + 4);
    t88 = *((unsigned int *)t84);
    t89 = (t88 >> 4);
    t90 = (t89 & 1);
    *((unsigned int *)t85) = t90;
    t91 = *((unsigned int *)t87);
    t92 = (t91 >> 4);
    t93 = (t92 & 1);
    *((unsigned int *)t86) = t93;
    t95 = *((unsigned int *)t68);
    t96 = *((unsigned int *)t85);
    t97 = (t95 ^ t96);
    *((unsigned int *)t94) = t97;
    t98 = (t68 + 4);
    t99 = (t85 + 4);
    t100 = (t94 + 4);
    t101 = *((unsigned int *)t98);
    t102 = *((unsigned int *)t99);
    t103 = (t101 | t102);
    *((unsigned int *)t100) = t103;
    t104 = *((unsigned int *)t100);
    t105 = (t104 != 0);
    if (t105 == 1)
        goto LAB15;

LAB16:
LAB17:    t108 = (t0 + 2656);
    t110 = (t0 + 2656);
    t111 = (t110 + 72U);
    t112 = *((char **)t111);
    t113 = (t0 + 2976);
    t114 = (t113 + 56U);
    t115 = *((char **)t114);
    xsi_vlog_generic_convert_bit_index(t109, t112, 2, t115, 7, 2);
    t116 = (t109 + 4);
    t117 = *((unsigned int *)t116);
    t118 = (!(t117));
    if (t118 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1456U);
    t3 = *((char **)t2);
    t2 = (t0 + 2816);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t10, 0, 8);
    t6 = (t10 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 0);
    t16 = (t15 & 1);
    *((unsigned int *)t6) = t16;
    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t10);
    t20 = (t18 ^ t19);
    *((unsigned int *)t17) = t20;
    t9 = (t3 + 4);
    t21 = (t10 + 4);
    t22 = (t17 + 4);
    t23 = *((unsigned int *)t9);
    t24 = *((unsigned int *)t21);
    t25 = (t23 | t24);
    *((unsigned int *)t22) = t25;
    t26 = *((unsigned int *)t22);
    t27 = (t26 != 0);
    if (t27 == 1)
        goto LAB20;

LAB21:
LAB22:    t30 = (t0 + 2816);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memset(t33, 0, 8);
    t34 = (t33 + 4);
    t35 = (t32 + 4);
    t36 = *((unsigned int *)t32);
    t37 = (t36 >> 3);
    t38 = (t37 & 1);
    *((unsigned int *)t33) = t38;
    t39 = *((unsigned int *)t35);
    t40 = (t39 >> 3);
    t41 = (t40 & 1);
    *((unsigned int *)t34) = t41;
    t43 = *((unsigned int *)t17);
    t44 = *((unsigned int *)t33);
    t45 = (t43 ^ t44);
    *((unsigned int *)t42) = t45;
    t46 = (t17 + 4);
    t47 = (t33 + 4);
    t48 = (t42 + 4);
    t49 = *((unsigned int *)t46);
    t50 = *((unsigned int *)t47);
    t51 = (t49 | t50);
    *((unsigned int *)t48) = t51;
    t52 = *((unsigned int *)t48);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB23;

LAB24:
LAB25:    t56 = (t0 + 2816);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    memset(t59, 0, 8);
    t60 = (t59 + 4);
    t61 = (t58 + 4);
    t62 = *((unsigned int *)t58);
    t63 = (t62 >> 4);
    t64 = (t63 & 1);
    *((unsigned int *)t59) = t64;
    t65 = *((unsigned int *)t61);
    t66 = (t65 >> 4);
    t67 = (t66 & 1);
    *((unsigned int *)t60) = t67;
    t69 = *((unsigned int *)t42);
    t70 = *((unsigned int *)t59);
    t71 = (t69 ^ t70);
    *((unsigned int *)t68) = t71;
    t72 = (t42 + 4);
    t73 = (t59 + 4);
    t74 = (t68 + 4);
    t75 = *((unsigned int *)t72);
    t76 = *((unsigned int *)t73);
    t77 = (t75 | t76);
    *((unsigned int *)t74) = t77;
    t78 = *((unsigned int *)t74);
    t79 = (t78 != 0);
    if (t79 == 1)
        goto LAB26;

LAB27:
LAB28:    t82 = (t0 + 2816);
    t83 = (t82 + 56U);
    t84 = *((char **)t83);
    memset(t85, 0, 8);
    t86 = (t85 + 4);
    t87 = (t84 + 4);
    t88 = *((unsigned int *)t84);
    t89 = (t88 >> 5);
    t90 = (t89 & 1);
    *((unsigned int *)t85) = t90;
    t91 = *((unsigned int *)t87);
    t92 = (t91 >> 5);
    t93 = (t92 & 1);
    *((unsigned int *)t86) = t93;
    t95 = *((unsigned int *)t68);
    t96 = *((unsigned int *)t85);
    t97 = (t95 ^ t96);
    *((unsigned int *)t94) = t97;
    t98 = (t68 + 4);
    t99 = (t85 + 4);
    t100 = (t94 + 4);
    t101 = *((unsigned int *)t98);
    t102 = *((unsigned int *)t99);
    t103 = (t101 | t102);
    *((unsigned int *)t100) = t103;
    t104 = *((unsigned int *)t100);
    t105 = (t104 != 0);
    if (t105 == 1)
        goto LAB29;

LAB30:
LAB31:    t108 = (t0 + 2656);
    t110 = (t0 + 2656);
    t111 = (t110 + 72U);
    t112 = *((char **)t111);
    t113 = (t0 + 2976);
    t114 = (t113 + 56U);
    t115 = *((char **)t114);
    t116 = ((char*)((ng1)));
    memset(t119, 0, 8);
    xsi_vlog_unsigned_add(t119, 32, t115, 7, t116, 32);
    xsi_vlog_generic_convert_bit_index(t109, t112, 2, t119, 32, 2);
    t120 = (t109 + 4);
    t117 = *((unsigned int *)t120);
    t118 = (!(t117));
    if (t118 == 1)
        goto LAB32;

LAB33:    goto LAB2;

LAB6:    t28 = *((unsigned int *)t17);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t17) = (t28 | t29);
    goto LAB8;

LAB9:    t54 = *((unsigned int *)t42);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t42) = (t54 | t55);
    goto LAB11;

LAB12:    t80 = *((unsigned int *)t68);
    t81 = *((unsigned int *)t74);
    *((unsigned int *)t68) = (t80 | t81);
    goto LAB14;

LAB15:    t106 = *((unsigned int *)t94);
    t107 = *((unsigned int *)t100);
    *((unsigned int *)t94) = (t106 | t107);
    goto LAB17;

LAB18:    xsi_vlogvar_assign_value(t108, t94, 0, *((unsigned int *)t109), 1);
    goto LAB19;

LAB20:    t28 = *((unsigned int *)t17);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t17) = (t28 | t29);
    goto LAB22;

LAB23:    t54 = *((unsigned int *)t42);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t42) = (t54 | t55);
    goto LAB25;

LAB26:    t80 = *((unsigned int *)t68);
    t81 = *((unsigned int *)t74);
    *((unsigned int *)t68) = (t80 | t81);
    goto LAB28;

LAB29:    t106 = *((unsigned int *)t94);
    t107 = *((unsigned int *)t100);
    *((unsigned int *)t94) = (t106 | t107);
    goto LAB31;

LAB32:    xsi_vlogvar_assign_value(t108, t94, 0, *((unsigned int *)t109), 1);
    goto LAB33;

}

static void Always_42_1(char *t0)
{
    char t6[8];
    char t22[8];
    char t35[8];
    char t54[8];
    char t62[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
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
    char *t21;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
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
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;

LAB0:    t1 = (t0 + 4144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 4728);
    *((int *)t2) = 1;
    t3 = (t0 + 4176);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 1776U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    memset(t22, 0, 8);
    t23 = (t6 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t23) != 0)
        goto LAB12;

LAB13:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = (!(t31));
    t33 = *((unsigned int *)t30);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB14;

LAB15:    memcpy(t62, t22, 8);

LAB16:    t90 = (t62 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t62);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(48, ng0);

LAB34:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 100, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 7, t4, 7, t5, 7);
    t7 = (t0 + 2976);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 7, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2816);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t22, 0, 8);
    t5 = (t22 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 1);
    *((unsigned int *)t22) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 1);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t13 & 31U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 31U);
    t8 = (t0 + 1456U);
    t21 = *((char **)t8);
    xsi_vlogtype_concat(t6, 6, 6, 2U, t21, 1, t22, 5);
    t8 = (t0 + 2816);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, 0, 6, 0LL);

LAB32:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t22) = 1;
    goto LAB13;

LAB12:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB13;

LAB14:    t36 = (t0 + 1936U);
    t37 = *((char **)t36);
    memset(t35, 0, 8);
    t36 = (t37 + 4);
    t38 = *((unsigned int *)t36);
    t39 = (~(t38));
    t40 = *((unsigned int *)t37);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t36) == 0)
        goto LAB17;

LAB19:    t43 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t43) = 1;

LAB20:    t44 = (t35 + 4);
    t45 = (t37 + 4);
    t46 = *((unsigned int *)t37);
    t47 = (~(t46));
    *((unsigned int *)t35) = t47;
    *((unsigned int *)t44) = 0;
    if (*((unsigned int *)t45) != 0)
        goto LAB22;

LAB21:    t52 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t52 & 1U);
    t53 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t53 & 1U);
    memset(t54, 0, 8);
    t55 = (t35 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t35);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t55) != 0)
        goto LAB25;

LAB26:    t63 = *((unsigned int *)t22);
    t64 = *((unsigned int *)t54);
    t65 = (t63 | t64);
    *((unsigned int *)t62) = t65;
    t66 = (t22 + 4);
    t67 = (t54 + 4);
    t68 = (t62 + 4);
    t69 = *((unsigned int *)t66);
    t70 = *((unsigned int *)t67);
    t71 = (t69 | t70);
    *((unsigned int *)t68) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB16;

LAB17:    *((unsigned int *)t35) = 1;
    goto LAB20;

LAB22:    t48 = *((unsigned int *)t35);
    t49 = *((unsigned int *)t45);
    *((unsigned int *)t35) = (t48 | t49);
    t50 = *((unsigned int *)t44);
    t51 = *((unsigned int *)t45);
    *((unsigned int *)t44) = (t50 | t51);
    goto LAB21;

LAB23:    *((unsigned int *)t54) = 1;
    goto LAB26;

LAB25:    t61 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB26;

LAB27:    t74 = *((unsigned int *)t62);
    t75 = *((unsigned int *)t68);
    *((unsigned int *)t62) = (t74 | t75);
    t76 = (t22 + 4);
    t77 = (t54 + 4);
    t78 = *((unsigned int *)t76);
    t79 = (~(t78));
    t80 = *((unsigned int *)t22);
    t81 = (t80 & t79);
    t82 = *((unsigned int *)t77);
    t83 = (~(t82));
    t84 = *((unsigned int *)t54);
    t85 = (t84 & t83);
    t86 = (~(t81));
    t87 = (~(t85));
    t88 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t88 & t86);
    t89 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t89 & t87);
    goto LAB29;

LAB30:    xsi_set_current_line(43, ng0);

LAB33:    xsi_set_current_line(44, ng0);
    t96 = ((char*)((ng3)));
    t97 = (t0 + 2816);
    xsi_vlogvar_wait_assign_value(t97, t96, 0, 0, 6, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 100, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    goto LAB32;

}

static void Cont_56_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 4824);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 4744);
    *((int *)t27) = 1;

LAB1:    return;
}


extern void work_m_00000000000251888721_4176438845_init()
{
	static char *pe[] = {(void *)Always_36_0,(void *)Always_42_1,(void *)Cont_56_2};
	xsi_register_didat("work_m_00000000000251888721_4176438845", "isim/Topmodule_tb_isim_beh.exe.sim/work/m_00000000000251888721_4176438845.didat");
	xsi_register_executes(pe);
}
