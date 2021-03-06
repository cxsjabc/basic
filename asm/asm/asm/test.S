; Hello World in assembly for mac
; nasm -f macho test.S
; ld -e _start -o test test.o       // this is for xcode 8.3.3 10.13
; ld -e _main -o test test.o -lSystem -no_pie -macosx_version_min 10.12  // this is for xcode 10.1 mac 10.13.6

; the real test file
%include "/Users/xichen/codes/basic/asm/asm/asm/test.inc"
%include "/Users/xichen/codes/basic/asm/asm/asm/basic.inc"

section     .text
 global _main                       ;must be declared for linker (ld)

_syscall:           
     int     0x80            ;system call
     ret

_main:                         ;tell linker entry point

; call test file func
     call    test_entry
     push    dword len       ;message length
     push    dword msg       ;message to write
     push    dword 1         ;file descriptor (stdout)
     mov     eax,0x4         ;system call number (sys_write)
     call    _syscall        ;call kernel
 
                             ;the alternate way to call kernel:
                             ;push   eax
                             ;call   7:0
 
     add     esp,12          ;clean stack (3 arguments * 4)
 
     push    dword 0         ;exit code
     mov     eax,0x1         ;system call number (sys_exit)
     call    _syscall        ;call kernel
 
                             ;we do not return from sys_exit,
                             ;there's no need to clean stack
section .data
 
msg     db      "Hello, catty!",0xa     ;our dear string
len     equ     $ - msg                 ;length of our dear string
