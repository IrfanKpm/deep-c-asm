section .bss
  sum resb 1


section .data
  x db 5
  y db 2
  msg db "sum of x and y is : "
  len equ $-msg
  
  
section .text
   global _start

_start:
   mov al,[x]
   mov bl,[y]
   add al,bl
   add al,'0'
   mov [sum],al
   
   mov eax,4
   mov ebx,1
   mov ecx,msg
   mov edx,len
   int 0x80
   
   mov eax,4
   mov ebx,1
   mov ecx,sum
   mov edx,1
   int 0x80
   
   mov eax,1
   xor ebx,ebx
   int 0x80
