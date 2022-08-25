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
    work_m_00000000000992022315_0167052099_init();
    work_m_00000000001592598159_1309794686_init();
    work_m_00000000000663443156_2805871138_init();
    work_m_00000000004286749219_1772439830_init();
    work_m_00000000001357163849_1252677226_init();
    work_m_00000000001713997655_1303914062_init();
    work_m_00000000002286632513_3679994774_init();
    work_m_00000000003407701624_1356243842_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003407701624_1356243842");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
