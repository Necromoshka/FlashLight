#include "system.h"


/***** MAIN PROGRAM *****/
void main()
{ 
    init();
    
    GPIO = 0b0000;          

    //*** Main loop
    enum {GREEN, BLUE, RED, WHIGHT, YELLOW, LB, MAGENTA, MULT, BLACK} state;
     state = GREEN;              // initial state is green, so
    G_LED = 1; 
     for (;;)
    {
        // wait for button press
        while (BUTTON);
                
        // light next LED in sequence
        LEDS = 0;                   // turn off all LEDs
        
        switch (state)              // next LED depends on currently-lit LED
        {
            case GREEN:                 // if green:
                state = BLUE;         //  next state = yellow
                G_LED = 1;              //  turn on yellow LED     
                break;
                
            case BLUE:                // if yellow:
                state = RED;            //  next state = red
                B_LED = 1;              //  turn on red LED  
                break;
               
            case RED:                   // if red:
                state = WHIGHT;          //  next state = green
                R_LED = 1;              //  turn on green LED
                break;
            case WHIGHT:                   // if red:
                state = YELLOW;          //  next state = green
                G_LED = 1;
                R_LED = 1;    
                B_LED = 1;              
                break;
            case YELLOW:                   // if red:
                state = LB;          //  next state = green
                G_LED = 1;
                R_LED = 1;    
               // B_LED = 0;              //  turn on green LED
                break;
            case LB:                   // if red:
                state = MAGENTA;          //  next state = green
                G_LED = 1;
             //   R_LED = 0;    
                B_LED = 1;              //  turn on green LED
                break;
            case MAGENTA:                   // if red:
                state = MULT;          //  next state = green
                //G_LED = 1;
                R_LED = 1;    
                B_LED = 1;              //  turn on green LED
                break;
            case MULT:                   // if red:
                state = BLACK;          //  next state = green
                //G_LED = 1;
                enum {GREEN, BLUE, RED, WHIGHT, YELLOW, LB, MAGENTA} state_temp;
                for(;;){
                    
                break;    
                }             //  turn on green LED
                break;
            case BLACK:                   // if red:
                state = GREEN;          //  next state = green
                G_LED = 0;
                R_LED = 0;    
                B_LED = 0;              
                break;
        }
        
        // wait for stable button release
        DbnceHi(BUTTON);
    }                               // repeat forever
}
