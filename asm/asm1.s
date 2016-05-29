##.section        __TEXT,__text,regular,pure_instructions
.globl  _main
    _main:                                  ## @main
    ## BB#0:                                ## %entry
            pushq   %rbp
    Ltmp2:
    Ltmp3:
            movq    %rsp, %rbp
    Ltmp4:
            xorl    %edi, %edi
            callq   _time
            leaq    L_.str(%rip), %rdi
            movq    %rax, %rsi
            xorb    %al, %al
            callq   _printf
            xorl    %eax, %eax
            popq    %rbp
            ret

    ##        .section        __TEXT,__cstring,cstring_literals
    L_.str:                                 ## @.str
            .asciz   "Hello, world #%ld!\n"

    ##.subsections_via_symbols
