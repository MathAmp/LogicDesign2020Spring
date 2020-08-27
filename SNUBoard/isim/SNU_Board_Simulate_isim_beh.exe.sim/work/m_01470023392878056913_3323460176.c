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
static const char *ng0 = "/home/ise/ise_projects/SNUBoard/SNU_Board_Simulate.v";
static const char *ng1 = "out/result.dat";
static const char *ng2 = "w";
static const char *ng3 = "Open Error during write. Make sure /out folder is current in the project folder.";
static int ng4[] = {0, 0};
static int ng5[] = {64, 0};
static const char *ng6 = "%0d\n";
static const char *ng7 = "Writing input of %3d";
static int ng8[] = {1, 0};
static const char *ng9 = "Writing Done.";



static void Initial_74_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
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
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    t1 = (t0 + 5376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(74, ng0);

LAB4:    xsi_set_current_line(75, ng0);
    *((int *)t3) = xsi_vlogfile_file_open_of_cname_ctype(ng1, ng2);
    t2 = (t3 + 4);
    *((int *)t2) = 0;
    t4 = (t0 + 4464);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 4464);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t6) == 0)
        goto LAB5;

LAB7:    t12 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t12) = 1;

LAB8:    t13 = (t3 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t3);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB9;

LAB10:
LAB11:    xsi_set_current_line(79, ng0);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 4304);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);

LAB13:    t2 = (t0 + 4304);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng5)));
    memset(t3, 0, 8);
    xsi_vlog_signed_less(t3, 32, t5, 32, t6, 32);
    t12 = (t3 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 4464);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_vlogfile_fclose(*((unsigned int *)t5));
    xsi_set_current_line(98, ng0);
    xsi_vlogfile_write(1, 0, 0, ng9, 1, t0);

LAB1:    return;
LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(76, ng0);

LAB12:    xsi_set_current_line(77, ng0);
    xsi_vlogfile_write(1, 0, 0, ng3, 1, t0);
    goto LAB11;

LAB14:    xsi_set_current_line(79, ng0);

LAB16:    xsi_set_current_line(80, ng0);
    t13 = (t0 + 4304);
    t19 = (t13 + 56U);
    t20 = *((char **)t19);
    t21 = (t0 + 4144);
    xsi_vlogvar_assign_value(t21, t20, 0, 0, 1);
    t22 = (t0 + 3984);
    xsi_vlogvar_assign_value(t22, t20, 1, 0, 1);
    t23 = (t0 + 3824);
    xsi_vlogvar_assign_value(t23, t20, 2, 0, 1);
    t24 = (t0 + 3664);
    xsi_vlogvar_assign_value(t24, t20, 3, 0, 1);
    t25 = (t0 + 3504);
    xsi_vlogvar_assign_value(t25, t20, 4, 0, 1);
    t26 = (t0 + 3344);
    xsi_vlogvar_assign_value(t26, t20, 5, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 5184);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB17:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 4464);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 4304);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 0, 0, 1, ng6, 2, t0, (char)119, t13, 32);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 4464);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 1184U);
    t12 = *((char **)t6);
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 0, 0, 1, ng6, 2, t0, (char)118, t12, 7);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 4464);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 1344U);
    t12 = *((char **)t6);
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 0, 0, 1, ng6, 2, t0, (char)118, t12, 7);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 4464);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 1504U);
    t12 = *((char **)t6);
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 0, 0, 1, ng6, 2, t0, (char)118, t12, 7);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 4464);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 1664U);
    t12 = *((char **)t6);
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 0, 0, 1, ng6, 2, t0, (char)118, t12, 7);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 4464);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 1824U);
    t12 = *((char **)t6);
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 0, 0, 1, ng6, 2, t0, (char)118, t12, 7);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 4464);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 1984U);
    t12 = *((char **)t6);
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 0, 0, 1, ng6, 2, t0, (char)118, t12, 7);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 4464);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2144U);
    t12 = *((char **)t6);
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 0, 0, 1, ng6, 2, t0, (char)118, t12, 1);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 4464);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2304U);
    t12 = *((char **)t6);
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 0, 0, 1, ng6, 2, t0, (char)118, t12, 1);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 4464);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2464U);
    t12 = *((char **)t6);
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 0, 0, 1, ng6, 2, t0, (char)118, t12, 1);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 4464);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2624U);
    t12 = *((char **)t6);
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 0, 0, 1, ng6, 2, t0, (char)118, t12, 1);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 4464);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2784U);
    t12 = *((char **)t6);
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 0, 0, 1, ng6, 2, t0, (char)118, t12, 1);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 4464);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2944U);
    t12 = *((char **)t6);
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 0, 0, 1, ng6, 2, t0, (char)118, t12, 1);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 4304);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_vlogfile_write(1, 0, 0, ng7, 2, t0, (char)119, t5, 32);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 4304);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng8)));
    memset(t3, 0, 8);
    xsi_vlog_signed_add(t3, 32, t5, 32, t6, 32);
    t12 = (t0 + 4304);
    xsi_vlogvar_assign_value(t12, t3, 0, 0, 32);
    goto LAB13;

}


extern void work_m_01470023392878056913_3323460176_init()
{
	static char *pe[] = {(void *)Initial_74_0};
	xsi_register_didat("work_m_01470023392878056913_3323460176", "isim/SNU_Board_Simulate_isim_beh.exe.sim/work/m_01470023392878056913_3323460176.didat");
	xsi_register_executes(pe);
}
