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
static const char *ng0 = "/home/ise/ise_projects/stopwatch_tb.v";
static unsigned int ng1[] = {63U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {6U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {91U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {79U, 0U};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {102U, 0U};
static unsigned int ng10[] = {4U, 0U};
static unsigned int ng11[] = {109U, 0U};
static unsigned int ng12[] = {5U, 0U};
static unsigned int ng13[] = {125U, 0U};
static unsigned int ng14[] = {7U, 0U};
static unsigned int ng15[] = {127U, 0U};
static unsigned int ng16[] = {8U, 0U};
static unsigned int ng17[] = {111U, 0U};
static unsigned int ng18[] = {9U, 0U};
static unsigned int ng19[] = {10U, 0U};
static unsigned int ng20[] = {20U, 0U};
static unsigned int ng21[] = {30U, 0U};
static unsigned int ng22[] = {40U, 0U};
static unsigned int ng23[] = {50U, 0U};
static unsigned int ng24[] = {60U, 0U};
static unsigned int ng25[] = {70U, 0U};
static unsigned int ng26[] = {80U, 0U};
static unsigned int ng27[] = {90U, 0U};



static void Always_122_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 2840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 3408);
    *((int *)t2) = 1;
    t3 = (t0 + 2872);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(122, ng0);

LAB5:    xsi_set_current_line(123, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t4, 7);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 7);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 7);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 7);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 7);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 7);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 7);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 7);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 7);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 7);
    if (t6 == 1)
        goto LAB25;

LAB26:
LAB28:
LAB27:    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB29:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);

LAB30:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 7, t2, 7);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 7, t2, 7);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 7, t2, 7);
    if (t6 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 7, t2, 7);
    if (t6 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 7, t2, 7);
    if (t6 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 7, t2, 7);
    if (t6 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 7, t2, 7);
    if (t6 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 7, t2, 7);
    if (t6 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 7, t2, 7);
    if (t6 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 7, t2, 7);
    if (t6 == 1)
        goto LAB49;

LAB50:
LAB52:
LAB51:    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 7, 0LL);

LAB53:    goto LAB2;

LAB7:    xsi_set_current_line(124, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 5, 0LL);
    goto LAB29;

LAB9:    xsi_set_current_line(125, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 5, 0LL);
    goto LAB29;

LAB11:    xsi_set_current_line(126, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 5, 0LL);
    goto LAB29;

LAB13:    xsi_set_current_line(127, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 5, 0LL);
    goto LAB29;

LAB15:    xsi_set_current_line(128, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 5, 0LL);
    goto LAB29;

LAB17:    xsi_set_current_line(129, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 5, 0LL);
    goto LAB29;

LAB19:    xsi_set_current_line(130, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 5, 0LL);
    goto LAB29;

LAB21:    xsi_set_current_line(131, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 5, 0LL);
    goto LAB29;

LAB23:    xsi_set_current_line(132, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 5, 0LL);
    goto LAB29;

LAB25:    xsi_set_current_line(133, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 5, 0LL);
    goto LAB29;

LAB31:    xsi_set_current_line(137, ng0);
    t4 = ((char*)((ng2)));
    t7 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 7, 0LL);
    goto LAB53;

LAB33:    xsi_set_current_line(138, ng0);
    t4 = ((char*)((ng19)));
    t7 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 7, 0LL);
    goto LAB53;

LAB35:    xsi_set_current_line(139, ng0);
    t4 = ((char*)((ng20)));
    t7 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 7, 0LL);
    goto LAB53;

LAB37:    xsi_set_current_line(140, ng0);
    t4 = ((char*)((ng21)));
    t7 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 7, 0LL);
    goto LAB53;

LAB39:    xsi_set_current_line(141, ng0);
    t4 = ((char*)((ng22)));
    t7 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 7, 0LL);
    goto LAB53;

LAB41:    xsi_set_current_line(142, ng0);
    t4 = ((char*)((ng23)));
    t7 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 7, 0LL);
    goto LAB53;

LAB43:    xsi_set_current_line(143, ng0);
    t4 = ((char*)((ng24)));
    t7 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 7, 0LL);
    goto LAB53;

LAB45:    xsi_set_current_line(144, ng0);
    t4 = ((char*)((ng25)));
    t7 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 7, 0LL);
    goto LAB53;

LAB47:    xsi_set_current_line(145, ng0);
    t4 = ((char*)((ng26)));
    t7 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 7, 0LL);
    goto LAB53;

LAB49:    xsi_set_current_line(146, ng0);
    t4 = ((char*)((ng27)));
    t7 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 7, 0LL);
    goto LAB53;

}

static void Always_152_1(char *t0)
{
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;

LAB0:    t1 = (t0 + 3088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(152, ng0);
    t2 = (t0 + 3424);
    *((int *)t2) = 1;
    t3 = (t0 + 3120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(152, ng0);

LAB5:    xsi_set_current_line(153, ng0);
    t4 = (t0 + 1768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1928);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 7, t6, 5, t9, 7);
    t11 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t11, t10, 0, 0, 7, 0LL);
    goto LAB2;

}


extern void work_m_05191449899640451568_3588055212_init()
{
	static char *pe[] = {(void *)Always_122_0,(void *)Always_152_1};
	xsi_register_didat("work_m_05191449899640451568_3588055212", "isim/stopwatch_tb_isim_beh.exe.sim/work/m_05191449899640451568_3588055212.didat");
	xsi_register_executes(pe);
}
