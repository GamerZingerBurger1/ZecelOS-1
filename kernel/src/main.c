/*
 * main.c - C entry point
 * Author(s) - Kap Petrov, amrix
 */

#include <vga.h>
#include <idt.h>
#include <isr.h>

void CEntry(void) 
{
	InitVga();
	
	InstallIdt();
	InstallIsr();

	PutPixel(LightRed, 10, 10);

	while (1)
		asm volatile("hlt");
}
