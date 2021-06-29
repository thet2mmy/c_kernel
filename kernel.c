/*
 *
 * tommy's c kernel 0.2.0
 * 
 */

#include "klib.h"
#include "colors.h"

void k_main() 
{
	k_clear_screen();
	k_printf("Hello, world! Welcome to my kernel.", 0, GREEN_TXT);
};
