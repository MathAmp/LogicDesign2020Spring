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
    work_u_11582919221061572228_1989334135_init();
    work_u_14709141442251037367_3802370825_init();
    work_m_12309922416095284581_3915930088_init();
    work_m_06264010417661009699_2373630235_init();
    work_m_17995738783976355702_0198606525_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_17995738783976355702_0198606525");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
