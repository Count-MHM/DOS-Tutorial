/* Count_MHM
 * 2023/07/18
 * 
 */
#include <stdint.h>
#include <stdio.h>
#include <i86.h>

#define VGA_MODE 0x13

void SetVideoMode(uint8_t mode)
{
    REGS regs;
    // We want to call function 0x00
    regs.h.ah = 0x00;
    regs.h.al = mode;
    // regs.w.ax = mode;

    // Call the BIOS interrupt
    int86(0x10, &regs, &regs);
}

uint8_t GetVideoMode()
{
    REGS regs;
    // We want to call function 0x0F
    regs.h.ah = 0x0F;

    // Call the BIOS interrupt
    int86(0x10, &regs, &regs);

    // Current video mode is placed in the al register
    return regs.h.al;
}

int main()
{
	uint8_t mode = GetVideoMode();
	printf("Current video mode is: 0x%X\n", mode);
	getchar();

	SetVideoMode(VGA_MODE);
	printf("VGA!\n");
	getchar();
	
	SetVideoMode(mode);
	printf("Returned back to the default video mode\n");
	getchar();
	return 0;
}
