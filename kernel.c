/*
 *
 * tommy's c kernel 0.2.0
 * 
 */

#include "klib.h"
#include "colors.h"
#include "io.h"

void k_main() 
{
	k_clear_screen();

	int yellow_on_blue = make_color(BLUE_TXT, HI_YELLOW_TXT);

	k_printf("K: Tommy's C kernel", 0, yellow_on_blue);
	k_printf("K: Kernel booted successfully!", 1, yellow_on_blue);
	k_printf(".....", 2, yellow_on_blue);
	
	unsigned char ps2_status;
	for(;;) {
		ps2_status = k_inb(0x64);
		ps2_status = k_inb(0x60);
		k_printf(:browse confirm wa
				ps2_status, 8, yellow_on_blue);
	}
	k_printf("K: Hanging up, end of k_main()", 3, yellow_on_blue);
};
