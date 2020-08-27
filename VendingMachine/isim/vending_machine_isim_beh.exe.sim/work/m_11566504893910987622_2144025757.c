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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/ise_projects/VendingMachine/vending_machine_template.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {3U, 0U};
static int ng3[] = {1, 0};
static int ng4[] = {2, 0};
static int ng5[] = {5, 0};



static void Always_16_0(char *t0)
{
    char t13[8];
    char t40[8];
    char t57[8];
    char t76[8];
    char t114[8];
    char t115[8];
    char t119[8];
    char t121[8];
    char t124[8];
    char t126[8];
    char t144[8];
    char t146[8];
    char t149[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
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
    char *t28;
    char *t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t41;
    unsigned int t42;
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
    unsigned int t56;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    int t100;
    int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t116;
    char *t117;
    char *t118;
    char *t120;
    char *t122;
    char *t123;
    char *t125;
    char *t127;
    char *t128;
    char *t129;
    char *t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    char *t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;
    char *t142;
    char *t143;
    char *t145;
    char *t147;
    char *t148;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    char *t154;
    char *t155;

LAB0:    t1 = (t0 + 3320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 4136);
    *((int *)t2) = 1;
    t3 = (t0 + 3352);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(16, ng0);

LAB5:    xsi_set_current_line(17, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 | t7);
    *((unsigned int *)t13) = t8;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t11 = (t13 + 4);
    t9 = *((unsigned int *)t2);
    t10 = *((unsigned int *)t5);
    t14 = (t9 | t10);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB18;

LAB19:
LAB20:    t22 = (t13 + 4);
    t35 = *((unsigned int *)t22);
    t36 = (~(t35));
    t37 = *((unsigned int *)t13);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB21;

LAB22:
LAB23:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(17, ng0);

LAB9:    xsi_set_current_line(19, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    xsi_set_current_line(20, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB13;

LAB10:    if (t18 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t13) = 1;

LAB13:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB14;

LAB15:
LAB16:    goto LAB8;

LAB12:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(20, ng0);

LAB17:    xsi_set_current_line(21, ng0);
    t28 = ((char*)((ng3)));
    t29 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 0LL);
    goto LAB16;

LAB18:    t17 = *((unsigned int *)t13);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t17 | t18);
    t12 = (t3 + 4);
    t21 = (t4 + 4);
    t19 = *((unsigned int *)t12);
    t20 = (~(t19));
    t23 = *((unsigned int *)t3);
    t30 = (t23 & t20);
    t24 = *((unsigned int *)t21);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t31 = (t26 & t25);
    t27 = (~(t30));
    t32 = (~(t31));
    t33 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t33 & t27);
    t34 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t34 & t32);
    goto LAB20;

LAB21:    xsi_set_current_line(25, ng0);

LAB24:    xsi_set_current_line(27, ng0);
    t28 = (t0 + 1368U);
    t29 = *((char **)t28);
    memset(t40, 0, 8);
    t28 = (t29 + 4);
    t41 = *((unsigned int *)t28);
    t42 = (~(t41));
    t43 = *((unsigned int *)t29);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB28;

LAB26:    if (*((unsigned int *)t28) == 0)
        goto LAB25;

LAB27:    t46 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t46) = 1;

LAB28:    t47 = (t40 + 4);
    t48 = (t29 + 4);
    t49 = *((unsigned int *)t29);
    t50 = (~(t49));
    *((unsigned int *)t40) = t50;
    *((unsigned int *)t47) = 0;
    if (*((unsigned int *)t48) != 0)
        goto LAB30;

LAB29:    t55 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t55 & 1U);
    t56 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t56 & 1U);
    t58 = (t0 + 1528U);
    t59 = *((char **)t58);
    memset(t57, 0, 8);
    t58 = (t59 + 4);
    t60 = *((unsigned int *)t58);
    t61 = (~(t60));
    t62 = *((unsigned int *)t59);
    t63 = (t62 & t61);
    t64 = (t63 & 1U);
    if (t64 != 0)
        goto LAB34;

LAB32:    if (*((unsigned int *)t58) == 0)
        goto LAB31;

LAB33:    t65 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t65) = 1;

LAB34:    t66 = (t57 + 4);
    t67 = (t59 + 4);
    t68 = *((unsigned int *)t59);
    t69 = (~(t68));
    *((unsigned int *)t57) = t69;
    *((unsigned int *)t66) = 0;
    if (*((unsigned int *)t67) != 0)
        goto LAB36;

LAB35:    t74 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t74 & 1U);
    t75 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t75 & 1U);
    t77 = *((unsigned int *)t40);
    t78 = *((unsigned int *)t57);
    t79 = (t77 & t78);
    *((unsigned int *)t76) = t79;
    t80 = (t40 + 4);
    t81 = (t57 + 4);
    t82 = (t76 + 4);
    t83 = *((unsigned int *)t80);
    t84 = *((unsigned int *)t81);
    t85 = (t83 | t84);
    *((unsigned int *)t82) = t85;
    t86 = *((unsigned int *)t82);
    t87 = (t86 != 0);
    if (t87 == 1)
        goto LAB37;

LAB38:
LAB39:    t108 = (t76 + 4);
    t109 = *((unsigned int *)t108);
    t110 = (~(t109));
    t111 = *((unsigned int *)t76);
    t112 = (t111 & t110);
    t113 = (t112 != 0);
    if (t113 > 0)
        goto LAB40;

LAB41:
LAB42:    goto LAB23;

LAB25:    *((unsigned int *)t40) = 1;
    goto LAB28;

LAB30:    t51 = *((unsigned int *)t40);
    t52 = *((unsigned int *)t48);
    *((unsigned int *)t40) = (t51 | t52);
    t53 = *((unsigned int *)t47);
    t54 = *((unsigned int *)t48);
    *((unsigned int *)t47) = (t53 | t54);
    goto LAB29;

LAB31:    *((unsigned int *)t57) = 1;
    goto LAB34;

LAB36:    t70 = *((unsigned int *)t57);
    t71 = *((unsigned int *)t67);
    *((unsigned int *)t57) = (t70 | t71);
    t72 = *((unsigned int *)t66);
    t73 = *((unsigned int *)t67);
    *((unsigned int *)t66) = (t72 | t73);
    goto LAB35;

LAB37:    t88 = *((unsigned int *)t76);
    t89 = *((unsigned int *)t82);
    *((unsigned int *)t76) = (t88 | t89);
    t90 = (t40 + 4);
    t91 = (t57 + 4);
    t92 = *((unsigned int *)t40);
    t93 = (~(t92));
    t94 = *((unsigned int *)t90);
    t95 = (~(t94));
    t96 = *((unsigned int *)t57);
    t97 = (~(t96));
    t98 = *((unsigned int *)t91);
    t99 = (~(t98));
    t100 = (t93 & t95);
    t101 = (t97 & t99);
    t102 = (~(t100));
    t103 = (~(t101));
    t104 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t104 & t102);
    t105 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t105 & t103);
    t106 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t106 & t102);
    t107 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t107 & t103);
    goto LAB39;

LAB40:    xsi_set_current_line(27, ng0);

LAB43:    xsi_set_current_line(28, ng0);
    t116 = ((char*)((ng4)));
    t117 = (t0 + 1368U);
    t118 = *((char **)t117);
    memset(t119, 0, 8);
    xsi_vlog_unsigned_multiply(t119, 32, t116, 32, t118, 1);
    t117 = (t0 + 1528U);
    t120 = *((char **)t117);
    memset(t121, 0, 8);
    xsi_vlog_unsigned_add(t121, 32, t119, 32, t120, 1);
    t117 = (t0 + 2248);
    t122 = (t117 + 56U);
    t123 = *((char **)t122);
    memset(t124, 0, 8);
    xsi_vlog_unsigned_add(t124, 32, t121, 32, t123, 2);
    t125 = ((char*)((ng2)));
    memset(t126, 0, 8);
    t127 = (t124 + 4);
    if (*((unsigned int *)t127) != 0)
        goto LAB45;

LAB44:    t128 = (t125 + 4);
    if (*((unsigned int *)t128) != 0)
        goto LAB45;

LAB48:    if (*((unsigned int *)t124) > *((unsigned int *)t125))
        goto LAB47;

LAB46:    *((unsigned int *)t126) = 1;

LAB47:    memset(t115, 0, 8);
    t130 = (t126 + 4);
    t131 = *((unsigned int *)t130);
    t132 = (~(t131));
    t133 = *((unsigned int *)t126);
    t134 = (t133 & t132);
    t135 = (t134 & 1U);
    if (t135 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t130) != 0)
        goto LAB51;

LAB52:    t137 = (t115 + 4);
    t138 = *((unsigned int *)t115);
    t139 = *((unsigned int *)t137);
    t140 = (t138 || t139);
    if (t140 > 0)
        goto LAB53;

LAB54:    t150 = *((unsigned int *)t115);
    t151 = (~(t150));
    t152 = *((unsigned int *)t137);
    t153 = (t151 || t152);
    if (t153 > 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t137) > 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t115) > 0)
        goto LAB59;

LAB60:    memcpy(t114, t154, 8);

LAB61:    t155 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t155, t114, 0, 0, 2, 0LL);
    goto LAB42;

LAB45:    t129 = (t126 + 4);
    *((unsigned int *)t126) = 1;
    *((unsigned int *)t129) = 1;
    goto LAB47;

LAB49:    *((unsigned int *)t115) = 1;
    goto LAB52;

LAB51:    t136 = (t115 + 4);
    *((unsigned int *)t115) = 1;
    *((unsigned int *)t136) = 1;
    goto LAB52;

LAB53:    t141 = ((char*)((ng4)));
    t142 = (t0 + 1368U);
    t143 = *((char **)t142);
    memset(t144, 0, 8);
    xsi_vlog_unsigned_multiply(t144, 32, t141, 32, t143, 1);
    t142 = (t0 + 1528U);
    t145 = *((char **)t142);
    memset(t146, 0, 8);
    xsi_vlog_unsigned_add(t146, 32, t144, 32, t145, 1);
    t142 = (t0 + 2248);
    t147 = (t142 + 56U);
    t148 = *((char **)t147);
    memset(t149, 0, 8);
    xsi_vlog_unsigned_add(t149, 32, t146, 32, t148, 2);
    goto LAB54;

LAB55:    t154 = ((char*)((ng2)));
    goto LAB56;

LAB57:    xsi_vlog_unsigned_bit_combine(t114, 32, t149, 32, t154, 32);
    goto LAB61;

LAB59:    memcpy(t114, t149, 8);
    goto LAB61;

}

static void Cont_33_1(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    t1 = (t0 + 3568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_multiply(t6, 32, t4, 2, t5, 32);
    t7 = (t0 + 4248);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t11, 0, 8);
    t12 = 15U;
    t13 = t12;
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t12 = (t12 & t15);
    t16 = *((unsigned int *)t14);
    t13 = (t13 & t16);
    t17 = (t11 + 4);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 | t12);
    t19 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t19 | t13);
    xsi_driver_vfirst_trans(t7, 0, 3);
    t20 = (t0 + 4152);
    *((int *)t20) = 1;

LAB1:    return;
}

static void Cont_34_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 3816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4312);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 4168);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_11566504893910987622_2144025757_init()
{
	static char *pe[] = {(void *)Always_16_0,(void *)Cont_33_1,(void *)Cont_34_2};
	xsi_register_didat("work_m_11566504893910987622_2144025757", "isim/vending_machine_isim_beh.exe.sim/work/m_11566504893910987622_2144025757.didat");
	xsi_register_executes(pe);
}
