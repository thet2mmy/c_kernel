#include "colors.h"

/* k_printf : the message and the line # */
unsigned int k_printf(char *message, unsigned int line, int color)
{
	char *vidmem = (char *) 0xb8000;
	unsigned int i=0;

	i=(line*80*2);

	while(*message!=0)
	{
		if(*message=='\n') // check for a new line
		{
			line++;
			i=(line*80*2);
			*message++;
		} else {
			vidmem[i]=*message;
			*message++;
			i++;
			vidmem[i]=color;
			i++;
		};
	};

	return(1);
}

/* k_clear_screen : to clear the entire text screen */
void k_clear_screen()
{
	char *vidmem = (char *) 0xb8000;
	unsigned int i=0;
	while(i < (80*25*2))
	{
		vidmem[i]=' ';
		i++;
		vidmem[i]=WHITE_TXT;
		i++;
	};
};

/* strlen : a bad, no size_t implementation of strlen() */
int strlen(const char *str) {
	int ret = 0;
	while ( str[ret] != 0 )
        	ret++;
    	return ret;
}
