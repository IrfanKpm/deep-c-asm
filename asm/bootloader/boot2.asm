[BITS 16]
[ORG 0x7C00]

start:
    cli
    xor ax, ax
    mov ds, ax
    mov es, ax
    mov ss, ax
    mov sp, 0x7C00

    mov si, msg

print_loop:
    lodsb
    or al, al
    jz halt
    mov ah, 0x0E
    int 0x10
    jmp print_loop

halt:
    hlt

msg db "OS BOOTED!", 0xD, 0xA, 0

times 510 - ($ - $$) db 0
dw 0xAA55
