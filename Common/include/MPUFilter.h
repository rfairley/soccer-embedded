/**
  *****************************************************************************
  * @file    MPUFilter.h
  * @author  Tyler
  * @brief   Header code for IMU filtering.
  *
  * @ingroup  IMU_Filter
  *****************************************************************************
  */

/******************************* SOURCE LICENSE *********************************
Copyright (c) 2018 MicroModeler.

A non-exclusive, nontransferable, perpetual, royalty-free license is granted to the Licensee to
use the following Information for academic, non-profit, or government-sponsored research purposes.
Use of the following Information under this License is restricted to NON-COMMERCIAL PURPOSES ONLY.
Commercial use of the following Information requires a separately executed written license agreement.

This Information is distributed WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

******************************* END OF LICENSE *********************************/
// Link with library: libarm_cortexM4_mathL.a (or equivalent)
// Add CMSIS/Lib/GCC to the library search path
// Add CMSIS/Include to the include search path
// A commercial license for MicroModeler DSP can be obtained at http://www.micromodeler.com/launch.jsp




/******************** Define to prevent recursive inclusion ******************/
#ifndef __MPUFILTER_H__
#define __MPUFILTER_H__




/********************************* Includes **********************************/
#include "SystemConf.h" // __FPU_PRESENT == 1 ==> generate FPU instructions




/***************************** Function prototypes ***************************/
void MPUFilter_InitAllFilters();
void MPUFilter_FilterAngularVelocity();

#endif /* __MPUFILTER_H__ */
