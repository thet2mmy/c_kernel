#pragma once
#define BLACK_TXT 0x00 		/* black text */
#define BLUE_TXT 0x01  		/* blue text */
#define GREEN_TXT 0x02 		/* green text */
#define CYAN_TXT 0x03  		/* cyan text */
#define RED_TXT 0x04   		/* red text */
#define MAGENTA_TXT 0x05	/* magenta text */
#define BROWN_TXT 0x06		/* brown text */
#define WHITE_TXT 0x07 		/* light gray */

#define HI_GRAY_TXT 0x07	/* light gray text */
#define DARK_GRAY_TXT 0x08	/* dark gray text */
#define HI_BLUE_TXT 0x09 	/* light blue text */
#define HI_GREEN_TXT 0x0A  	/* light green text */
#define HI_CYAN_TXT 0x0B	/* light cyan text */
#define HI_RED_TXT 0x0C		/* light red text */
#define HI_MAGENTA_TXT 0x0D	/* light magenta text */
#define HI_YELLOW_TXT 0x0E 	/* yellow text */
#define HI_WHITE_TXT 0x0F	/* bright white text */

enum vga_color {
    COLOR_BLACK = BLACK_TXT,
    COLOR_BLUE = BLUE_TXT,
    COLOR_GREEN = GREEN_TXT,
    COLOR_CYAN = CYAN_TXT,
    COLOR_RED = RED_TXT,
    COLOR_MAGENTA = MAGENTA_TXT,
    COLOR_BROWN = BROWN_TXT,
    COLOR_LIGHT_GREY = WHITE_TXT,
    COLOR_DARK_GREY = DARK_GRAY_TXT,
    COLOR_LIGHT_BLUE = HI_BLUE_TXT,
    COLOR_LIGHT_GREEN = HI_GREEN_TXT,
    COLOR_LIGHT_CYAN = HI_CYAN_TXT,
    COLOR_LIGHT_RED = HI_RED_TXT,
    COLOR_LIGHT_MAGENTA = HI_MAGENTA_TXT,
    COLOR_LIGHT_BROWN = HI_YELLOW_TXT,
    COLOR_WHITE = HI_WHITE_TXT,
};

int make_color(enum vga_color fg, enum vga_color bg) {
    return fg | bg << 4;
}


