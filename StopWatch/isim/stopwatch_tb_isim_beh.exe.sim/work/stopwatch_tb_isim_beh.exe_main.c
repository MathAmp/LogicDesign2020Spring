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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_07583681525513489130_2582214024_init();
    work_m_10591627849750973136_3109676615_init();
    work_m_01454417839100144463_3092946469_init();
    work_m_00493865123613892422_2908904151_init();
    work_m_05191449899640451568_3588055212_init();
    work_m_03332004727767874057_2088907945_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_03332004727767874057_2088907945");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
