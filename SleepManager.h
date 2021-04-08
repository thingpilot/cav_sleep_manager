/**
  * @file    SleepManager.h
  * @version 0.1.0
  * @author  
  * @brief   Header file of the sleep manager for nrf52. This will determine when a
  *          device can go to sleep and handle all of the low-level configuration to achieve this
  */

/** Define to prevent recursive inclusion
 */
#pragma once

/** Includes 
 */
#include <mbed.h>
//#include "rtc_api_hal.h"

/** Base class for the sleep manager
 */
class Sleep_Manager 
{
    public:

        /** Enumerated list of possible wakeup trigger sources
         */
        enum class WakeupType_t
        {
            WAKEUP_RESET    = 0,
            WAKEUP_TIMER    = 1,
            WAKEUP_PIN      = 2,
            WAKEUP_SOFTWARE = 3,
            WAKEUP_LOWPOWER = 4,
            WAKEUP_UNKNOWN  = 5
        };

        /** Constructor for the sleep manager
         */
        Sleep_Manager();

        /** Destructor for the sleep manager
         */
        ~Sleep_Manager();

   

    private:

 
};