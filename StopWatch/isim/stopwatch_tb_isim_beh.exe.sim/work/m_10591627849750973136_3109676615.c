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
static const char *ng0 = "/home/ise/ise_projects/stopwatch.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};



static void Always_129_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 3544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 4360);
    *((int *)t2) = 1;
    t3 = (t0 + 3576);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(130, ng0);

LAB5:    xsi_set_current_line(131, ng0);
    t5 = (t0 + 1752U);
    t6 = *((char **)t5);
    t5 = (t0 + 2472);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    xsi_vlogtype_concat(t4, 3, 3, 2U, t8, 2, t6, 1);

LAB6:    t9 = ((char*)((ng1)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 3, t9, 3);
    if (t10 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t10 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t10 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t10 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t10 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t10 == 1)
        goto LAB17;

LAB18:
LAB20:
LAB19:    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2632);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(132, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2632);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    goto LAB21;

LAB9:    xsi_set_current_line(133, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 2632);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 0LL);
    goto LAB21;

LAB11:    xsi_set_current_line(134, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 2632);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 0LL);
    goto LAB21;

LAB13:    xsi_set_current_line(135, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 2632);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 0LL);
    goto LAB21;

LAB15:    xsi_set_current_line(136, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 2632);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 0LL);
    goto LAB21;

LAB17:    xsi_set_current_line(137, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 2632);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 0LL);
    goto LAB21;

}

static void Always_142_1(char *t0)
{
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

LAB0:    t1 = (t0 + 3792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 4376);
    *((int *)t2) = 1;
    t3 = (t0 + 3824);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(143, ng0);

LAB5:    xsi_set_current_line(144, ng0);
    t4 = (t0 + 1912U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 2632);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(145, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    goto LAB8;

}

static void Always_150_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 4040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(150, ng0);
    t2 = (t0 + 4392);
    *((int *)t2) = 1;
    t3 = (t0 + 4072);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(151, ng0);

LAB5:    xsi_set_current_line(152, ng0);
    t4 = (t0 + 2472);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 2);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2312);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(153, ng0);
    t9 = ((char*)((ng1)));
    t10 = (t0 + 2312);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    goto LAB15;

LAB9:    xsi_set_current_line(154, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2312);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    goto LAB15;

LAB11:    xsi_set_current_line(155, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2312);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    goto LAB15;

}


extern void work_m_10591627849750973136_3109676615_init()
{
	static char *pe[] = {(void *)Always_129_0,(void *)Always_142_1,(void *)Always_150_2};
	xsi_register_didat("work_m_10591627849750973136_3109676615", "isim/stopwatch_tb_isim_beh.exe.sim/work/m_10591627849750973136_3109676615.didat");
	xsi_register_executes(pe);
}
