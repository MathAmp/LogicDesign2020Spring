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
    work_m_06693989146673355124_0590668275_init();
    work_m_04877670944238909046_4092878066_init();
    work_m_03765659002033127943_1409071103_init();
    work_m_05191449899640451568_1478846427_init();
    work_m_15635460600176559601_1063587204_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_15635460600176559601_1063587204");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
