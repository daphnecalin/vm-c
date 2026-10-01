#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>

// Define some additional types to make it clearer what the emulated width of certain CPU registers are.
typedef uint16_t uint12_t;
typedef uint8_t uint4_t;

// Important system registers.
uint12_t pc;  // Program counter
uint8_t sp;   // Expression stack pointer
uint8_t rp;   // Return stack pointer
uint8_t x, y; // RAM address registers
uint4_t TOS;  // Top Of Stack register
uint4_t CCR;  // Condition Code Register
// CCR[3]: Carry/Borrow
// CCR[2]: Unused
// CCR[1]: Branch
// CCR[0]: Interrupt Enable

// System components
uint8_t rom_zeropage[512];  // Contains ISR and special subroutine vectors
uint8_t rom_basebank[2048]; // Always loaded in 0x1FF-0x7FF
uint8_t rom_bank1[2048];    // Banks 1-4 can be swapped in and out of address space 0x800-0xFFF
uint8_t rom_bank2[2048];
uint8_t rom_bank3[2048];
uint8_t rom_bank4[2048]; // Space is reserved at the end of bank 4 for MARC4 self test routines
uint4_t ram[256];

int sys_init(void)
{
    pc = 0;
    sp = 0;
    rp = 0;
    x = 0;
    y = 0;
    TOS = 0;
    CCR = 0;
}

int main(void)
{
    bool running;
    sys_init();
    while (running)
    {
    }
    return 0;
}