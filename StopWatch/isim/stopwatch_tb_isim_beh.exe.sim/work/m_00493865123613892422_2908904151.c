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
static unsigned int ng1[] = {0U, 0U, 0U, 0U};
static unsigned int ng2[] = {16383U, 0U};



static void Always_20_0(char *t0)
{
    char t14[8];
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
    char *t13;

LAB0:    t1 = (t0 + 4760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 5328);
    *((int *)t2) = 1;
    t3 = (t0 + 4792);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(20, ng0);

LAB5:    xsi_set_current_line(21, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 2808U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB14;

LAB15:
LAB16:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(21, ng0);

LAB9:    xsi_set_current_line(23, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 7, 0LL);
    t13 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t13, t11, 7, 0, 7, 0LL);
    xsi_set_current_line(24, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    t4 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t4, t2, 7, 0, 7, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(27, ng0);

LAB13:    xsi_set_current_line(29, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);
    t4 = (t0 + 2168U);
    t11 = *((char **)t4);
    xsi_vlogtype_concat(t14, 14, 14, 2U, t11, 7, t5, 7);
    t4 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t4, t14, 0, 0, 7, 0LL);
    t12 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t12, t14, 7, 0, 7, 0LL);
    goto LAB12;

LAB14:    xsi_set_current_line(32, ng0);

LAB17:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);
    t4 = (t0 + 2168U);
    t11 = *((char **)t4);
    xsi_vlogtype_concat(t14, 14, 14, 2U, t11, 7, t5, 7);
    t4 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t4, t14, 0, 0, 7, 0LL);
    t12 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t12, t14, 7, 0, 7, 0LL);
    goto LAB16;

}

static void Cont_47_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t21[8];
    char t22[8];
    char t35[8];
    char t36[8];
    char t49[8];
    char t60[8];
    char t71[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
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
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;

LAB0:    t1 = (t0 + 5008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2328U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    t19 = *((unsigned int *)t12);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t21, 8);

LAB16:    t72 = (t0 + 5488);
    t75 = (t72 + 56U);
    t76 = *((char **)t75);
    t77 = (t76 + 56U);
    t78 = *((char **)t77);
    memset(t78, 0, 8);
    t79 = 127U;
    t80 = t79;
    t81 = (t3 + 4);
    t82 = *((unsigned int *)t3);
    t79 = (t79 & t82);
    t83 = *((unsigned int *)t81);
    t80 = (t80 & t83);
    t84 = (t78 + 4);
    t85 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t85 | t79);
    t86 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t86 | t80);
    xsi_driver_vfirst_trans(t72, 0, 6);
    t87 = (t0 + 5424);
    t88 = (t87 + 56U);
    t89 = *((char **)t88);
    t90 = (t89 + 56U);
    t91 = *((char **)t90);
    memset(t91, 0, 8);
    t92 = 16256U;
    t93 = t92;
    t94 = (t3 + 4);
    t95 = *((unsigned int *)t3);
    t92 = (t92 & t95);
    t96 = *((unsigned int *)t94);
    t93 = (t93 & t96);
    t92 = (t92 >> 7);
    t93 = (t93 >> 7);
    t97 = (t91 + 4);
    t98 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t98 | t92);
    t99 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t99 | t93);
    xsi_driver_vfirst_trans(t87, 0, 6);
    t100 = (t0 + 5344);
    *((int *)t100) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = ((char*)((ng2)));
    goto LAB9;

LAB10:    t23 = (t0 + 2968U);
    t24 = *((char **)t23);
    memset(t22, 0, 8);
    t23 = (t24 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (~(t25));
    t27 = *((unsigned int *)t24);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t23) != 0)
        goto LAB19;

LAB20:    t31 = (t22 + 4);
    t32 = *((unsigned int *)t22);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB21;

LAB22:    t67 = *((unsigned int *)t22);
    t68 = (~(t67));
    t69 = *((unsigned int *)t31);
    t70 = (t68 || t69);
    if (t70 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t31) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t22) > 0)
        goto LAB27;

LAB28:    memcpy(t21, t71, 8);

LAB29:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 14, t16, 14, t21, 14);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t22) = 1;
    goto LAB20;

LAB19:    t30 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB20;

LAB21:    t37 = (t0 + 1528U);
    t38 = *((char **)t37);
    memset(t36, 0, 8);
    t37 = (t38 + 4);
    t39 = *((unsigned int *)t37);
    t40 = (~(t39));
    t41 = *((unsigned int *)t38);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t37) != 0)
        goto LAB32;

LAB33:    t45 = (t36 + 4);
    t46 = *((unsigned int *)t36);
    t47 = *((unsigned int *)t45);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB34;

LAB35:    t56 = *((unsigned int *)t36);
    t57 = (~(t56));
    t58 = *((unsigned int *)t45);
    t59 = (t57 || t58);
    if (t59 > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t45) > 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t36) > 0)
        goto LAB40;

LAB41:    memcpy(t35, t60, 8);

LAB42:    goto LAB22;

LAB23:    t72 = (t0 + 2008U);
    t73 = *((char **)t72);
    t72 = (t0 + 2168U);
    t74 = *((char **)t72);
    xsi_vlogtype_concat(t71, 14, 14, 2U, t74, 7, t73, 7);
    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t21, 14, t35, 14, t71, 14);
    goto LAB29;

LAB27:    memcpy(t21, t35, 8);
    goto LAB29;

LAB30:    *((unsigned int *)t36) = 1;
    goto LAB33;

LAB32:    t44 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB33;

LAB34:    t50 = (t0 + 3368);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    t53 = (t0 + 3528);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    xsi_vlogtype_concat(t49, 14, 14, 2U, t55, 7, t52, 7);
    goto LAB35;

LAB36:    t61 = (t0 + 3688);
    t62 = (t61 + 56U);
    t63 = *((char **)t62);
    t64 = (t0 + 3848);
    t65 = (t64 + 56U);
    t66 = *((char **)t65);
    xsi_vlogtype_concat(t60, 14, 14, 2U, t66, 7, t63, 7);
    goto LAB37;

LAB38:    xsi_vlog_unsigned_bit_combine(t35, 14, t49, 14, t60, 14);
    goto LAB42;

LAB40:    memcpy(t35, t49, 8);
    goto LAB42;

}


extern void work_m_00493865123613892422_2908904151_init()
{
	static char *pe[] = {(void *)Always_20_0,(void *)Cont_47_1};
	xsi_register_didat("work_m_00493865123613892422_2908904151", "isim/stopwatch_tb_isim_beh.exe.sim/work/m_00493865123613892422_2908904151.didat");
	xsi_register_executes(pe);
}
