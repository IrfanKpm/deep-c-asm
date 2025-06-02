[BITS 16]          ; Tell NASM to assemble 16-bit code (real mode instructions)
[ORG 0x7C00]       ; Tell NASM the code will be loaded at memory address 0x7C00

section .text      ; Define the code section (optional but good practice)
global _start      ; Make the _start label visible to the linker (or external tools)

_start:
   cli             ; Disable interrupts
   hlt             ; Halt CPU until next interrupt (won't wake here since interrupts disabled)
   
   times 510 - ($ - $$) db 0   ; Fill the rest of the 512-byte sector with zeros
   dw 0x55AA                  ; Boot signature required by BIOS to recognize bootable device
