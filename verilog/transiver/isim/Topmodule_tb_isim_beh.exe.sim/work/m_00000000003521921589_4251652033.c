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
static const char *ng0 = "E:/courses/FPGA/Projects/verilog/New folder/transiver/contor_conv.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {12U, 0U};
static int ng3[] = {12, 0};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {24U, 0U};
static int ng6[] = {96, 0};
static int ng7[] = {1, 0};
static int ng8[] = {0, 0};
static int ng9[] = {24, 0};



static void Always_43_0(char *t0)
{
    char t6[8];
    char t18[8];
    char t37[8];
    char t45[8];
    char t81[8];
    char t99[8];
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
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;
    char *t97;
    char *t98;
    char *t100;

LAB0:    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 4624);
    *((int *)t2) = 1;
    t3 = (t0 + 3840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
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

LAB27:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t12 = (t4 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB31;

LAB30:    t13 = (t5 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB31;

LAB34:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB32;

LAB33:    memset(t18, 0, 8);
    t20 = (t6 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t20) != 0)
        goto LAB37;

LAB38:    t27 = (t18 + 4);
    t14 = *((unsigned int *)t18);
    t15 = *((unsigned int *)t27);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB39;

LAB40:    memcpy(t81, t18, 8);

LAB41:    t85 = (t81 + 4);
    t76 = *((unsigned int *)t85);
    t77 = (~(t76));
    t78 = *((unsigned int *)t81);
    t86 = (t78 & t77);
    t87 = (t86 != 0);
    if (t87 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t12 = (t4 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB63;

LAB62:    t13 = (t5 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB63;

LAB66:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB64;

LAB65:    t20 = (t6 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB67;

LAB68:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t12 = (t4 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB72;

LAB71:    t13 = (t5 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB72;

LAB75:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB73;

LAB74:    t20 = (t6 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB76;

LAB77:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB78:
LAB69:
LAB55:
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

LAB26:    xsi_set_current_line(44, ng0);

LAB29:    xsi_set_current_line(45, ng0);
    t79 = ((char*)((ng1)));
    t80 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t80, t79, 0, 0, 1, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 9, 0LL);
    goto LAB28;

LAB31:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB33;

LAB32:    *((unsigned int *)t6) = 1;
    goto LAB33;

LAB35:    *((unsigned int *)t18) = 1;
    goto LAB38;

LAB37:    t26 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB38;

LAB39:    t28 = (t0 + 2728);
    t38 = (t28 + 56U);
    t44 = *((char **)t38);
    t49 = ((char*)((ng3)));
    memset(t37, 0, 8);
    t50 = (t44 + 4);
    t51 = (t49 + 4);
    t17 = *((unsigned int *)t44);
    t21 = *((unsigned int *)t49);
    t22 = (t17 ^ t21);
    t23 = *((unsigned int *)t50);
    t24 = *((unsigned int *)t51);
    t25 = (t23 ^ t24);
    t29 = (t22 | t25);
    t30 = *((unsigned int *)t50);
    t31 = *((unsigned int *)t51);
    t32 = (t30 | t31);
    t33 = (~(t32));
    t34 = (t29 & t33);
    if (t34 != 0)
        goto LAB43;

LAB42:    if (t32 != 0)
        goto LAB44;

LAB45:    memset(t45, 0, 8);
    t60 = (t37 + 4);
    t35 = *((unsigned int *)t60);
    t36 = (~(t35));
    t39 = *((unsigned int *)t37);
    t40 = (t39 & t36);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t60) != 0)
        goto LAB48;

LAB49:    t42 = *((unsigned int *)t18);
    t43 = *((unsigned int *)t45);
    t46 = (t42 & t43);
    *((unsigned int *)t81) = t46;
    t79 = (t18 + 4);
    t80 = (t45 + 4);
    t82 = (t81 + 4);
    t47 = *((unsigned int *)t79);
    t48 = *((unsigned int *)t80);
    t52 = (t47 | t48);
    *((unsigned int *)t82) = t52;
    t53 = *((unsigned int *)t82);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB50;

LAB51:
LAB52:    goto LAB41;

LAB43:    *((unsigned int *)t37) = 1;
    goto LAB45;

LAB44:    t59 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB45;

LAB46:    *((unsigned int *)t45) = 1;
    goto LAB49;

LAB48:    t73 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t73) = 1;
    goto LAB49;

LAB50:    t55 = *((unsigned int *)t81);
    t56 = *((unsigned int *)t82);
    *((unsigned int *)t81) = (t55 | t56);
    t83 = (t18 + 4);
    t84 = (t45 + 4);
    t57 = *((unsigned int *)t18);
    t58 = (~(t57));
    t61 = *((unsigned int *)t83);
    t62 = (~(t61));
    t63 = *((unsigned int *)t45);
    t65 = (~(t63));
    t66 = *((unsigned int *)t84);
    t67 = (~(t66));
    t64 = (t58 & t62);
    t68 = (t65 & t67);
    t69 = (~(t64));
    t70 = (~(t68));
    t71 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t71 & t69);
    t72 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t72 & t70);
    t74 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t74 & t69);
    t75 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t75 & t70);
    goto LAB52;

LAB53:    xsi_set_current_line(51, ng0);

LAB56:    xsi_set_current_line(52, ng0);
    t88 = (t0 + 1528U);
    t89 = *((char **)t88);
    t88 = (t89 + 4);
    t90 = *((unsigned int *)t88);
    t91 = (~(t90));
    t92 = *((unsigned int *)t89);
    t93 = (t92 & t91);
    t94 = (t93 != 0);
    if (t94 > 0)
        goto LAB57;

LAB58:    xsi_set_current_line(56, ng0);

LAB61:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB59:    goto LAB55;

LAB57:    xsi_set_current_line(52, ng0);

LAB60:    xsi_set_current_line(53, ng0);
    t95 = (t0 + 2728);
    t96 = (t95 + 56U);
    t97 = *((char **)t96);
    t98 = ((char*)((ng4)));
    memset(t99, 0, 8);
    xsi_vlog_unsigned_add(t99, 4, t97, 4, t98, 4);
    t100 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t100, t99, 0, 0, 4, 0LL);
    goto LAB59;

LAB63:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB65;

LAB64:    *((unsigned int *)t6) = 1;
    goto LAB65;

LAB67:    xsi_set_current_line(61, ng0);

LAB70:    xsi_set_current_line(62, ng0);
    t26 = (t0 + 2568);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t38 = ((char*)((ng4)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 6, t28, 6, t38, 6);
    t44 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t44, t18, 0, 0, 6, 0LL);
    goto LAB69;

LAB72:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB74;

LAB73:    *((unsigned int *)t6) = 1;
    goto LAB74;

LAB76:    xsi_set_current_line(65, ng0);

LAB79:    xsi_set_current_line(67, ng0);
    t26 = ((char*)((ng7)));
    t27 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t27, t26, 0, 0, 1, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 9, t4, 9, t5, 9);
    t12 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, 0, 9, 0LL);
    goto LAB78;

}

static void Cont_74_1(char *t0)
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

LAB0:    t1 = (t0 + 4056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2568);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng9)));
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

LAB20:    t41 = (t0 + 4736);
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
    t54 = (t0 + 4640);
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

LAB12:    t35 = ((char*)((ng4)));
    goto LAB13;

LAB14:    t40 = ((char*)((ng1)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 1, t35, 1, t40, 1);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

}

static void Cont_75_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t18[8];
    char t37[8];
    char t45[8];
    char t89[8];
    char t90[8];
    char t95[8];
    char t110[8];
    char t111[8];
    char t134[8];
    char t135[8];
    char t140[8];
    char t161[8];
    char t162[8];
    char t166[8];
    char *t1;
    char *t2;
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
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t96;
    char *t97;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    char *t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    char *t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t136;
    char *t137;
    char *t138;
    char *t139;
    char *t141;
    char *t142;
    char *t143;
    char *t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    char *t150;
    char *t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    char *t155;
    char *t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t163;
    char *t164;
    char *t165;
    char *t167;
    char *t168;
    char *t169;
    char *t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    char *t176;
    char *t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    char *t181;
    char *t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    char *t187;
    char *t188;
    char *t189;
    char *t190;
    char *t191;
    unsigned int t192;
    unsigned int t193;
    char *t194;
    unsigned int t195;
    unsigned int t196;
    char *t197;
    unsigned int t198;
    unsigned int t199;
    char *t200;

LAB0:    t1 = (t0 + 4304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1208U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t5 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (!(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    memcpy(t45, t6, 8);

LAB10:    memset(t4, 0, 8);
    t73 = (t45 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t45);
    t77 = (t76 & t75);
    t78 = (t77 & 1U);
    if (t78 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t73) != 0)
        goto LAB26;

LAB27:    t80 = (t4 + 4);
    t81 = *((unsigned int *)t4);
    t82 = *((unsigned int *)t80);
    t83 = (t81 || t82);
    if (t83 > 0)
        goto LAB28;

LAB29:    t85 = *((unsigned int *)t4);
    t86 = (~(t85));
    t87 = *((unsigned int *)t80);
    t88 = (t86 || t87);
    if (t88 > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t80) > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t4) > 0)
        goto LAB34;

LAB35:    memcpy(t3, t89, 8);

LAB36:    t187 = (t0 + 4800);
    t188 = (t187 + 56U);
    t189 = *((char **)t188);
    t190 = (t189 + 56U);
    t191 = *((char **)t190);
    memset(t191, 0, 8);
    t192 = 1U;
    t193 = t192;
    t194 = (t3 + 4);
    t195 = *((unsigned int *)t3);
    t192 = (t192 & t195);
    t196 = *((unsigned int *)t194);
    t193 = (t193 & t196);
    t197 = (t191 + 4);
    t198 = *((unsigned int *)t191);
    *((unsigned int *)t191) = (t198 | t192);
    t199 = *((unsigned int *)t197);
    *((unsigned int *)t197) = (t199 | t193);
    xsi_driver_vfirst_trans(t187, 0, 0);
    t200 = (t0 + 4656);
    *((int *)t200) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t6) = 1;
    goto LAB7;

LAB6:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB7;

LAB8:    t19 = (t0 + 1368U);
    t20 = *((char **)t19);
    memset(t18, 0, 8);
    t19 = (t20 + 4);
    t21 = *((unsigned int *)t19);
    t22 = (~(t21));
    t23 = *((unsigned int *)t20);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB14;

LAB12:    if (*((unsigned int *)t19) == 0)
        goto LAB11;

LAB13:    t26 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t26) = 1;

LAB14:    t27 = (t18 + 4);
    t28 = (t20 + 4);
    t29 = *((unsigned int *)t20);
    t30 = (~(t29));
    *((unsigned int *)t18) = t30;
    *((unsigned int *)t27) = 0;
    if (*((unsigned int *)t28) != 0)
        goto LAB16;

LAB15:    t35 = *((unsigned int *)t18);
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
        goto LAB17;

LAB18:    if (*((unsigned int *)t38) != 0)
        goto LAB19;

LAB20:    t46 = *((unsigned int *)t6);
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
        goto LAB21;

LAB22:
LAB23:    goto LAB10;

LAB11:    *((unsigned int *)t18) = 1;
    goto LAB14;

LAB16:    t31 = *((unsigned int *)t18);
    t32 = *((unsigned int *)t28);
    *((unsigned int *)t18) = (t31 | t32);
    t33 = *((unsigned int *)t27);
    t34 = *((unsigned int *)t28);
    *((unsigned int *)t27) = (t33 | t34);
    goto LAB15;

LAB17:    *((unsigned int *)t37) = 1;
    goto LAB20;

LAB19:    t44 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB20;

LAB21:    t57 = *((unsigned int *)t45);
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
    goto LAB23;

LAB24:    *((unsigned int *)t4) = 1;
    goto LAB27;

LAB26:    t79 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t79) = 1;
    goto LAB27;

LAB28:    t84 = ((char*)((ng1)));
    goto LAB29;

LAB30:    t91 = (t0 + 2728);
    t92 = (t91 + 56U);
    t93 = *((char **)t92);
    t94 = ((char*)((ng2)));
    memset(t95, 0, 8);
    t96 = (t93 + 4);
    if (*((unsigned int *)t96) != 0)
        goto LAB38;

LAB37:    t97 = (t94 + 4);
    if (*((unsigned int *)t97) != 0)
        goto LAB38;

LAB41:    if (*((unsigned int *)t93) < *((unsigned int *)t94))
        goto LAB39;

LAB40:    memset(t90, 0, 8);
    t99 = (t95 + 4);
    t100 = *((unsigned int *)t99);
    t101 = (~(t100));
    t102 = *((unsigned int *)t95);
    t103 = (t102 & t101);
    t104 = (t103 & 1U);
    if (t104 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t99) != 0)
        goto LAB44;

LAB45:    t106 = (t90 + 4);
    t107 = *((unsigned int *)t90);
    t108 = *((unsigned int *)t106);
    t109 = (t107 || t108);
    if (t109 > 0)
        goto LAB46;

LAB47:    t130 = *((unsigned int *)t90);
    t131 = (~(t130));
    t132 = *((unsigned int *)t106);
    t133 = (t131 || t132);
    if (t133 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t106) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t90) > 0)
        goto LAB52;

LAB53:    memcpy(t89, t134, 8);

LAB54:    goto LAB31;

LAB32:    xsi_vlog_unsigned_bit_combine(t3, 1, t84, 1, t89, 1);
    goto LAB36;

LAB34:    memcpy(t3, t84, 8);
    goto LAB36;

LAB38:    t98 = (t95 + 4);
    *((unsigned int *)t95) = 1;
    *((unsigned int *)t98) = 1;
    goto LAB40;

LAB39:    *((unsigned int *)t95) = 1;
    goto LAB40;

LAB42:    *((unsigned int *)t90) = 1;
    goto LAB45;

LAB44:    t105 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t105) = 1;
    goto LAB45;

LAB46:    t112 = (t0 + 1528U);
    t113 = *((char **)t112);
    memset(t111, 0, 8);
    t112 = (t113 + 4);
    t114 = *((unsigned int *)t112);
    t115 = (~(t114));
    t116 = *((unsigned int *)t113);
    t117 = (t116 & t115);
    t118 = (t117 & 1U);
    if (t118 != 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t112) != 0)
        goto LAB57;

LAB58:    t120 = (t111 + 4);
    t121 = *((unsigned int *)t111);
    t122 = *((unsigned int *)t120);
    t123 = (t121 || t122);
    if (t123 > 0)
        goto LAB59;

LAB60:    t125 = *((unsigned int *)t111);
    t126 = (~(t125));
    t127 = *((unsigned int *)t120);
    t128 = (t126 || t127);
    if (t128 > 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t120) > 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t111) > 0)
        goto LAB65;

LAB66:    memcpy(t110, t129, 8);

LAB67:    goto LAB47;

LAB48:    t136 = (t0 + 2568);
    t137 = (t136 + 56U);
    t138 = *((char **)t137);
    t139 = ((char*)((ng5)));
    memset(t140, 0, 8);
    t141 = (t138 + 4);
    if (*((unsigned int *)t141) != 0)
        goto LAB69;

LAB68:    t142 = (t139 + 4);
    if (*((unsigned int *)t142) != 0)
        goto LAB69;

LAB72:    if (*((unsigned int *)t138) < *((unsigned int *)t139))
        goto LAB70;

LAB71:    memset(t135, 0, 8);
    t144 = (t140 + 4);
    t145 = *((unsigned int *)t144);
    t146 = (~(t145));
    t147 = *((unsigned int *)t140);
    t148 = (t147 & t146);
    t149 = (t148 & 1U);
    if (t149 != 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t144) != 0)
        goto LAB75;

LAB76:    t151 = (t135 + 4);
    t152 = *((unsigned int *)t135);
    t153 = *((unsigned int *)t151);
    t154 = (t152 || t153);
    if (t154 > 0)
        goto LAB77;

LAB78:    t157 = *((unsigned int *)t135);
    t158 = (~(t157));
    t159 = *((unsigned int *)t151);
    t160 = (t158 || t159);
    if (t160 > 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t151) > 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t135) > 0)
        goto LAB83;

LAB84:    memcpy(t134, t161, 8);

LAB85:    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t89, 1, t110, 1, t134, 1);
    goto LAB54;

LAB52:    memcpy(t89, t110, 8);
    goto LAB54;

LAB55:    *((unsigned int *)t111) = 1;
    goto LAB58;

LAB57:    t119 = (t111 + 4);
    *((unsigned int *)t111) = 1;
    *((unsigned int *)t119) = 1;
    goto LAB58;

LAB59:    t124 = ((char*)((ng4)));
    goto LAB60;

LAB61:    t129 = ((char*)((ng1)));
    goto LAB62;

LAB63:    xsi_vlog_unsigned_bit_combine(t110, 1, t124, 1, t129, 1);
    goto LAB67;

LAB65:    memcpy(t110, t124, 8);
    goto LAB67;

LAB69:    t143 = (t140 + 4);
    *((unsigned int *)t140) = 1;
    *((unsigned int *)t143) = 1;
    goto LAB71;

LAB70:    *((unsigned int *)t140) = 1;
    goto LAB71;

LAB73:    *((unsigned int *)t135) = 1;
    goto LAB76;

LAB75:    t150 = (t135 + 4);
    *((unsigned int *)t135) = 1;
    *((unsigned int *)t150) = 1;
    goto LAB76;

LAB77:    t155 = (t0 + 1528U);
    t156 = *((char **)t155);
    goto LAB78;

LAB79:    t155 = (t0 + 2888);
    t163 = (t155 + 56U);
    t164 = *((char **)t163);
    t165 = ((char*)((ng6)));
    memset(t166, 0, 8);
    t167 = (t164 + 4);
    if (*((unsigned int *)t167) != 0)
        goto LAB87;

LAB86:    t168 = (t165 + 4);
    if (*((unsigned int *)t168) != 0)
        goto LAB87;

LAB90:    if (*((unsigned int *)t164) < *((unsigned int *)t165))
        goto LAB88;

LAB89:    memset(t162, 0, 8);
    t170 = (t166 + 4);
    t171 = *((unsigned int *)t170);
    t172 = (~(t171));
    t173 = *((unsigned int *)t166);
    t174 = (t173 & t172);
    t175 = (t174 & 1U);
    if (t175 != 0)
        goto LAB91;

LAB92:    if (*((unsigned int *)t170) != 0)
        goto LAB93;

LAB94:    t177 = (t162 + 4);
    t178 = *((unsigned int *)t162);
    t179 = *((unsigned int *)t177);
    t180 = (t178 || t179);
    if (t180 > 0)
        goto LAB95;

LAB96:    t183 = *((unsigned int *)t162);
    t184 = (~(t183));
    t185 = *((unsigned int *)t177);
    t186 = (t184 || t185);
    if (t186 > 0)
        goto LAB97;

LAB98:    if (*((unsigned int *)t177) > 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t162) > 0)
        goto LAB101;

LAB102:    memcpy(t161, t181, 8);

LAB103:    goto LAB80;

LAB81:    xsi_vlog_unsigned_bit_combine(t134, 1, t156, 1, t161, 1);
    goto LAB85;

LAB83:    memcpy(t134, t156, 8);
    goto LAB85;

LAB87:    t169 = (t166 + 4);
    *((unsigned int *)t166) = 1;
    *((unsigned int *)t169) = 1;
    goto LAB89;

LAB88:    *((unsigned int *)t166) = 1;
    goto LAB89;

LAB91:    *((unsigned int *)t162) = 1;
    goto LAB94;

LAB93:    t176 = (t162 + 4);
    *((unsigned int *)t162) = 1;
    *((unsigned int *)t176) = 1;
    goto LAB94;

LAB95:    t181 = (t0 + 1848U);
    t182 = *((char **)t181);
    goto LAB96;

LAB97:    t181 = ((char*)((ng1)));
    goto LAB98;

LAB99:    xsi_vlog_unsigned_bit_combine(t161, 1, t182, 1, t181, 1);
    goto LAB103;

LAB101:    memcpy(t161, t182, 8);
    goto LAB103;

}


extern void work_m_00000000003521921589_4251652033_init()
{
	static char *pe[] = {(void *)Always_43_0,(void *)Cont_74_1,(void *)Cont_75_2};
	xsi_register_didat("work_m_00000000003521921589_4251652033", "isim/Topmodule_tb_isim_beh.exe.sim/work/m_00000000003521921589_4251652033.didat");
	xsi_register_executes(pe);
}
