#ifndef _SYSTEM
#define _SYSTEM

//#include <htc.h>
#include <xc.h>
#include <stdint.h>
#define pic10f222
#include "init.h"
#include "user.h"
#include "interups.h"
#include "variables.h"
#include "stdmacros-XC8.h"
//#define BUT GPIObits.GP3
//#define Blue GPIObits.GP2
//#define Red GPIObits.GP0
//#define Green GPIObits.GP1
#pragma config IOSCFS = 4MHZ, MCPU = OFF, WDTE = OFF, CP = OFF, MCLRE = OFF
#define LEDS    GPIO                // all LEDs
// Pin assignments
//#define LEDS    GPIO                // all LEDs
#define R_LED   GPIObits.GP0        // individual LEDs
#define G_LED   GPIObits.GP1
#define B_LED   GPIObits.GP2
#define BUTTON  GPIObits.GP3 
/***** CONSTANTS *****/
#define G_TIME  12              // time (seconds) each colour is turned on for
#define B_TIME   3
#define R_TIME  10
#define FLASH_TIME 1000
#define FRAME_TIME 33

#endif