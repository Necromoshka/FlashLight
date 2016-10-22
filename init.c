#include "system.h"

void init(void)
{	
 	OPTION = 0b10000111;
	TRIS = 0b00000000;
	ADCON0 = 0b00000000;
	
}