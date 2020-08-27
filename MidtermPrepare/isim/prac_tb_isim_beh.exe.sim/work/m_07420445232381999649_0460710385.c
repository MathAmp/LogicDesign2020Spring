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
static const char *ng0 = "/home/ise/ise_projects/MidtermPrepare/prac.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static int ng5[] = {1, 0, 0, 0};



static void Cont_30_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 3800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;

LAB7:    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (~(t13));
    *((unsigned int *)t3) = t14;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB9;

LAB8:    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 1U);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t20 & 1U);
    t21 = (t0 + 5256);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 1U;
    t27 = t26;
    t28 = (t3 + 4);
    t29 = *((unsigned int *)t3);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t21, 0, 0);
    t34 = (t0 + 5112);
    *((int *)t34) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t12);
    *((unsigned int *)t3) = (t15 | t16);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t17 | t18);
    goto LAB8;

}

static void Cont_31_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 4048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;

LAB7:    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (~(t13));
    *((unsigned int *)t3) = t14;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB9;

LAB8:    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 1U);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t20 & 1U);
    t21 = (t0 + 5320);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 1U;
    t27 = t26;
    t28 = (t3 + 4);
    t29 = *((unsigned int *)t3);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t21, 0, 0);
    t34 = (t0 + 5128);
    *((int *)t34) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t12);
    *((unsigned int *)t3) = (t15 | t16);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t17 | t18);
    goto LAB8;

}

static void Always_33_2(char *t0)
{
    char t6[8];
    char t30[8];
    char t38[16];
    char t39[8];
    char t47[16];
    char t48[8];
    char t49[16];
    char t50[16];
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
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    int t37;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    int t46;

LAB0:    t1 = (t0 + 4296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 5144);
    *((int *)t2) = 1;
    t3 = (t0 + 4328);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
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

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB31;

LAB28:    if (t18 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t6) = 1;

LAB31:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(48, ng0);

LAB58:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t3, 1, t2, 32);
    t4 = (t0 + 2728);
    t5 = (t0 + 2728);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t30, t8, 2, t21, 32, 1);
    t22 = (t30 + 4);
    t9 = *((unsigned int *)t22);
    t37 = (!(t9));
    if (t37 == 1)
        goto LAB59;

LAB60:    t28 = (t0 + 2888);
    t29 = (t0 + 2888);
    t31 = (t29 + 72U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t39, t32, 2, t33, 32, 1);
    t34 = (t39 + 4);
    t10 = *((unsigned int *)t34);
    t46 = (!(t10));
    if (t46 == 1)
        goto LAB61;

LAB62:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    xsi_vlogtype_concat(t47, 33, 33, 2U, t2, 32, t3, 1);
    xsi_vlogtype_unsigned_bit_neg(t38, 33, t47, 33);
    t4 = ((char*)((ng5)));
    xsi_vlog_unsigned_add(t49, 33, t38, 33, t4, 32);
    t5 = (t0 + 2728);
    t7 = (t0 + 2728);
    t8 = (t7 + 72U);
    t21 = *((char **)t8);
    t22 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t6, t21, 2, t22, 32, 1);
    t28 = (t6 + 4);
    t9 = *((unsigned int *)t28);
    t37 = (!(t9));
    if (t37 == 1)
        goto LAB63;

LAB64:    t29 = (t0 + 2888);
    t31 = (t0 + 2888);
    t32 = (t31 + 72U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t30, t33, 2, t34, 32, 1);
    t35 = (t30 + 4);
    t10 = *((unsigned int *)t35);
    t46 = (!(t10));
    if (t46 == 1)
        goto LAB65;

LAB66:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t3, 1, t4, 1);
    t2 = ((char*)((ng2)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_add(t30, 32, t6, 32, t2, 32);
    t5 = (t0 + 2728);
    t7 = (t0 + 2728);
    t8 = (t7 + 72U);
    t21 = *((char **)t8);
    t22 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t39, t21, 2, t22, 32, 1);
    t28 = (t39 + 4);
    t9 = *((unsigned int *)t28);
    t37 = (!(t9));
    if (t37 == 1)
        goto LAB67;

LAB68:    t29 = (t0 + 2888);
    t31 = (t0 + 2888);
    t32 = (t31 + 72U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t48, t33, 2, t34, 32, 1);
    t35 = (t48 + 4);
    t10 = *((unsigned int *)t35);
    t46 = (!(t10));
    if (t46 == 1)
        goto LAB69;

LAB70:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    xsi_vlogtype_concat(t47, 33, 33, 2U, t2, 32, t4, 1);
    xsi_vlogtype_unsigned_bit_neg(t38, 33, t47, 33);
    t5 = ((char*)((ng5)));
    xsi_vlog_unsigned_add(t49, 33, t38, 33, t5, 32);
    xsi_vlog_unsigned_add(t50, 33, t3, 1, t49, 33);
    t7 = (t0 + 2728);
    t8 = (t0 + 2728);
    t21 = (t8 + 72U);
    t22 = *((char **)t21);
    t28 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t6, t22, 2, t28, 32, 1);
    t29 = (t6 + 4);
    t9 = *((unsigned int *)t29);
    t37 = (!(t9));
    if (t37 == 1)
        goto LAB71;

LAB72:    t31 = (t0 + 2888);
    t32 = (t0 + 2888);
    t33 = (t32 + 72U);
    t34 = *((char **)t33);
    t35 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t30, t34, 2, t35, 32, 1);
    t40 = (t30 + 4);
    t10 = *((unsigned int *)t40);
    t46 = (!(t10));
    if (t46 == 1)
        goto LAB73;

LAB74:
LAB34:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(34, ng0);

LAB13:    xsi_set_current_line(35, ng0);
    t28 = (t0 + 1368U);
    t29 = *((char **)t28);
    t28 = (t0 + 2728);
    t31 = (t0 + 2728);
    t32 = (t31 + 72U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t30, t33, 2, t34, 32, 1);
    t35 = (t30 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (!(t36));
    if (t37 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t0 + 2728);
    t4 = (t0 + 2728);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t6, t7, 2, t8, 32, 1);
    t21 = (t6 + 4);
    t9 = *((unsigned int *)t21);
    t37 = (!(t9));
    if (t37 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    *((unsigned int *)t6) = t11;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t5);
    t14 = (t12 | t13);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t7);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB18;

LAB19:
LAB20:    t8 = (t0 + 2728);
    t21 = (t0 + 2728);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t30, t28, 2, t29, 32, 1);
    t31 = (t30 + 4);
    t19 = *((unsigned int *)t31);
    t37 = (!(t19));
    if (t37 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    *((unsigned int *)t6) = t11;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t5);
    t14 = (t12 | t13);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t6) = t16;
    t17 = *((unsigned int *)t7);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB23;

LAB24:
LAB25:    t23 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t23 & 1U);
    t8 = (t6 + 4);
    t24 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t24 & 1U);
    t21 = (t0 + 2728);
    t22 = (t0 + 2728);
    t28 = (t22 + 72U);
    t29 = *((char **)t28);
    t31 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t30, t29, 2, t31, 32, 1);
    t32 = (t30 + 4);
    t25 = *((unsigned int *)t32);
    t37 = (!(t25));
    if (t37 == 1)
        goto LAB26;

LAB27:    goto LAB12;

LAB14:    xsi_vlogvar_wait_assign_value(t28, t29, 0, *((unsigned int *)t30), 1, 0LL);
    goto LAB15;

LAB16:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t6), 1, 0LL);
    goto LAB17;

LAB18:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    *((unsigned int *)t6) = (t17 | t18);
    goto LAB20;

LAB21:    xsi_vlogvar_wait_assign_value(t8, t6, 0, *((unsigned int *)t30), 1, 0LL);
    goto LAB22;

LAB23:    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t6) = (t19 | t20);
    goto LAB25;

LAB26:    xsi_vlogvar_wait_assign_value(t21, t6, 0, *((unsigned int *)t30), 1, 0LL);
    goto LAB27;

LAB30:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(41, ng0);

LAB35:    xsi_set_current_line(42, ng0);
    t21 = (t0 + 1368U);
    t22 = *((char **)t21);
    t21 = ((char*)((ng1)));
    xsi_vlogtype_concat(t38, 33, 33, 2U, t21, 32, t22, 1);
    t28 = (t0 + 2728);
    t29 = (t0 + 2728);
    t31 = (t29 + 72U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t30, t32, 2, t33, 32, 1);
    t34 = (t30 + 4);
    t36 = *((unsigned int *)t34);
    t37 = (!(t36));
    if (t37 == 1)
        goto LAB36;

LAB37:    t35 = (t0 + 2888);
    t40 = (t0 + 2888);
    t41 = (t40 + 72U);
    t42 = *((char **)t41);
    t43 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t39, t42, 2, t43, 32, 1);
    t44 = (t39 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (!(t45));
    if (t46 == 1)
        goto LAB38;

LAB39:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    xsi_vlogtype_concat(t47, 33, 33, 2U, t2, 32, t3, 1);
    xsi_vlogtype_unsigned_bit_neg(t38, 33, t47, 33);
    t4 = (t0 + 2728);
    t5 = (t0 + 2728);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t6, t8, 2, t21, 32, 1);
    t22 = (t6 + 4);
    t9 = *((unsigned int *)t22);
    t37 = (!(t9));
    if (t37 == 1)
        goto LAB40;

LAB41:    t28 = (t0 + 2888);
    t29 = (t0 + 2888);
    t31 = (t29 + 72U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t30, t32, 2, t33, 32, 1);
    t34 = (t30 + 4);
    t10 = *((unsigned int *)t34);
    t46 = (!(t10));
    if (t46 == 1)
        goto LAB42;

LAB43:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 2, t3, 1, t4, 1);
    t2 = (t0 + 2728);
    t5 = (t0 + 2728);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t30, t8, 2, t21, 32, 1);
    t22 = (t30 + 4);
    t9 = *((unsigned int *)t22);
    t37 = (!(t9));
    if (t37 == 1)
        goto LAB44;

LAB45:    t28 = (t0 + 2888);
    t29 = (t0 + 2888);
    t31 = (t29 + 72U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t39, t32, 2, t33, 32, 1);
    t34 = (t39 + 4);
    t10 = *((unsigned int *)t34);
    t46 = (!(t10));
    if (t46 == 1)
        goto LAB46;

LAB47:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB51;

LAB49:    if (*((unsigned int *)t2) == 0)
        goto LAB48;

LAB50:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;

LAB51:    t5 = (t6 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    *((unsigned int *)t6) = t15;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB53;

LAB52:    t20 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t20 & 3U);
    t23 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t23 & 3U);
    t8 = (t0 + 1528U);
    t21 = *((char **)t8);
    memset(t30, 0, 8);
    xsi_vlog_unsigned_add(t30, 2, t6, 2, t21, 1);
    t8 = (t0 + 2728);
    t22 = (t0 + 2728);
    t28 = (t22 + 72U);
    t29 = *((char **)t28);
    t31 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t39, t29, 2, t31, 32, 1);
    t32 = (t39 + 4);
    t24 = *((unsigned int *)t32);
    t37 = (!(t24));
    if (t37 == 1)
        goto LAB54;

LAB55:    t33 = (t0 + 2888);
    t34 = (t0 + 2888);
    t35 = (t34 + 72U);
    t40 = *((char **)t35);
    t41 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t48, t40, 2, t41, 32, 1);
    t42 = (t48 + 4);
    t25 = *((unsigned int *)t42);
    t46 = (!(t25));
    if (t46 == 1)
        goto LAB56;

LAB57:    goto LAB34;

LAB36:    xsi_vlogvar_wait_assign_value(t28, t38, 0, *((unsigned int *)t30), 1, 0LL);
    goto LAB37;

LAB38:    xsi_vlogvar_wait_assign_value(t35, t38, 1, *((unsigned int *)t39), 1, 0LL);
    goto LAB39;

LAB40:    xsi_vlogvar_wait_assign_value(t4, t38, 0, *((unsigned int *)t6), 1, 0LL);
    goto LAB41;

LAB42:    xsi_vlogvar_wait_assign_value(t28, t38, 1, *((unsigned int *)t30), 1, 0LL);
    goto LAB43;

LAB44:    xsi_vlogvar_wait_assign_value(t2, t6, 0, *((unsigned int *)t30), 1, 0LL);
    goto LAB45;

LAB46:    xsi_vlogvar_wait_assign_value(t28, t6, 1, *((unsigned int *)t39), 1, 0LL);
    goto LAB47;

LAB48:    *((unsigned int *)t6) = 1;
    goto LAB51;

LAB53:    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t6) = (t16 | t17);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t7);
    *((unsigned int *)t5) = (t18 | t19);
    goto LAB52;

LAB54:    xsi_vlogvar_wait_assign_value(t8, t30, 0, *((unsigned int *)t39), 1, 0LL);
    goto LAB55;

LAB56:    xsi_vlogvar_wait_assign_value(t33, t30, 1, *((unsigned int *)t48), 1, 0LL);
    goto LAB57;

LAB59:    xsi_vlogvar_wait_assign_value(t4, t6, 0, *((unsigned int *)t30), 1, 0LL);
    goto LAB60;

LAB61:    xsi_vlogvar_wait_assign_value(t28, t6, 1, *((unsigned int *)t39), 1, 0LL);
    goto LAB62;

LAB63:    xsi_vlogvar_wait_assign_value(t5, t49, 0, *((unsigned int *)t6), 1, 0LL);
    goto LAB64;

LAB65:    xsi_vlogvar_wait_assign_value(t29, t49, 1, *((unsigned int *)t30), 1, 0LL);
    goto LAB66;

LAB67:    xsi_vlogvar_wait_assign_value(t5, t30, 0, *((unsigned int *)t39), 1, 0LL);
    goto LAB68;

LAB69:    xsi_vlogvar_wait_assign_value(t29, t30, 1, *((unsigned int *)t48), 1, 0LL);
    goto LAB70;

LAB71:    xsi_vlogvar_wait_assign_value(t7, t50, 0, *((unsigned int *)t6), 1, 0LL);
    goto LAB72;

LAB73:    xsi_vlogvar_wait_assign_value(t31, t50, 1, *((unsigned int *)t30), 1, 0LL);
    goto LAB74;

}

static void Cont_56_3(char *t0)
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

LAB0:    t1 = (t0 + 4544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5384);
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
    t18 = (t0 + 5160);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_57_4(char *t0)
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

LAB0:    t1 = (t0 + 4792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5448);
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
    t18 = (t0 + 5176);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_07420445232381999649_0460710385_init()
{
	static char *pe[] = {(void *)Cont_30_0,(void *)Cont_31_1,(void *)Always_33_2,(void *)Cont_56_3,(void *)Cont_57_4};
	xsi_register_didat("work_m_07420445232381999649_0460710385", "isim/prac_tb_isim_beh.exe.sim/work/m_07420445232381999649_0460710385.didat");
	xsi_register_executes(pe);
}
