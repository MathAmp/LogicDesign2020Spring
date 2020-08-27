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
static const char *ng0 = "/home/ise/ise_projects/shift_reg_8b.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {3U, 0U};
static unsigned int ng4[] = {2U, 0U};
static int ng5[] = {7, 0};
static int ng6[] = {1, 0};
static unsigned int ng7[] = {1U, 0U};
static int ng8[] = {6, 0};



static void Cont_16_0(char *t0)
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

LAB0:    t1 = (t0 + 3320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3984);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
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
    xsi_driver_vfirst_trans(t5, 0, 7);
    t18 = (t0 + 3888);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_18_1(char *t0)
{
    char t6[8];
    char t30[8];
    char t37[8];
    char t48[8];
    char t49[8];
    char t50[8];
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
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    unsigned int t57;
    int t58;
    char *t59;
    unsigned int t60;
    int t61;
    int t62;
    char *t63;
    unsigned int t64;
    int t65;
    int t66;
    unsigned int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    int t71;
    int t72;

LAB0:    t1 = (t0 + 3568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 3904);
    *((int *)t2) = 1;
    t3 = (t0 + 3600);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(19, ng0);

LAB5:    xsi_set_current_line(20, ng0);
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

LAB11:    xsi_set_current_line(23, ng0);

LAB14:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 3U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 3U);
    t5 = ((char*)((ng3)));
    memset(t30, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t8);
    t20 = (t18 ^ t19);
    t23 = (t17 | t20);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t8);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t31 = (t23 & t27);
    if (t31 != 0)
        goto LAB18;

LAB15:    if (t26 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t30) = 1;

LAB18:    t22 = (t30 + 4);
    t32 = *((unsigned int *)t22);
    t33 = (~(t32));
    t34 = *((unsigned int *)t30);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 3U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 3U);
    t5 = ((char*)((ng4)));
    memset(t30, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t8);
    t20 = (t18 ^ t19);
    t23 = (t17 | t20);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t8);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t31 = (t23 & t27);
    if (t31 != 0)
        goto LAB26;

LAB23:    if (t26 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t30) = 1;

LAB26:    t22 = (t30 + 4);
    t32 = *((unsigned int *)t22);
    t33 = (~(t32));
    t34 = *((unsigned int *)t30);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 3U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 3U);
    t5 = ((char*)((ng7)));
    memset(t30, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t8);
    t20 = (t18 ^ t19);
    t23 = (t17 | t20);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t8);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t31 = (t23 & t27);
    if (t31 != 0)
        goto LAB38;

LAB35:    if (t26 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t30) = 1;

LAB38:    t22 = (t30 + 4);
    t32 = *((unsigned int *)t22);
    t33 = (~(t32));
    t34 = *((unsigned int *)t30);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 3U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 3U);
    t5 = ((char*)((ng2)));
    memset(t30, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t8);
    t20 = (t18 ^ t19);
    t23 = (t17 | t20);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t8);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t31 = (t23 & t27);
    if (t31 != 0)
        goto LAB50;

LAB47:    if (t26 != 0)
        goto LAB49;

LAB48:    *((unsigned int *)t30) = 1;

LAB50:    t22 = (t30 + 4);
    t32 = *((unsigned int *)t22);
    t33 = (~(t32));
    t34 = *((unsigned int *)t30);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB51;

LAB52:
LAB53:
LAB41:
LAB29:
LAB21:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(20, ng0);

LAB13:    xsi_set_current_line(21, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 8, 0LL);
    goto LAB12;

LAB17:    t21 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(24, ng0);

LAB22:    xsi_set_current_line(25, ng0);
    t28 = (t0 + 1848U);
    t29 = *((char **)t28);
    memset(t37, 0, 8);
    t28 = (t37 + 4);
    t38 = (t29 + 4);
    t39 = *((unsigned int *)t29);
    t40 = (t39 >> 0);
    *((unsigned int *)t37) = t40;
    t41 = *((unsigned int *)t38);
    t42 = (t41 >> 0);
    *((unsigned int *)t28) = t42;
    t43 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t43 & 255U);
    t44 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t44 & 255U);
    t45 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t45, t37, 0, 0, 8, 0LL);
    goto LAB21;

LAB25:    t21 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB26;

LAB27:    xsi_set_current_line(27, ng0);

LAB30:    xsi_set_current_line(28, ng0);
    t28 = (t0 + 2408);
    t29 = (t28 + 56U);
    t38 = *((char **)t29);
    memset(t37, 0, 8);
    t45 = (t37 + 4);
    t46 = (t38 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (t39 >> 0);
    *((unsigned int *)t37) = t40;
    t41 = *((unsigned int *)t46);
    t42 = (t41 >> 0);
    *((unsigned int *)t45) = t42;
    t43 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t43 & 127U);
    t44 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t44 & 127U);
    t47 = (t0 + 2408);
    t51 = (t0 + 2408);
    t52 = (t51 + 72U);
    t53 = *((char **)t52);
    t54 = ((char*)((ng5)));
    t55 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t48, t49, t50, ((int*)(t53)), 2, t54, 32, 1, t55, 32, 1);
    t56 = (t48 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (!(t57));
    t59 = (t49 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (!(t60));
    t62 = (t58 && t61);
    t63 = (t50 + 4);
    t64 = *((unsigned int *)t63);
    t65 = (!(t64));
    t66 = (t62 && t65);
    if (t66 == 1)
        goto LAB31;

LAB32:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2408);
    t4 = (t0 + 2408);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t6, t7, 2, t8, 32, 1);
    t21 = (t6 + 4);
    t9 = *((unsigned int *)t21);
    t58 = (!(t9));
    if (t58 == 1)
        goto LAB33;

LAB34:    goto LAB29;

LAB31:    t67 = *((unsigned int *)t50);
    t68 = (t67 + 0);
    t69 = *((unsigned int *)t48);
    t70 = *((unsigned int *)t49);
    t71 = (t69 - t70);
    t72 = (t71 + 1);
    xsi_vlogvar_wait_assign_value(t47, t37, t68, *((unsigned int *)t49), t72, 0LL);
    goto LAB32;

LAB33:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t6), 1, 0LL);
    goto LAB34;

LAB37:    t21 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB38;

LAB39:    xsi_set_current_line(31, ng0);

LAB42:    xsi_set_current_line(32, ng0);
    t28 = (t0 + 2408);
    t29 = (t28 + 56U);
    t38 = *((char **)t29);
    memset(t37, 0, 8);
    t45 = (t37 + 4);
    t46 = (t38 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (t39 >> 1);
    *((unsigned int *)t37) = t40;
    t41 = *((unsigned int *)t46);
    t42 = (t41 >> 1);
    *((unsigned int *)t45) = t42;
    t43 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t43 & 127U);
    t44 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t44 & 127U);
    t47 = (t0 + 2408);
    t51 = (t0 + 2408);
    t52 = (t51 + 72U);
    t53 = *((char **)t52);
    t54 = ((char*)((ng8)));
    t55 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t48, t49, t50, ((int*)(t53)), 2, t54, 32, 1, t55, 32, 1);
    t56 = (t48 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (!(t57));
    t59 = (t49 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (!(t60));
    t62 = (t58 && t61);
    t63 = (t50 + 4);
    t64 = *((unsigned int *)t63);
    t65 = (!(t64));
    t66 = (t62 && t65);
    if (t66 == 1)
        goto LAB43;

LAB44:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 2408);
    t4 = (t0 + 2408);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t6, t7, 2, t8, 32, 1);
    t21 = (t6 + 4);
    t9 = *((unsigned int *)t21);
    t58 = (!(t9));
    if (t58 == 1)
        goto LAB45;

LAB46:    goto LAB41;

LAB43:    t67 = *((unsigned int *)t50);
    t68 = (t67 + 0);
    t69 = *((unsigned int *)t48);
    t70 = *((unsigned int *)t49);
    t71 = (t69 - t70);
    t72 = (t71 + 1);
    xsi_vlogvar_wait_assign_value(t47, t37, t68, *((unsigned int *)t49), t72, 0LL);
    goto LAB44;

LAB45:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t6), 1, 0LL);
    goto LAB46;

LAB49:    t21 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB50;

LAB51:    xsi_set_current_line(35, ng0);

LAB54:    xsi_set_current_line(36, ng0);
    t28 = (t0 + 2408);
    t29 = (t28 + 56U);
    t38 = *((char **)t29);
    t45 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t45, t38, 0, 0, 8, 0LL);
    goto LAB53;

}


extern void work_m_02826264368186035171_0567277079_init()
{
	static char *pe[] = {(void *)Cont_16_0,(void *)Always_18_1};
	xsi_register_didat("work_m_02826264368186035171_0567277079", "isim/shift_reg_8b_tb_isim_beh.exe.sim/work/m_02826264368186035171_0567277079.didat");
	xsi_register_executes(pe);
}
