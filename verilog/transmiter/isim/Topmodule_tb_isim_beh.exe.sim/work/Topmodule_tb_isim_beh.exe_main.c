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
    work_m_00000000003143273470_0377897103_init();
    work_m_00000000004058850230_3836326740_init();
    work_m_00000000000251888721_4176438845_init();
    work_m_00000000003521921589_4251652033_init();
    work_m_00000000004272601888_3534150228_init();
    work_m_00000000002985471261_0257832482_init();
    work_m_00000000001892455167_2925458049_init();
    work_m_00000000003407701624_1356243842_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003407701624_1356243842");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
