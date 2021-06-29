#pragma once

unsigned char k_inb(unsigned short int __port) {
	unsigned char _v;
	__asm__ __volatile__ ("inb %w1,%0":"=a" (_v):"Nd" (__port));
	return _v;
}

void outb(unsigned char __value, unsigned short int __port) {
	__asm__ __volatile__ ("outb %b0,%w1\noutb %%al,$0x80": :"a" (__value),
							"Nd" (__port));
}
