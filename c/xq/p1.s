	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 13
	.globl	_main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi0:
	.cfi_def_cfa_offset 16
Lcfi1:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi2:
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	leaq	L_.str(%rip), %rax
	leaq	-20(%rbp), %rcx
	leaq	-32(%rbp), %rdx
	movl	$305419896, %r8d        ## imm = 0x12345678
	movl	%r8d, %r9d
	movl	$0, -4(%rbp)
	movl	%edi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movl	$-66052, -20(%rbp)      ## imm = 0xFFFEFDFC
	movq	%r9, -32(%rbp)
	movq	%rax, %rdi
	movq	%rcx, %rsi
	movb	$0, %al
	callq	_printf
	xorl	%r8d, %r8d
	movl	%eax, -36(%rbp)         ## 4-byte Spill
	movl	%r8d, %eax
	addq	$48, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"&i:%p, &pi:%p\n"


.subsections_via_symbols
