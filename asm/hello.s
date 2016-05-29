##.align 4, 0x90

add:
  pushq %rbp
  movq  %rsp, %rbp

  movq 16(%rsp), %rax   ## i think it's 8（%rsp), but not right
  movq 24(%rsp), %rbx   ## i think it's 16（%rsp), but not right
  addq %rbx, %rax  

  popq %rbp
  ret

show:
  pushq %rdi
  leaq HELLO(%rip), %rdi
  callq _puts
  popq %rdi
  ret

STR:
   .asciz "hello, xichen"

HELLO:
   .asciz "hello"

.globl _main

_main:
  pushq %rbp
  movq  %rsp, %rbp
  movq  $1, %rax
	rdtsc
  leaq STR(%rip), %rax
  addq $1, %rax

  movq $1, %rcx
  movq $2, %rbx
  cmpq %rcx, %rbx
  movq %rax, %rdi
  callq _puts

  ## movq $65, %rdi
  ## callq _putchar
   
  pushq $1
  pushq $65
  ##movq (%rsp), %rdi
  ##callq _putchar

  callq add
  movq %rax, %rdi
  callq _putchar
  addq  $16, %rsp


  popq %rbp
  ret

  callq show
  leaq GOON(%rip), %rax
  pushq %rax
  jmp  show
  popq %rax
GOON:

  popq %rbp
  ret
