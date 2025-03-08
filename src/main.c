/* **********************************************************************/
/* ***              System and library files included                 ***/
/* **********************************************************************/
/* #include "S32K344.h" */
#include "Clock_Ip.h"
#include "Siul2_Port_Ip.h"
#include "Siul2_Dio_Ip.h"

#include "GDU/GDU.h"
#include "GDU/TI_DRV8000/DRV8000.h"

/* **********************************************************************/
/* ***              Definition of local variables                     ***/
/* **********************************************************************/
volatile int exit_code = 0;

/* **********************************************************************/
/* ***             Declaration of local functions                     ***/
/* **********************************************************************/


/* **********************************************************************/
/* ***             Definition of local functions                      ***/
/* **********************************************************************/



int main(void)
{
	/* clock initialization */
	Clock_Ip_Init(&Clock_Ip_aClockConfig[0]);
	/* SIUL2 pin configuration */
	Siul2_Port_Ip_Init(NUM_OF_CONFIGURED_PINS0, g_pin_mux_InitConfigArr0);

    for(;;)
    {
        if(exit_code != 0)
        {
            break;
        }
    }
    return exit_code;
}

/** @} */
