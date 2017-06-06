	.file	"selectq.c"
	.text
	.globl	swap
	.type	swap, @function
swap:
.LFB0:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$16, %esp
	movl	8(%ebp), %eax
	movl	(%eax), %eax
	movl	%eax, -4(%ebp)
	movl	12(%ebp), %eax
	movl	(%eax), %edx
	movl	8(%ebp), %eax
	movl	%edx, (%eax)
	movl	12(%ebp), %eax
	movl	-4(%ebp), %edx
	movl	%edx, (%eax)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	swap, .-swap
	.section	.rodata
.LC0:
	.string	"%d "
	.text
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	leal	4(%esp), %ecx
	.cfi_def_cfa 1, 0
	andl	$-16, %esp
	pushl	-4(%ecx)
	pushl	%ebp
	.cfi_escape 0x10,0x5,0x2,0x75,0
	movl	%esp, %ebp
	pushl	%ecx
	.cfi_escape 0xf,0x3,0x75,0x7c,0x6
	subl	$68, %esp
	movl	%gs:20, %eax
	movl	%eax, -12(%ebp)
	xorl	%eax, %eax
	movl	$9, -52(%ebp)
	movl	$8, -48(%ebp)
	movl	$34, -44(%ebp)
	movl	$12, -40(%ebp)
	movl	$23, -36(%ebp)
	movl	$56, -32(%ebp)
	movl	$78, -28(%ebp)
	movl	$67, -24(%ebp)
	movl	$45, -20(%ebp)
	movl	$12, -16(%ebp)
	movl	$10, -56(%ebp)
	movl	$0, -68(%ebp)
	jmp	.L3
.L7:
	movl	$0, -64(%ebp)
	jmp	.L4
.L6:
	movl	-68(%ebp), %eax
	movl	-52(%ebp,%eax,4), %edx
	movl	-64(%ebp), %eax
	movl	-52(%ebp,%eax,4), %eax
	cmpl	%eax, %edx
	jle	.L5
	leal	-52(%ebp), %eax
	movl	-64(%ebp), %edx
	sall	$2, %edx
	addl	%eax, %edx
	leal	-52(%ebp), %eax
	movl	-68(%ebp), %ecx
	sall	$2, %ecx
	addl	%ecx, %eax
	pushl	%edx
	pushl	%eax
	call	swap
	addl	$8, %esp
.L5:
	addl	$1, -64(%ebp)
.L4:
	movl	-64(%ebp), %eax
	cmpl	-56(%ebp), %eax
	jl	.L6
	addl	$1, -68(%ebp)
.L3:
	movl	-68(%ebp), %eax
	cmpl	-56(%ebp), %eax
	jl	.L7
	movl	$0, -60(%ebp)
	jmp	.L8
.L9:
	movl	-60(%ebp), %eax
	movl	-52(%ebp,%eax,4), %eax
	subl	$8, %esp
	pushl	%eax
	pushl	$.LC0
	call	printf
	addl	$16, %esp
	addl	$1, -60(%ebp)
.L8:
	movl	-60(%ebp), %eax
	cmpl	-56(%ebp), %eax
	jl	.L9
	movl	$0, %eax
	movl	-12(%ebp), %ecx
	xorl	%gs:20, %ecx
	je	.L11
	call	__stack_chk_fail
.L11:
	movl	-4(%ebp), %ecx
	.cfi_def_cfa 1, 0
	leave
	.cfi_restore 5
	leal	-4(%ecx), %esp
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.2.1-22ubuntu2) 5.2.1 20151010"
	.section	.note.GNU-stack,"",@progbits
