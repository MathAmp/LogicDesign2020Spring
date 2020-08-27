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
static const char *ng0 = "/home/ise/ise_projects/VendingMachine/vending_machine_tb.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {30U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {6U, 0U};
static unsigned int ng5[] = {5U, 0U};
static int ng6[] = {0, 0};
static unsigned int ng7[] = {10U, 0U};
static int ng8[] = {1, 0};
static unsigned int ng9[] = {15U, 0U};
static int ng10[] = {2, 0};
static int ng11[] = {3, 0};
static int ng12[] = {4, 0};
static unsigned int ng13[] = {2U, 0U};
static unsigned int ng14[] = {1156U, 0U};
static unsigned int ng15[] = {290U, 0U};
static unsigned int ng16[] = {65U, 0U};
static unsigned int ng17[] = {390U, 0U};
static int ng18[] = {5, 0};
static int ng19[] = {6, 0};
static int ng20[] = {7, 0};
static int ng21[] = {8, 0};
static int ng22[] = {9, 0};
static int ng23[] = {10, 0};
static int ng24[] = {11, 0};
static const char *ng25 = "Starting Vending Machine Test!";
static const char *ng26 = "Test 1: Nickel - Nickel - Nickel - Nickel - Reset";
static const char *ng27 = "Test 1 failed at # %d: answer: %d, output: %d";
static const char *ng28 = "Test 2: Dime - Dime - Reset";
static const char *ng29 = "Test 2 failed at # %d: answer: %d, output: %d";
static const char *ng30 = "Test 3: Hold - Nickel - Hold - Dime - Nickel - Reset - Dime - Hold - Hold - Nickel - Dime - Reset";
static int ng31[] = {12, 0};
static const char *ng32 = "Test 3 failed at # %d: answer: %d, output: %d";
static const char *ng33 = "[Test Results]";
static const char *ng34 = "Test %d failed";
static const char *ng35 = "Test %d passed";



static void Initial_50_0(char *t0)
{
    char t4[8];
    char t5[8];
    char t29[8];
    char t37[8];
    char t49[8];
    char t51[8];
    char t59[8];
    char t91[16];
    char t96[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    int t15;
    char *t16;
    unsigned int t17;
    int t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    int t22;
    int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t50;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;

LAB0:    t1 = (t0 + 5720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);

LAB4:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3208);
    t6 = (t0 + 3208);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3208);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB5;

LAB6:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3208);
    t6 = (t0 + 3208);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3208);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng8)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3208);
    t6 = (t0 + 3208);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3208);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng10)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3208);
    t6 = (t0 + 3208);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3208);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng11)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    t6 = (t0 + 3208);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3208);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng12)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 3848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4008);
    t6 = (t0 + 4008);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 4008);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4008);
    t6 = (t0 + 4008);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 4008);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng8)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4008);
    t6 = (t0 + 4008);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 4008);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng10)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 4168);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4328);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4808);
    t6 = (t0 + 4808);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 4808);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4808);
    t6 = (t0 + 4808);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 4808);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng8)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4808);
    t6 = (t0 + 4808);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 4808);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng10)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB25;

LAB26:    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4808);
    t6 = (t0 + 4808);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 4808);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng11)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB27;

LAB28:    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4808);
    t6 = (t0 + 4808);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 4808);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng12)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB29;

LAB30:    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4808);
    t6 = (t0 + 4808);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 4808);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng18)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB31;

LAB32:    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4808);
    t6 = (t0 + 4808);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 4808);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng19)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB33;

LAB34:    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4808);
    t6 = (t0 + 4808);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 4808);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng20)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB35;

LAB36:    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4808);
    t6 = (t0 + 4808);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 4808);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng21)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB37;

LAB38:    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4808);
    t6 = (t0 + 4808);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 4808);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng22)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB39;

LAB40:    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4808);
    t6 = (t0 + 4808);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 4808);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng23)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB41;

LAB42:    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4808);
    t6 = (t0 + 4808);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 4808);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng24)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB43;

LAB44:    xsi_set_current_line(93, ng0);
    xsi_vlogfile_write(1, 0, 0, ng25, 1, t0);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 5528);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB45;

LAB1:    return;
LAB5:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB6;

LAB7:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB8;

LAB9:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB10;

LAB11:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB12;

LAB13:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB14;

LAB15:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB16;

LAB17:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB18;

LAB19:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB20;

LAB21:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB22;

LAB23:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB24;

LAB25:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB26;

LAB27:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB28;

LAB29:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB30;

LAB31:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB32;

LAB33:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB34;

LAB35:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB36;

LAB37:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB38;

LAB39:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB40;

LAB41:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB42;

LAB43:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB44;

LAB45:    xsi_set_current_line(96, ng0);
    t3 = ((char*)((ng6)));
    t6 = (t0 + 1768);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 1);
    xsi_set_current_line(99, ng0);
    xsi_vlogfile_write(1, 0, 0, ng26, 1, t0);
    xsi_set_current_line(101, ng0);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB46:    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng18)));
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t6, 32, t7, 32);
    t8 = (t4 + 4);
    t14 = *((unsigned int *)t8);
    t17 = (~(t14));
    t20 = *((unsigned int *)t4);
    t21 = (t20 & t17);
    t24 = (t21 != 0);
    if (t24 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(115, ng0);
    xsi_vlogfile_write(1, 0, 0, ng28, 1, t0);
    xsi_set_current_line(117, ng0);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB78:    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng11)));
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t6, 32, t7, 32);
    t8 = (t4 + 4);
    t14 = *((unsigned int *)t8);
    t17 = (~(t14));
    t20 = *((unsigned int *)t4);
    t21 = (t20 & t17);
    t24 = (t21 != 0);
    if (t24 > 0)
        goto LAB79;

LAB80:    xsi_set_current_line(131, ng0);
    xsi_vlogfile_write(1, 0, 0, ng30, 1, t0);
    xsi_set_current_line(133, ng0);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB110:    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng31)));
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t6, 32, t7, 32);
    t8 = (t4 + 4);
    t14 = *((unsigned int *)t8);
    t17 = (~(t14));
    t20 = *((unsigned int *)t4);
    t21 = (t20 & t17);
    t24 = (t21 != 0);
    if (t24 > 0)
        goto LAB111;

LAB112:    xsi_set_current_line(146, ng0);
    xsi_vlogfile_write(1, 0, 0, ng33, 1, t0);
    xsi_set_current_line(147, ng0);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB142:    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng11)));
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t6, 32, t7, 32);
    t8 = (t4 + 4);
    t14 = *((unsigned int *)t8);
    t17 = (~(t14));
    t20 = *((unsigned int *)t4);
    t21 = (t20 & t17);
    t24 = (t21 != 0);
    if (t24 > 0)
        goto LAB143;

LAB144:    xsi_set_current_line(151, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

LAB47:    xsi_set_current_line(101, ng0);

LAB49:    xsi_set_current_line(102, ng0);
    t9 = (t0 + 2568);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 2568);
    t13 = (t12 + 72U);
    t16 = *((char **)t13);
    t25 = (t0 + 2248);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    xsi_vlog_generic_get_index_select_value(t5, 1, t11, t16, 2, t27, 32, 1);
    t28 = (t0 + 1928);
    xsi_vlogvar_assign_value(t28, t5, 0, 0, 1);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 2728);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2248);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_generic_get_index_select_value(t4, 1, t6, t9, 2, t12, 32, 1);
    t13 = (t0 + 2088);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 2888);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2248);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_generic_get_index_select_value(t4, 1, t6, t9, 2, t12, 32, 1);
    t13 = (t0 + 1768);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 5528);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB50;
    goto LAB1;

LAB50:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 3048);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2248);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_generic_get_index_select_value(t4, 1, t6, t9, 2, t12, 32, 1);
    t13 = (t0 + 1208U);
    t16 = *((char **)t13);
    memset(t5, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t16))
        goto LAB52;

LAB51:    t13 = (t4 + 4);
    t25 = (t16 + 4);
    if (*((unsigned int *)t13) != *((unsigned int *)t25))
        goto LAB52;

LAB53:    memset(t29, 0, 8);
    t26 = (t5 + 4);
    t14 = *((unsigned int *)t26);
    t17 = (~(t14));
    t20 = *((unsigned int *)t5);
    t21 = (t20 & t17);
    t24 = (t21 & 1U);
    if (t24 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t26) != 0)
        goto LAB56;

LAB57:    t28 = (t29 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = *((unsigned int *)t28);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB58;

LAB59:    memcpy(t59, t29, 8);

LAB60:    t85 = (t59 + 4);
    t86 = *((unsigned int *)t85);
    t87 = (~(t86));
    t88 = *((unsigned int *)t59);
    t89 = (t88 & t87);
    t90 = (t89 != 0);
    if (t90 > 0)
        goto LAB71;

LAB72:
LAB73:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 5528);
    xsi_process_wait(t2, 39000LL);
    *((char **)t1) = &&LAB77;
    goto LAB1;

LAB52:    *((unsigned int *)t5) = 1;
    goto LAB53;

LAB54:    *((unsigned int *)t29) = 1;
    goto LAB57;

LAB56:    t27 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB57;

LAB58:    t34 = (t0 + 3208);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t38 = (t0 + 3208);
    t39 = (t38 + 72U);
    t40 = *((char **)t39);
    t41 = (t0 + 3208);
    t42 = (t41 + 64U);
    t43 = *((char **)t42);
    t44 = (t0 + 2248);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    xsi_vlog_generic_get_array_select_value(t37, 4, t36, t40, t43, 2, 1, t46, 32, 1);
    t47 = (t0 + 1048U);
    t48 = *((char **)t47);
    memset(t49, 0, 8);
    if (*((unsigned int *)t37) != *((unsigned int *)t48))
        goto LAB62;

LAB61:    t47 = (t37 + 4);
    t50 = (t48 + 4);
    if (*((unsigned int *)t47) != *((unsigned int *)t50))
        goto LAB62;

LAB63:    memset(t51, 0, 8);
    t52 = (t49 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (~(t53));
    t55 = *((unsigned int *)t49);
    t56 = (t55 & t54);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t52) != 0)
        goto LAB66;

LAB67:    t60 = *((unsigned int *)t29);
    t61 = *((unsigned int *)t51);
    t62 = (t60 | t61);
    *((unsigned int *)t59) = t62;
    t63 = (t29 + 4);
    t64 = (t51 + 4);
    t65 = (t59 + 4);
    t66 = *((unsigned int *)t63);
    t67 = *((unsigned int *)t64);
    t68 = (t66 | t67);
    *((unsigned int *)t65) = t68;
    t69 = *((unsigned int *)t65);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB68;

LAB69:
LAB70:    goto LAB60;

LAB62:    *((unsigned int *)t49) = 1;
    goto LAB63;

LAB64:    *((unsigned int *)t51) = 1;
    goto LAB67;

LAB66:    t58 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB67;

LAB68:    t71 = *((unsigned int *)t59);
    t72 = *((unsigned int *)t65);
    *((unsigned int *)t59) = (t71 | t72);
    t73 = (t29 + 4);
    t74 = (t51 + 4);
    t75 = *((unsigned int *)t73);
    t76 = (~(t75));
    t77 = *((unsigned int *)t29);
    t15 = (t77 & t76);
    t78 = *((unsigned int *)t74);
    t79 = (~(t78));
    t80 = *((unsigned int *)t51);
    t18 = (t80 & t79);
    t81 = (~(t15));
    t82 = (~(t18));
    t83 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t83 & t81);
    t84 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t84 & t82);
    goto LAB70;

LAB71:    xsi_set_current_line(107, ng0);

LAB74:    xsi_set_current_line(108, ng0);
    t92 = xsi_vlog_time(t91, 1000.0000000000000, 1000.0000000000000);
    t93 = (t0 + 3208);
    t94 = (t93 + 56U);
    t95 = *((char **)t94);
    t97 = (t0 + 3208);
    t98 = (t97 + 72U);
    t99 = *((char **)t98);
    t100 = (t0 + 3208);
    t101 = (t100 + 64U);
    t102 = *((char **)t101);
    t103 = (t0 + 2248);
    t104 = (t103 + 56U);
    t105 = *((char **)t104);
    xsi_vlog_generic_get_array_select_value(t96, 4, t95, t99, t102, 2, 1, t105, 32, 1);
    t106 = (t0 + 1048U);
    t107 = *((char **)t106);
    xsi_vlogfile_write(1, 0, 0, ng27, 4, t0, (char)118, t91, 64, (char)118, t96, 4, (char)118, t107, 4);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2408);
    t6 = (t0 + 2408);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t4, t8, 2, t9, 32, 1);
    t10 = (t4 + 4);
    t14 = *((unsigned int *)t10);
    t15 = (!(t14));
    if (t15 == 1)
        goto LAB75;

LAB76:    goto LAB73;

LAB75:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t4), 1);
    goto LAB76;

LAB77:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng8)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t6, 32, t7, 32);
    t8 = (t0 + 2248);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 32);
    goto LAB46;

LAB79:    xsi_set_current_line(117, ng0);

LAB81:    xsi_set_current_line(118, ng0);
    t9 = (t0 + 3368);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 3368);
    t13 = (t12 + 72U);
    t16 = *((char **)t13);
    t25 = (t0 + 2248);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    xsi_vlog_generic_get_index_select_value(t5, 1, t11, t16, 2, t27, 32, 1);
    t28 = (t0 + 1928);
    xsi_vlogvar_assign_value(t28, t5, 0, 0, 1);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 3528);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2248);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_generic_get_index_select_value(t4, 1, t6, t9, 2, t12, 32, 1);
    t13 = (t0 + 2088);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 3688);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2248);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_generic_get_index_select_value(t4, 1, t6, t9, 2, t12, 32, 1);
    t13 = (t0 + 1768);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 5528);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB82;
    goto LAB1;

LAB82:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 3848);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2248);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_generic_get_index_select_value(t4, 1, t6, t9, 2, t12, 32, 1);
    t13 = (t0 + 1208U);
    t16 = *((char **)t13);
    memset(t5, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t16))
        goto LAB84;

LAB83:    t13 = (t4 + 4);
    t25 = (t16 + 4);
    if (*((unsigned int *)t13) != *((unsigned int *)t25))
        goto LAB84;

LAB85:    memset(t29, 0, 8);
    t26 = (t5 + 4);
    t14 = *((unsigned int *)t26);
    t17 = (~(t14));
    t20 = *((unsigned int *)t5);
    t21 = (t20 & t17);
    t24 = (t21 & 1U);
    if (t24 != 0)
        goto LAB86;

LAB87:    if (*((unsigned int *)t26) != 0)
        goto LAB88;

LAB89:    t28 = (t29 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = *((unsigned int *)t28);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB90;

LAB91:    memcpy(t59, t29, 8);

LAB92:    t85 = (t59 + 4);
    t86 = *((unsigned int *)t85);
    t87 = (~(t86));
    t88 = *((unsigned int *)t59);
    t89 = (t88 & t87);
    t90 = (t89 != 0);
    if (t90 > 0)
        goto LAB103;

LAB104:
LAB105:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 5528);
    xsi_process_wait(t2, 39000LL);
    *((char **)t1) = &&LAB109;
    goto LAB1;

LAB84:    *((unsigned int *)t5) = 1;
    goto LAB85;

LAB86:    *((unsigned int *)t29) = 1;
    goto LAB89;

LAB88:    t27 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB89;

LAB90:    t34 = (t0 + 4008);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t38 = (t0 + 4008);
    t39 = (t38 + 72U);
    t40 = *((char **)t39);
    t41 = (t0 + 4008);
    t42 = (t41 + 64U);
    t43 = *((char **)t42);
    t44 = (t0 + 2248);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    xsi_vlog_generic_get_array_select_value(t37, 4, t36, t40, t43, 2, 1, t46, 32, 1);
    t47 = (t0 + 1048U);
    t48 = *((char **)t47);
    memset(t49, 0, 8);
    if (*((unsigned int *)t37) != *((unsigned int *)t48))
        goto LAB94;

LAB93:    t47 = (t37 + 4);
    t50 = (t48 + 4);
    if (*((unsigned int *)t47) != *((unsigned int *)t50))
        goto LAB94;

LAB95:    memset(t51, 0, 8);
    t52 = (t49 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (~(t53));
    t55 = *((unsigned int *)t49);
    t56 = (t55 & t54);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB96;

LAB97:    if (*((unsigned int *)t52) != 0)
        goto LAB98;

LAB99:    t60 = *((unsigned int *)t29);
    t61 = *((unsigned int *)t51);
    t62 = (t60 | t61);
    *((unsigned int *)t59) = t62;
    t63 = (t29 + 4);
    t64 = (t51 + 4);
    t65 = (t59 + 4);
    t66 = *((unsigned int *)t63);
    t67 = *((unsigned int *)t64);
    t68 = (t66 | t67);
    *((unsigned int *)t65) = t68;
    t69 = *((unsigned int *)t65);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB100;

LAB101:
LAB102:    goto LAB92;

LAB94:    *((unsigned int *)t49) = 1;
    goto LAB95;

LAB96:    *((unsigned int *)t51) = 1;
    goto LAB99;

LAB98:    t58 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB99;

LAB100:    t71 = *((unsigned int *)t59);
    t72 = *((unsigned int *)t65);
    *((unsigned int *)t59) = (t71 | t72);
    t73 = (t29 + 4);
    t74 = (t51 + 4);
    t75 = *((unsigned int *)t73);
    t76 = (~(t75));
    t77 = *((unsigned int *)t29);
    t15 = (t77 & t76);
    t78 = *((unsigned int *)t74);
    t79 = (~(t78));
    t80 = *((unsigned int *)t51);
    t18 = (t80 & t79);
    t81 = (~(t15));
    t82 = (~(t18));
    t83 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t83 & t81);
    t84 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t84 & t82);
    goto LAB102;

LAB103:    xsi_set_current_line(123, ng0);

LAB106:    xsi_set_current_line(124, ng0);
    t92 = xsi_vlog_time(t91, 1000.0000000000000, 1000.0000000000000);
    t93 = (t0 + 4008);
    t94 = (t93 + 56U);
    t95 = *((char **)t94);
    t97 = (t0 + 4008);
    t98 = (t97 + 72U);
    t99 = *((char **)t98);
    t100 = (t0 + 4008);
    t101 = (t100 + 64U);
    t102 = *((char **)t101);
    t103 = (t0 + 2248);
    t104 = (t103 + 56U);
    t105 = *((char **)t104);
    xsi_vlog_generic_get_array_select_value(t96, 4, t95, t99, t102, 2, 1, t105, 32, 1);
    t106 = (t0 + 1048U);
    t107 = *((char **)t106);
    xsi_vlogfile_write(1, 0, 0, ng29, 4, t0, (char)118, t91, 64, (char)118, t96, 4, (char)118, t107, 4);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2408);
    t6 = (t0 + 2408);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t4, t8, 2, t9, 32, 1);
    t10 = (t4 + 4);
    t14 = *((unsigned int *)t10);
    t15 = (!(t14));
    if (t15 == 1)
        goto LAB107;

LAB108:    goto LAB105;

LAB107:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t4), 1);
    goto LAB108;

LAB109:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng8)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t6, 32, t7, 32);
    t8 = (t0 + 2248);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 32);
    goto LAB78;

LAB111:    xsi_set_current_line(133, ng0);

LAB113:    xsi_set_current_line(134, ng0);
    t9 = (t0 + 4168);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 4168);
    t13 = (t12 + 72U);
    t16 = *((char **)t13);
    t25 = (t0 + 2248);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    xsi_vlog_generic_get_index_select_value(t5, 1, t11, t16, 2, t27, 32, 1);
    t28 = (t0 + 1928);
    xsi_vlogvar_assign_value(t28, t5, 0, 0, 1);
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 4328);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 4328);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2248);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_generic_get_index_select_value(t4, 1, t6, t9, 2, t12, 32, 1);
    t13 = (t0 + 2088);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 4488);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 4488);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2248);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_generic_get_index_select_value(t4, 1, t6, t9, 2, t12, 32, 1);
    t13 = (t0 + 1768);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    xsi_set_current_line(137, ng0);
    t2 = (t0 + 5528);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB114;
    goto LAB1;

LAB114:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 4648);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 4648);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2248);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_generic_get_index_select_value(t4, 1, t6, t9, 2, t12, 32, 1);
    t13 = (t0 + 1208U);
    t16 = *((char **)t13);
    memset(t5, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t16))
        goto LAB116;

LAB115:    t13 = (t4 + 4);
    t25 = (t16 + 4);
    if (*((unsigned int *)t13) != *((unsigned int *)t25))
        goto LAB116;

LAB117:    memset(t29, 0, 8);
    t26 = (t5 + 4);
    t14 = *((unsigned int *)t26);
    t17 = (~(t14));
    t20 = *((unsigned int *)t5);
    t21 = (t20 & t17);
    t24 = (t21 & 1U);
    if (t24 != 0)
        goto LAB118;

LAB119:    if (*((unsigned int *)t26) != 0)
        goto LAB120;

LAB121:    t28 = (t29 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = *((unsigned int *)t28);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB122;

LAB123:    memcpy(t59, t29, 8);

LAB124:    t85 = (t59 + 4);
    t86 = *((unsigned int *)t85);
    t87 = (~(t86));
    t88 = *((unsigned int *)t59);
    t89 = (t88 & t87);
    t90 = (t89 != 0);
    if (t90 > 0)
        goto LAB135;

LAB136:
LAB137:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 5528);
    xsi_process_wait(t2, 39000LL);
    *((char **)t1) = &&LAB141;
    goto LAB1;

LAB116:    *((unsigned int *)t5) = 1;
    goto LAB117;

LAB118:    *((unsigned int *)t29) = 1;
    goto LAB121;

LAB120:    t27 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB121;

LAB122:    t34 = (t0 + 4808);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t38 = (t0 + 4808);
    t39 = (t38 + 72U);
    t40 = *((char **)t39);
    t41 = (t0 + 4808);
    t42 = (t41 + 64U);
    t43 = *((char **)t42);
    t44 = (t0 + 2248);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    xsi_vlog_generic_get_array_select_value(t37, 4, t36, t40, t43, 2, 1, t46, 32, 1);
    t47 = (t0 + 1048U);
    t48 = *((char **)t47);
    memset(t49, 0, 8);
    if (*((unsigned int *)t37) != *((unsigned int *)t48))
        goto LAB126;

LAB125:    t47 = (t37 + 4);
    t50 = (t48 + 4);
    if (*((unsigned int *)t47) != *((unsigned int *)t50))
        goto LAB126;

LAB127:    memset(t51, 0, 8);
    t52 = (t49 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (~(t53));
    t55 = *((unsigned int *)t49);
    t56 = (t55 & t54);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB128;

LAB129:    if (*((unsigned int *)t52) != 0)
        goto LAB130;

LAB131:    t60 = *((unsigned int *)t29);
    t61 = *((unsigned int *)t51);
    t62 = (t60 | t61);
    *((unsigned int *)t59) = t62;
    t63 = (t29 + 4);
    t64 = (t51 + 4);
    t65 = (t59 + 4);
    t66 = *((unsigned int *)t63);
    t67 = *((unsigned int *)t64);
    t68 = (t66 | t67);
    *((unsigned int *)t65) = t68;
    t69 = *((unsigned int *)t65);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB132;

LAB133:
LAB134:    goto LAB124;

LAB126:    *((unsigned int *)t49) = 1;
    goto LAB127;

LAB128:    *((unsigned int *)t51) = 1;
    goto LAB131;

LAB130:    t58 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB131;

LAB132:    t71 = *((unsigned int *)t59);
    t72 = *((unsigned int *)t65);
    *((unsigned int *)t59) = (t71 | t72);
    t73 = (t29 + 4);
    t74 = (t51 + 4);
    t75 = *((unsigned int *)t73);
    t76 = (~(t75));
    t77 = *((unsigned int *)t29);
    t15 = (t77 & t76);
    t78 = *((unsigned int *)t74);
    t79 = (~(t78));
    t80 = *((unsigned int *)t51);
    t18 = (t80 & t79);
    t81 = (~(t15));
    t82 = (~(t18));
    t83 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t83 & t81);
    t84 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t84 & t82);
    goto LAB134;

LAB135:    xsi_set_current_line(139, ng0);

LAB138:    xsi_set_current_line(140, ng0);
    t92 = xsi_vlog_time(t91, 1000.0000000000000, 1000.0000000000000);
    t93 = (t0 + 4808);
    t94 = (t93 + 56U);
    t95 = *((char **)t94);
    t97 = (t0 + 4808);
    t98 = (t97 + 72U);
    t99 = *((char **)t98);
    t100 = (t0 + 4808);
    t101 = (t100 + 64U);
    t102 = *((char **)t101);
    t103 = (t0 + 2248);
    t104 = (t103 + 56U);
    t105 = *((char **)t104);
    xsi_vlog_generic_get_array_select_value(t96, 4, t95, t99, t102, 2, 1, t105, 32, 1);
    t106 = (t0 + 1048U);
    t107 = *((char **)t106);
    xsi_vlogfile_write(1, 0, 0, ng32, 4, t0, (char)118, t91, 64, (char)118, t96, 4, (char)118, t107, 4);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2408);
    t6 = (t0 + 2408);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng10)));
    xsi_vlog_generic_convert_bit_index(t4, t8, 2, t9, 32, 1);
    t10 = (t4 + 4);
    t14 = *((unsigned int *)t10);
    t15 = (!(t14));
    if (t15 == 1)
        goto LAB139;

LAB140:    goto LAB137;

LAB139:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t4), 1);
    goto LAB140;

LAB141:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng8)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t6, 32, t7, 32);
    t8 = (t0 + 2248);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 32);
    goto LAB110;

LAB143:    xsi_set_current_line(147, ng0);

LAB145:    xsi_set_current_line(148, ng0);
    t9 = (t0 + 2408);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 2408);
    t13 = (t12 + 72U);
    t16 = *((char **)t13);
    t25 = (t0 + 2248);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    xsi_vlog_generic_get_index_select_value(t5, 32, t11, t16, 2, t27, 32, 1);
    t28 = ((char*)((ng8)));
    memset(t29, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t28))
        goto LAB148;

LAB146:    t34 = (t5 + 4);
    t35 = (t28 + 4);
    if (*((unsigned int *)t34) != *((unsigned int *)t35))
        goto LAB148;

LAB147:    *((unsigned int *)t29) = 1;

LAB148:    t36 = (t29 + 4);
    t30 = *((unsigned int *)t36);
    t31 = (~(t30));
    t32 = *((unsigned int *)t29);
    t33 = (t32 & t31);
    t53 = (t33 != 0);
    if (t53 > 0)
        goto LAB149;

LAB150:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng35, 2, t0, (char)119, t6, 32);

LAB151:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng8)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t6, 32, t7, 32);
    t8 = (t0 + 2248);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 32);
    goto LAB142;

LAB149:    xsi_set_current_line(148, ng0);
    t38 = (t0 + 2248);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    xsi_vlogfile_write(1, 0, 0, ng34, 2, t0, (char)119, t40, 32);
    goto LAB151;

}

static void Always_155_1(char *t0)
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

LAB0:    t1 = (t0 + 5968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 5776);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(155, ng0);
    t4 = (t0 + 1608);
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
    t24 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t24, t3, 0, 0, 1, 0LL);
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


extern void work_m_00101275002812810755_3632861155_init()
{
	static char *pe[] = {(void *)Initial_50_0,(void *)Always_155_1};
	xsi_register_didat("work_m_00101275002812810755_3632861155", "isim/vending_machine_tb_isim_beh.exe.sim/work/m_00101275002812810755_3632861155.didat");
	xsi_register_executes(pe);
}
