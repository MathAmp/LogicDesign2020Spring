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
static const char *ng0 = "/home/ise/ise_projects/shift_reg_4b_tb.v";
static const char *ng1 = "Wrong at #%0d";
static int ng2[] = {1, 0};
static int ng3[] = {0, 0};
static const char *ng4 = "Testing...";
static int ng5[] = {7, 0};
static const char *ng6 = "Test %0d Started. D=%b, SDL=%d, SDR=%d";
static int ng7[] = {3, 0};
static int ng8[] = {2, 0};
static const char *ng9 = "Test passed.";
static const char *ng10 = "Test Finished.";
static const char *ng11 = "Overall test passed.";
static const char *ng12 = "Overall test failed.";



static void Always_57_0(char *t0)
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

LAB0:    t1 = (t0 + 3800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 1928);
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
    t24 = (t0 + 1928);
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

static void Always_61_1(char *t0)
{
    char t5[8];
    char t6[8];
    char t21[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t22;

LAB0:    t1 = (t0 + 4048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 4616);
    *((int *)t2) = 1;
    t3 = (t0 + 4080);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(61, ng0);

LAB5:    xsi_set_current_line(62, ng0);
    t4 = (t0 + 3856);
    xsi_process_wait(t4, 1000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t4))
        goto LAB9;

LAB7:    t2 = (t3 + 4);
    t7 = (t4 + 4);
    if (*((unsigned int *)t2) != *((unsigned int *)t7))
        goto LAB9;

LAB8:    *((unsigned int *)t6) = 1;

LAB9:    memset(t5, 0, 8);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t8) == 0)
        goto LAB10;

LAB12:    t14 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t14) = 1;

LAB13:    t15 = (t5 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t5);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB14;

LAB15:
LAB16:    goto LAB2;

LAB10:    *((unsigned int *)t5) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(63, ng0);

LAB17:    xsi_set_current_line(64, ng0);
    t22 = xsi_vlog_time(t21, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng1, 2, t0, (char)118, t21, 64);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB16;

}

static void Initial_71_2(char *t0)
{
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;

LAB0:    t1 = (t0 + 4296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(71, ng0);

LAB4:    xsi_set_current_line(73, ng0);
    xsi_vlogfile_write(1, 0, 0, ng4, 1, t0);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 4104);
    xsi_process_wait(t2, 13000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 6400);
    *((int *)t8) = t7;

LAB6:    t9 = (t0 + 6400);
    if (*((int *)t9) > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(106, ng0);
    xsi_vlogfile_write(1, 0, 0, ng10, 1, t0);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = (t8 + 4);
    t4 = *((unsigned int *)t9);
    t5 = (~(t4));
    t6 = *((unsigned int *)t8);
    t19 = (t6 & t5);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(108, ng0);
    xsi_vlogfile_write(1, 0, 0, ng12, 1, t0);

LAB26:    goto LAB1;

LAB7:    xsi_set_current_line(84, ng0);

LAB9:    xsi_set_current_line(85, ng0);
    t10 = ((char*)((ng2)));
    t11 = (t0 + 1608);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng2)));
    memset(t12, 0, 8);
    xsi_vlog_signed_add(t12, 32, t8, 32, t9, 32);
    t10 = (t0 + 2888);
    xsi_vlogvar_assign_value(t10, t12, 0, 0, 32);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = (t0 + 2408);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t13 = (t0 + 2088);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 2248);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    xsi_vlogfile_write(1, 0, 0, ng6, 5, t0, (char)119, t8, 32, (char)118, t11, 4, (char)118, t15, 1, (char)118, t18, 1);
    xsi_set_current_line(89, ng0);
    *((int *)t12) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t2 = (t12 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t12, 0, 0, 1);
    t8 = (t0 + 2408);
    xsi_vlogvar_assign_value(t8, t12, 1, 0, 4);
    t9 = (t0 + 2248);
    xsi_vlogvar_assign_value(t9, t12, 5, 0, 1);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 4104);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 4104);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 4104);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 4104);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 4104);
    xsi_process_wait(t2, 30000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 4104);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB15:    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 4104);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB16:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    memset(t12, 0, 8);
    t9 = (t8 + 4);
    t4 = *((unsigned int *)t9);
    t5 = (~(t4));
    t6 = *((unsigned int *)t8);
    t19 = (t6 & t5);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t9) == 0)
        goto LAB17;

LAB19:    t10 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t10) = 1;

LAB20:    t11 = (t12 + 4);
    t21 = *((unsigned int *)t11);
    t22 = (~(t21));
    t23 = *((unsigned int *)t12);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB21;

LAB22:
LAB23:    t2 = (t0 + 6400);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB6;

LAB17:    *((unsigned int *)t12) = 1;
    goto LAB20;

LAB21:    xsi_set_current_line(104, ng0);
    xsi_vlogfile_write(1, 0, 0, ng9, 1, t0);
    goto LAB23;

LAB24:    xsi_set_current_line(107, ng0);
    xsi_vlogfile_write(1, 0, 0, ng11, 1, t0);
    goto LAB26;

}


extern void work_m_17995738783976355702_0198606525_init()
{
	static char *pe[] = {(void *)Always_57_0,(void *)Always_61_1,(void *)Initial_71_2};
	xsi_register_didat("work_m_17995738783976355702_0198606525", "isim/shift_reg_4b_tb_isim_beh.exe.sim/work/m_17995738783976355702_0198606525.didat");
	xsi_register_executes(pe);
}
