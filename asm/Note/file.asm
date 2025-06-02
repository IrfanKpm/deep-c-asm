section .data
    filename    db "sample.txt", 0    ; File path (null-terminated)
    msg_read    db "Reading file content:", 10, 0

section .bss
    fd          resd 1                ; File descriptor
    buffer      resb 100              ; Buffer for read data

section .text
    global _start

_start:

    ; Print message before reading
    mov eax, 4          ; sys_write
    mov ebx, 1          ; stdout
    mov ecx, msg_read
    mov edx, 22         ; message length
    int 0x80

    ; Open file (sys_open)
    mov eax, 5          ; sys_open
    mov ebx, filename   ; pointer to filename
    mov ecx, 0          ; O_RDONLY
    int 0x80
    mov [fd], eax       ; save file descriptor

    ; Read file (sys_read)
    mov eax, 3          ; sys_read
    mov ebx, [fd]       ; file descriptor
    mov ecx, buffer     ; buffer
    mov edx, 100        ; number of bytes
    int 0x80

    ; Write to stdout
    mov edx, eax        ; bytes actually read
    mov eax, 4          ; sys_write
    mov ebx, 1          ; stdout
    mov ecx, buffer     ; buffer
    int 0x80

    ; Seek back to beginning (lseek)
    mov eax, 19         ; sys_lseek
    mov ebx, [fd]
    mov ecx, 0          ; offset
    mov edx, 0          ; SEEK_SET
    int 0x80

    ; Close file
    mov eax, 6          ; sys_close
    mov ebx, [fd]
    int 0x80

    ; Exit
    mov eax, 1          ; sys_exit
    xor ebx, ebx
    int 0x80
