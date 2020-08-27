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
static const char *ng0 = "/home/ise/ise_projects/TwoDigitCounter/two_digit_tb.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static const char *ng3 = "Test Starts";
static const char *ng4 = "Test 1 - 0-49";
static const char *ng5 = "-------------";
static int ng6[] = {50, 0};
static const char *ng7 = "%d passed";
static int ng8[] = {2, 0};
static const char *ng9 = "%d failed, check your 7-segment table";
static const char *ng10 = "%d failed, your module returned %d";
static const char *ng11 = "Test 2 - 0-99 after reset";
static const char *ng12 = "--------------------------";
static int ng13[] = {100, 0};
static const char *ng14 = "Test 3 - Back to start after 99";
static const char *ng15 = "Passed all cases!";
static const char *ng16 = "Failed at some cases. See test result";
static const char *ng17 = "Test Ends";



static void Always_33_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
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

LAB0:    t1 = (t0 + 3160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 2968);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 1768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1768);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Initial_36_1(char *t0)
{
    char t6[8];
    char t20[8];
    char t45[8];
    char t46[8];
    char t47[8];
    char t59[8];
    char t65[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
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
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;
    char *t97;

LAB0:    t1 = (t0 + 3408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);

LAB4:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 3216);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(53, ng0);
    xsi_vlogfile_write(1, 0, 0, ng3, 1, t0);
    xsi_set_current_line(54, ng0);
    xsi_vlogfile_write(1, 0, 0, ng4, 1, t0);
    xsi_set_current_line(55, ng0);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);
    xsi_set_current_line(56, ng0);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);

LAB6:    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB8;

LAB7:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB8;

LAB11:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB9;

LAB10:    t10 = (t6 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(66, ng0);
    xsi_vlogfile_write(1, 0, 0, ng11, 1, t0);
    xsi_set_current_line(67, ng0);
    xsi_vlogfile_write(1, 0, 0, ng12, 1, t0);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3216);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB49;
    goto LAB1;

LAB8:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB10;

LAB9:    *((unsigned int *)t6) = 1;
    goto LAB10;

LAB12:    xsi_set_current_line(56, ng0);

LAB14:    xsi_set_current_line(57, ng0);
    t16 = (t0 + 1368U);
    t17 = *((char **)t16);
    t16 = (t0 + 2088);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    memset(t20, 0, 8);
    t21 = (t17 + 4);
    t22 = (t19 + 4);
    t23 = *((unsigned int *)t17);
    t24 = *((unsigned int *)t19);
    t25 = (t23 ^ t24);
    t26 = *((unsigned int *)t21);
    t27 = *((unsigned int *)t22);
    t28 = (t26 ^ t27);
    t29 = (t25 | t28);
    t30 = *((unsigned int *)t21);
    t31 = *((unsigned int *)t22);
    t32 = (t30 | t31);
    t33 = (~(t32));
    t34 = (t29 & t33);
    if (t34 != 0)
        goto LAB18;

LAB15:    if (t32 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t20) = 1;

LAB18:    t36 = (t20 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (~(t37));
    t39 = *((unsigned int *)t20);
    t40 = (t39 & t38);
    t41 = (t40 != 0);
    if (t41 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(58, ng0);

LAB22:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_unary_minus(t6, 32, t2, 32);
    memset(t20, 0, 8);
    t4 = (t3 + 4);
    t5 = (t6 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t23 = (t14 ^ t15);
    t24 = (t13 | t23);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB26;

LAB23:    if (t27 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t20) = 1;

LAB26:    memset(t45, 0, 8);
    t8 = (t20 + 4);
    t30 = *((unsigned int *)t8);
    t31 = (~(t30));
    t32 = *((unsigned int *)t20);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t8) != 0)
        goto LAB29;

LAB30:    t10 = (t45 + 4);
    t37 = *((unsigned int *)t45);
    t38 = (!(t37));
    t39 = *((unsigned int *)t10);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB31;

LAB32:    memcpy(t65, t45, 8);

LAB33:    t89 = (t65 + 4);
    t90 = *((unsigned int *)t89);
    t91 = (~(t90));
    t92 = *((unsigned int *)t65);
    t93 = (t92 & t91);
    t94 = (t93 != 0);
    if (t94 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1368U);
    t7 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng10, 3, t0, (char)118, t4, 7, (char)118, t7, 7);

LAB47:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB21:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3216);
    xsi_process_wait(t2, 1000000LL);
    *((char **)t1) = &&LAB48;
    goto LAB1;

LAB17:    t35 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(57, ng0);
    t42 = (t0 + 2088);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    xsi_vlogfile_write(1, 0, 0, ng7, 2, t0, (char)118, t44, 7);
    goto LAB21;

LAB25:    t7 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB26;

LAB27:    *((unsigned int *)t45) = 1;
    goto LAB30;

LAB29:    t9 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB30;

LAB31:    t16 = (t0 + 1368U);
    t17 = *((char **)t16);
    t16 = ((char*)((ng8)));
    memset(t46, 0, 8);
    xsi_vlog_unsigned_unary_minus(t46, 32, t16, 32);
    memset(t47, 0, 8);
    t18 = (t17 + 4);
    t19 = (t46 + 4);
    t41 = *((unsigned int *)t17);
    t48 = *((unsigned int *)t46);
    t49 = (t41 ^ t48);
    t50 = *((unsigned int *)t18);
    t51 = *((unsigned int *)t19);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t18);
    t55 = *((unsigned int *)t19);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB37;

LAB34:    if (t56 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t47) = 1;

LAB37:    memset(t59, 0, 8);
    t22 = (t47 + 4);
    t60 = *((unsigned int *)t22);
    t61 = (~(t60));
    t62 = *((unsigned int *)t47);
    t63 = (t62 & t61);
    t64 = (t63 & 1U);
    if (t64 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t22) != 0)
        goto LAB40;

LAB41:    t66 = *((unsigned int *)t45);
    t67 = *((unsigned int *)t59);
    t68 = (t66 | t67);
    *((unsigned int *)t65) = t68;
    t36 = (t45 + 4);
    t42 = (t59 + 4);
    t43 = (t65 + 4);
    t69 = *((unsigned int *)t36);
    t70 = *((unsigned int *)t42);
    t71 = (t69 | t70);
    *((unsigned int *)t43) = t71;
    t72 = *((unsigned int *)t43);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB42;

LAB43:
LAB44:    goto LAB33;

LAB36:    t21 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB37;

LAB38:    *((unsigned int *)t59) = 1;
    goto LAB41;

LAB40:    t35 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB41;

LAB42:    t74 = *((unsigned int *)t65);
    t75 = *((unsigned int *)t43);
    *((unsigned int *)t65) = (t74 | t75);
    t44 = (t45 + 4);
    t76 = (t59 + 4);
    t77 = *((unsigned int *)t44);
    t78 = (~(t77));
    t79 = *((unsigned int *)t45);
    t80 = (t79 & t78);
    t81 = *((unsigned int *)t76);
    t82 = (~(t81));
    t83 = *((unsigned int *)t59);
    t84 = (t83 & t82);
    t85 = (~(t80));
    t86 = (~(t84));
    t87 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t87 & t85);
    t88 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t88 & t86);
    goto LAB44;

LAB45:    xsi_set_current_line(59, ng0);
    t95 = (t0 + 2088);
    t96 = (t95 + 56U);
    t97 = *((char **)t96);
    xsi_vlogfile_write(1, 0, 0, ng9, 2, t0, (char)118, t97, 7);
    goto LAB47;

LAB48:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 7, t5, 32);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 7);
    goto LAB6;

LAB49:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);

LAB50:    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng13)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB52;

LAB51:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB52;

LAB55:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB53;

LAB54:    t10 = (t6 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(79, ng0);
    xsi_vlogfile_write(1, 0, 0, ng14, 1, t0);
    xsi_set_current_line(80, ng0);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);

LAB93:    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB95;

LAB94:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB95;

LAB98:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB96;

LAB97:    t10 = (t6 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB99;

LAB100:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB136;

LAB137:    xsi_set_current_line(92, ng0);
    xsi_vlogfile_write(1, 0, 0, ng16, 1, t0);

LAB138:    xsi_set_current_line(93, ng0);
    xsi_vlogfile_write(1, 0, 0, ng17, 1, t0);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng1)));
    xsi_vlog_finish(*((unsigned int *)t2));
    goto LAB1;

LAB52:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB54;

LAB53:    *((unsigned int *)t6) = 1;
    goto LAB54;

LAB56:    xsi_set_current_line(69, ng0);

LAB58:    xsi_set_current_line(70, ng0);
    t16 = (t0 + 1368U);
    t17 = *((char **)t16);
    t16 = (t0 + 2088);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    memset(t20, 0, 8);
    t21 = (t17 + 4);
    t22 = (t19 + 4);
    t23 = *((unsigned int *)t17);
    t24 = *((unsigned int *)t19);
    t25 = (t23 ^ t24);
    t26 = *((unsigned int *)t21);
    t27 = *((unsigned int *)t22);
    t28 = (t26 ^ t27);
    t29 = (t25 | t28);
    t30 = *((unsigned int *)t21);
    t31 = *((unsigned int *)t22);
    t32 = (t30 | t31);
    t33 = (~(t32));
    t34 = (t29 & t33);
    if (t34 != 0)
        goto LAB62;

LAB59:    if (t32 != 0)
        goto LAB61;

LAB60:    *((unsigned int *)t20) = 1;

LAB62:    t36 = (t20 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (~(t37));
    t39 = *((unsigned int *)t20);
    t40 = (t39 & t38);
    t41 = (t40 != 0);
    if (t41 > 0)
        goto LAB63;

LAB64:    xsi_set_current_line(71, ng0);

LAB66:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_unary_minus(t6, 32, t2, 32);
    memset(t20, 0, 8);
    t4 = (t3 + 4);
    t5 = (t6 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t23 = (t14 ^ t15);
    t24 = (t13 | t23);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB70;

LAB67:    if (t27 != 0)
        goto LAB69;

LAB68:    *((unsigned int *)t20) = 1;

LAB70:    memset(t45, 0, 8);
    t8 = (t20 + 4);
    t30 = *((unsigned int *)t8);
    t31 = (~(t30));
    t32 = *((unsigned int *)t20);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t8) != 0)
        goto LAB73;

LAB74:    t10 = (t45 + 4);
    t37 = *((unsigned int *)t45);
    t38 = (!(t37));
    t39 = *((unsigned int *)t10);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB75;

LAB76:    memcpy(t65, t45, 8);

LAB77:    t89 = (t65 + 4);
    t90 = *((unsigned int *)t89);
    t91 = (~(t90));
    t92 = *((unsigned int *)t65);
    t93 = (t92 & t91);
    t94 = (t93 != 0);
    if (t94 > 0)
        goto LAB89;

LAB90:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1368U);
    t7 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng10, 3, t0, (char)118, t4, 7, (char)118, t7, 7);

LAB91:    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB65:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 3216);
    xsi_process_wait(t2, 1000000LL);
    *((char **)t1) = &&LAB92;
    goto LAB1;

LAB61:    t35 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB62;

LAB63:    xsi_set_current_line(70, ng0);
    t42 = (t0 + 2088);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    xsi_vlogfile_write(1, 0, 0, ng7, 2, t0, (char)118, t44, 7);
    goto LAB65;

LAB69:    t7 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB70;

LAB71:    *((unsigned int *)t45) = 1;
    goto LAB74;

LAB73:    t9 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB74;

LAB75:    t16 = (t0 + 1368U);
    t17 = *((char **)t16);
    t16 = ((char*)((ng8)));
    memset(t46, 0, 8);
    xsi_vlog_unsigned_unary_minus(t46, 32, t16, 32);
    memset(t47, 0, 8);
    t18 = (t17 + 4);
    t19 = (t46 + 4);
    t41 = *((unsigned int *)t17);
    t48 = *((unsigned int *)t46);
    t49 = (t41 ^ t48);
    t50 = *((unsigned int *)t18);
    t51 = *((unsigned int *)t19);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t18);
    t55 = *((unsigned int *)t19);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB81;

LAB78:    if (t56 != 0)
        goto LAB80;

LAB79:    *((unsigned int *)t47) = 1;

LAB81:    memset(t59, 0, 8);
    t22 = (t47 + 4);
    t60 = *((unsigned int *)t22);
    t61 = (~(t60));
    t62 = *((unsigned int *)t47);
    t63 = (t62 & t61);
    t64 = (t63 & 1U);
    if (t64 != 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t22) != 0)
        goto LAB84;

LAB85:    t66 = *((unsigned int *)t45);
    t67 = *((unsigned int *)t59);
    t68 = (t66 | t67);
    *((unsigned int *)t65) = t68;
    t36 = (t45 + 4);
    t42 = (t59 + 4);
    t43 = (t65 + 4);
    t69 = *((unsigned int *)t36);
    t70 = *((unsigned int *)t42);
    t71 = (t69 | t70);
    *((unsigned int *)t43) = t71;
    t72 = *((unsigned int *)t43);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB86;

LAB87:
LAB88:    goto LAB77;

LAB80:    t21 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB81;

LAB82:    *((unsigned int *)t59) = 1;
    goto LAB85;

LAB84:    t35 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB85;

LAB86:    t74 = *((unsigned int *)t65);
    t75 = *((unsigned int *)t43);
    *((unsigned int *)t65) = (t74 | t75);
    t44 = (t45 + 4);
    t76 = (t59 + 4);
    t77 = *((unsigned int *)t44);
    t78 = (~(t77));
    t79 = *((unsigned int *)t45);
    t80 = (t79 & t78);
    t81 = *((unsigned int *)t76);
    t82 = (~(t81));
    t83 = *((unsigned int *)t59);
    t84 = (t83 & t82);
    t85 = (~(t80));
    t86 = (~(t84));
    t87 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t87 & t85);
    t88 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t88 & t86);
    goto LAB88;

LAB89:    xsi_set_current_line(72, ng0);
    t95 = (t0 + 2088);
    t96 = (t95 + 56U);
    t97 = *((char **)t96);
    xsi_vlogfile_write(1, 0, 0, ng9, 2, t0, (char)118, t97, 7);
    goto LAB91;

LAB92:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 7, t5, 32);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 7);
    goto LAB50;

LAB95:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB97;

LAB96:    *((unsigned int *)t6) = 1;
    goto LAB97;

LAB99:    xsi_set_current_line(80, ng0);

LAB101:    xsi_set_current_line(81, ng0);
    t16 = (t0 + 1368U);
    t17 = *((char **)t16);
    t16 = (t0 + 2088);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    memset(t20, 0, 8);
    t21 = (t17 + 4);
    t22 = (t19 + 4);
    t23 = *((unsigned int *)t17);
    t24 = *((unsigned int *)t19);
    t25 = (t23 ^ t24);
    t26 = *((unsigned int *)t21);
    t27 = *((unsigned int *)t22);
    t28 = (t26 ^ t27);
    t29 = (t25 | t28);
    t30 = *((unsigned int *)t21);
    t31 = *((unsigned int *)t22);
    t32 = (t30 | t31);
    t33 = (~(t32));
    t34 = (t29 & t33);
    if (t34 != 0)
        goto LAB105;

LAB102:    if (t32 != 0)
        goto LAB104;

LAB103:    *((unsigned int *)t20) = 1;

LAB105:    t36 = (t20 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (~(t37));
    t39 = *((unsigned int *)t20);
    t40 = (t39 & t38);
    t41 = (t40 != 0);
    if (t41 > 0)
        goto LAB106;

LAB107:    xsi_set_current_line(82, ng0);

LAB109:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_unary_minus(t6, 32, t2, 32);
    memset(t20, 0, 8);
    t4 = (t3 + 4);
    t5 = (t6 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t23 = (t14 ^ t15);
    t24 = (t13 | t23);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB113;

LAB110:    if (t27 != 0)
        goto LAB112;

LAB111:    *((unsigned int *)t20) = 1;

LAB113:    memset(t45, 0, 8);
    t8 = (t20 + 4);
    t30 = *((unsigned int *)t8);
    t31 = (~(t30));
    t32 = *((unsigned int *)t20);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB114;

LAB115:    if (*((unsigned int *)t8) != 0)
        goto LAB116;

LAB117:    t10 = (t45 + 4);
    t37 = *((unsigned int *)t45);
    t38 = (!(t37));
    t39 = *((unsigned int *)t10);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB118;

LAB119:    memcpy(t65, t45, 8);

LAB120:    t89 = (t65 + 4);
    t90 = *((unsigned int *)t89);
    t91 = (~(t90));
    t92 = *((unsigned int *)t65);
    t93 = (t92 & t91);
    t94 = (t93 != 0);
    if (t94 > 0)
        goto LAB132;

LAB133:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1368U);
    t7 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng10, 3, t0, (char)118, t4, 7, (char)118, t7, 7);

LAB134:    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB108:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3216);
    xsi_process_wait(t2, 1000000LL);
    *((char **)t1) = &&LAB135;
    goto LAB1;

LAB104:    t35 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB105;

LAB106:    xsi_set_current_line(81, ng0);
    t42 = (t0 + 2088);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    xsi_vlogfile_write(1, 0, 0, ng7, 2, t0, (char)118, t44, 7);
    goto LAB108;

LAB112:    t7 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB113;

LAB114:    *((unsigned int *)t45) = 1;
    goto LAB117;

LAB116:    t9 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB117;

LAB118:    t16 = (t0 + 1368U);
    t17 = *((char **)t16);
    t16 = ((char*)((ng8)));
    memset(t46, 0, 8);
    xsi_vlog_unsigned_unary_minus(t46, 32, t16, 32);
    memset(t47, 0, 8);
    t18 = (t17 + 4);
    t19 = (t46 + 4);
    t41 = *((unsigned int *)t17);
    t48 = *((unsigned int *)t46);
    t49 = (t41 ^ t48);
    t50 = *((unsigned int *)t18);
    t51 = *((unsigned int *)t19);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t18);
    t55 = *((unsigned int *)t19);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB124;

LAB121:    if (t56 != 0)
        goto LAB123;

LAB122:    *((unsigned int *)t47) = 1;

LAB124:    memset(t59, 0, 8);
    t22 = (t47 + 4);
    t60 = *((unsigned int *)t22);
    t61 = (~(t60));
    t62 = *((unsigned int *)t47);
    t63 = (t62 & t61);
    t64 = (t63 & 1U);
    if (t64 != 0)
        goto LAB125;

LAB126:    if (*((unsigned int *)t22) != 0)
        goto LAB127;

LAB128:    t66 = *((unsigned int *)t45);
    t67 = *((unsigned int *)t59);
    t68 = (t66 | t67);
    *((unsigned int *)t65) = t68;
    t36 = (t45 + 4);
    t42 = (t59 + 4);
    t43 = (t65 + 4);
    t69 = *((unsigned int *)t36);
    t70 = *((unsigned int *)t42);
    t71 = (t69 | t70);
    *((unsigned int *)t43) = t71;
    t72 = *((unsigned int *)t43);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB129;

LAB130:
LAB131:    goto LAB120;

LAB123:    t21 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB124;

LAB125:    *((unsigned int *)t59) = 1;
    goto LAB128;

LAB127:    t35 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB128;

LAB129:    t74 = *((unsigned int *)t65);
    t75 = *((unsigned int *)t43);
    *((unsigned int *)t65) = (t74 | t75);
    t44 = (t45 + 4);
    t76 = (t59 + 4);
    t77 = *((unsigned int *)t44);
    t78 = (~(t77));
    t79 = *((unsigned int *)t45);
    t80 = (t79 & t78);
    t81 = *((unsigned int *)t76);
    t82 = (~(t81));
    t83 = *((unsigned int *)t59);
    t84 = (t83 & t82);
    t85 = (~(t80));
    t86 = (~(t84));
    t87 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t87 & t85);
    t88 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t88 & t86);
    goto LAB131;

LAB132:    xsi_set_current_line(83, ng0);
    t95 = (t0 + 2088);
    t96 = (t95 + 56U);
    t97 = *((char **)t96);
    xsi_vlogfile_write(1, 0, 0, ng9, 2, t0, (char)118, t97, 7);
    goto LAB134;

LAB135:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 7, t5, 32);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 7);
    goto LAB93;

LAB136:    xsi_set_current_line(91, ng0);
    xsi_vlogfile_write(1, 0, 0, ng15, 1, t0);
    goto LAB138;

}


extern void work_m_18272114073756442731_3629518409_init()
{
	static char *pe[] = {(void *)Always_33_0,(void *)Initial_36_1};
	xsi_register_didat("work_m_18272114073756442731_3629518409", "isim/two_digit_tb_isim_beh.exe.sim/work/m_18272114073756442731_3629518409.didat");
	xsi_register_executes(pe);
}
