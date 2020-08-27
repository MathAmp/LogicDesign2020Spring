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
static const char *ng0 = "/home/ise/ise_projects/substr.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};



static void Always_17_0(char *t0)
{
    char t14[8];
    char t15[8];
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
    int t13;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 2840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 3408);
    *((int *)t2) = 1;
    t3 = (t0 + 2872);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18, ng0);

LAB5:    xsi_set_current_line(20, ng0);
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

LAB7:    xsi_set_current_line(23, ng0);

LAB10:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB11:    t5 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB18;

LAB19:
LAB20:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(20, ng0);

LAB9:    xsi_set_current_line(21, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    goto LAB8;

LAB12:    xsi_set_current_line(25, ng0);
    t11 = (t0 + 1368U);
    t12 = *((char **)t11);
    memset(t15, 0, 8);
    t11 = (t12 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t12);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t11) != 0)
        goto LAB23;

LAB24:    t17 = (t15 + 4);
    t18 = *((unsigned int *)t15);
    t19 = *((unsigned int *)t17);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB25;

LAB26:    t22 = *((unsigned int *)t15);
    t23 = (~(t22));
    t24 = *((unsigned int *)t17);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t17) > 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t15) > 0)
        goto LAB31;

LAB32:    memcpy(t14, t26, 8);

LAB33:    t27 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t27, t14, 0, 0, 2, 0LL);
    goto LAB20;

LAB14:    xsi_set_current_line(26, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    memset(t15, 0, 8);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t3) != 0)
        goto LAB36;

LAB37:    t12 = (t15 + 4);
    t18 = *((unsigned int *)t15);
    t19 = *((unsigned int *)t12);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB38;

LAB39:    t22 = *((unsigned int *)t15);
    t23 = (~(t22));
    t24 = *((unsigned int *)t12);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t12) > 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t15) > 0)
        goto LAB44;

LAB45:    memcpy(t14, t17, 8);

LAB46:    t21 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t21, t14, 0, 0, 2, 0LL);
    goto LAB20;

LAB16:    xsi_set_current_line(27, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    memset(t15, 0, 8);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t3) != 0)
        goto LAB49;

LAB50:    t12 = (t15 + 4);
    t18 = *((unsigned int *)t15);
    t19 = *((unsigned int *)t12);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB51;

LAB52:    t22 = *((unsigned int *)t15);
    t23 = (~(t22));
    t24 = *((unsigned int *)t12);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t12) > 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t15) > 0)
        goto LAB57;

LAB58:    memcpy(t14, t17, 8);

LAB59:    t21 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t21, t14, 0, 0, 2, 0LL);
    goto LAB20;

LAB18:    xsi_set_current_line(28, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    memset(t15, 0, 8);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t3) != 0)
        goto LAB62;

LAB63:    t12 = (t15 + 4);
    t18 = *((unsigned int *)t15);
    t19 = *((unsigned int *)t12);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB64;

LAB65:    t22 = *((unsigned int *)t15);
    t23 = (~(t22));
    t24 = *((unsigned int *)t12);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t12) > 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t15) > 0)
        goto LAB70;

LAB71:    memcpy(t14, t17, 8);

LAB72:    t21 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t21, t14, 0, 0, 2, 0LL);
    goto LAB20;

LAB21:    *((unsigned int *)t15) = 1;
    goto LAB24;

LAB23:    t16 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB24;

LAB25:    t21 = ((char*)((ng1)));
    goto LAB26;

LAB27:    t26 = ((char*)((ng2)));
    goto LAB28;

LAB29:    xsi_vlog_unsigned_bit_combine(t14, 2, t21, 2, t26, 2);
    goto LAB33;

LAB31:    memcpy(t14, t21, 8);
    goto LAB33;

LAB34:    *((unsigned int *)t15) = 1;
    goto LAB37;

LAB36:    t11 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB37;

LAB38:    t16 = ((char*)((ng3)));
    goto LAB39;

LAB40:    t17 = ((char*)((ng2)));
    goto LAB41;

LAB42:    xsi_vlog_unsigned_bit_combine(t14, 2, t16, 2, t17, 2);
    goto LAB46;

LAB44:    memcpy(t14, t16, 8);
    goto LAB46;

LAB47:    *((unsigned int *)t15) = 1;
    goto LAB50;

LAB49:    t11 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB50;

LAB51:    t16 = ((char*)((ng1)));
    goto LAB52;

LAB53:    t17 = ((char*)((ng4)));
    goto LAB54;

LAB55:    xsi_vlog_unsigned_bit_combine(t14, 2, t16, 2, t17, 2);
    goto LAB59;

LAB57:    memcpy(t14, t16, 8);
    goto LAB59;

LAB60:    *((unsigned int *)t15) = 1;
    goto LAB63;

LAB62:    t11 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB63;

LAB64:    t16 = ((char*)((ng3)));
    goto LAB65;

LAB66:    t17 = ((char*)((ng2)));
    goto LAB67;

LAB68:    xsi_vlog_unsigned_bit_combine(t14, 2, t16, 2, t17, 2);
    goto LAB72;

LAB70:    memcpy(t14, t16, 8);
    goto LAB72;

}

static void Cont_34_1(char *t0)
{
    char t6[8];
    char t22[8];
    char t41[8];
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
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;

LAB0:    t1 = (t0 + 3088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
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
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    t23 = (t0 + 1368U);
    t24 = *((char **)t23);
    memset(t22, 0, 8);
    t23 = (t24 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (~(t25));
    t27 = *((unsigned int *)t24);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB11;

LAB9:    if (*((unsigned int *)t23) == 0)
        goto LAB8;

LAB10:    t30 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t30) = 1;

LAB11:    t31 = (t22 + 4);
    t32 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = (~(t33));
    *((unsigned int *)t22) = t34;
    *((unsigned int *)t31) = 0;
    if (*((unsigned int *)t32) != 0)
        goto LAB13;

LAB12:    t39 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t39 & 1U);
    t40 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t40 & 1U);
    t42 = *((unsigned int *)t6);
    t43 = *((unsigned int *)t22);
    t44 = (t42 & t43);
    *((unsigned int *)t41) = t44;
    t45 = (t6 + 4);
    t46 = (t22 + 4);
    t47 = (t41 + 4);
    t48 = *((unsigned int *)t45);
    t49 = *((unsigned int *)t46);
    t50 = (t48 | t49);
    *((unsigned int *)t47) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB14;

LAB15:
LAB16:    t73 = (t0 + 3504);
    t74 = (t73 + 56U);
    t75 = *((char **)t74);
    t76 = (t75 + 56U);
    t77 = *((char **)t76);
    memset(t77, 0, 8);
    t78 = 1U;
    t79 = t78;
    t80 = (t41 + 4);
    t81 = *((unsigned int *)t41);
    t78 = (t78 & t81);
    t82 = *((unsigned int *)t80);
    t79 = (t79 & t82);
    t83 = (t77 + 4);
    t84 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t84 | t78);
    t85 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t85 | t79);
    xsi_driver_vfirst_trans(t73, 0, 0);
    t86 = (t0 + 3424);
    *((int *)t86) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t22) = 1;
    goto LAB11;

LAB13:    t35 = *((unsigned int *)t22);
    t36 = *((unsigned int *)t32);
    *((unsigned int *)t22) = (t35 | t36);
    t37 = *((unsigned int *)t31);
    t38 = *((unsigned int *)t32);
    *((unsigned int *)t31) = (t37 | t38);
    goto LAB12;

LAB14:    t53 = *((unsigned int *)t41);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t41) = (t53 | t54);
    t55 = (t6 + 4);
    t56 = (t22 + 4);
    t57 = *((unsigned int *)t6);
    t58 = (~(t57));
    t59 = *((unsigned int *)t55);
    t60 = (~(t59));
    t61 = *((unsigned int *)t22);
    t62 = (~(t61));
    t63 = *((unsigned int *)t56);
    t64 = (~(t63));
    t65 = (t58 & t60);
    t66 = (t62 & t64);
    t67 = (~(t65));
    t68 = (~(t66));
    t69 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t69 & t67);
    t70 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t70 & t68);
    t71 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t71 & t67);
    t72 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t72 & t68);
    goto LAB16;

}


extern void work_m_17921597861402521493_2843132174_init()
{
	static char *pe[] = {(void *)Always_17_0,(void *)Cont_34_1};
	xsi_register_didat("work_m_17921597861402521493_2843132174", "isim/tb_dist_isim_beh.exe.sim/work/m_17921597861402521493_2843132174.didat");
	xsi_register_executes(pe);
}
