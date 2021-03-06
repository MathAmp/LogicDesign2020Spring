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
    work_m_14220053135729120782_2381739659_init();
    work_m_04421344080975495337_3383896982_init();
    work_m_04337298096823490700_0655898636_init();
    work_m_00621839779777308096_3141197581_init();
    work_m_05486678066085089159_3866583278_init();
    work_m_02188616848282628769_2725559894_init();
    work_m_02180396551462775772_1854548841_init();
    work_m_06747775943334478052_3461035722_init();
    work_m_12368783633373842654_1200043877_init();
    work_m_14047829628387600983_0118230654_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_14047829628387600983_0118230654");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
