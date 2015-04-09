/*
 * This file is part of Neon Drivers Example.
 *
 * Basic GPIO Driver example.
 */
/*=========================================================  INCLUDE FILES  ==*/

#include "neon_eds.h"
#include "bsp.h"

/*=========================================================  LOCAL MACRO's  ==*/
/*======================================================  LOCAL DATA TYPES  ==*/
/*=============================================  LOCAL FUNCTION PROTOTYPES  ==*/
/*=======================================================  LOCAL VARIABLES  ==*/
/*======================================================  GLOBAL VARIABLES  ==*/
/*============================================  LOCAL FUNCTION DEFINITIONS  ==*/
/*===========================================  GLOBAL FUNCTION DEFINITIONS  ==*/


int main(void)
{
    bsp_init();


    return (0);
}



PORT_C_NORETURN
void hook_at_assert(
    const struct ncomponent_info * component_info,
    const char *                fn,
    uint32_t                    line,
    const char *                expr,
    const char *                msg)
{
    (void)component_info;
    (void)fn;
    (void)line;
    (void)expr;
    (void)msg;

    for (;;);
}

/*================================*//** @cond *//*==  CONFIGURATION ERRORS  ==*/
/** @endcond *//***************************************************************
 * END of main.c
 ******************************************************************************/
