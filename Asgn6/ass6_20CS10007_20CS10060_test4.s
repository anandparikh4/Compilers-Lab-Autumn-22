	.file	"ass6_20CS10007_20CS10060_test4.c"

	.section	.rodata
.LC0:
	.string	"\nTest file #4\n"
.LC1:
	.string	"\nPrinting factorials upto 10:\n"
.LC2:
	.string	","
.LC3:
	.string	"\n"
	.text
	.globl factorial
	.type factorial, @function
factorial:
.LFB0:
	.cfi_startproc 
	pushq %rbp
	.cfi_def_cfa_offset 16 
	.cfi_offset 6, -16 
	movq %rsp, %rbp
	.cfi_def_cfa_register 6 
	subq $64, %rsp
	movq %rdi, -8(%rbp)
	movl %esi, -12(%rbp)
	movl $0, -24(%rbp)
	movl -24(%rbp), %eax
	movl %eax, -20(%rbp)
	movl $0, -36(%rbp)
	movl -36(%rbp), %eax
	imull $4, %eax
	movl %eax, -60(%rbp)
	movl $1, -40(%rbp)
	movl -60(%rbp), %eax
	cltq 
	addq -8(%rbp), %rax
	movl -40(%rbp), %ebx
	movl %ebx, (%rax)
	movl $1, -28(%rbp)
	movl -28(%rbp), %eax
	movl %eax, -20(%rbp)
.L3:
	movl -12(%rbp), %eax 
	cmpl %eax , -20(%rbp)
	jl .L2
	jmp .LFE0
.L4:
	movl -20(%rbp), %eax
	movl %eax, -32(%rbp)
	incl -20(%rbp)
	jmp .L3
.L2:
	movl -20(%rbp), %eax
	imull $4, %eax
	movl %eax, -44(%rbp)
	movl $1, -56(%rbp)
	movl -20(%rbp), %eax
	subl -56(%rbp), %eax
	movl %eax, -64(%rbp)
	movl -64(%rbp), %eax
	imull $4, %eax
	movl %eax, -48(%rbp)
	movl -48(%rbp), %eax
	cltq 
	addq -8(%rbp), %rax
	movl (%rax), %eax
	movl %eax, -52(%rbp)
	movl -52(%rbp), %eax
	imull -20(%rbp), %eax
	movl %eax, -16(%rbp)
	movl -44(%rbp), %eax
	cltq 
	addq -8(%rbp), %rax
	movl -16(%rbp), %ebx
	movl %ebx, (%rax)
	jmp .L4
.LFE0:
	movq %rbp, %rsp
	popq %rbp
	.cfi_def_cfa 7, 8
	ret 
	.cfi_endproc 
	.size factorial, .-factorial
	.text
	.globl main
	.type main, @function
main:
.LFB1:
	.cfi_startproc 
	pushq %rbp
	.cfi_def_cfa_offset 16 
	.cfi_offset 6, -16 
	movq %rsp, %rbp
	.cfi_def_cfa_register 6 
	subq $136, %rsp
	movq $.LC0, -48(%rbp)
	movq -48(%rbp), %rdi
	call printStr
	movl %eax, -36(%rbp)
	movl $11, -40(%rbp)
	movq $.LC1, -56(%rbp)
	movq -56(%rbp), %rdi
	call printStr
	movl %eax, -68(%rbp)
	movl $11, -80(%rbp)
	movl -80(%rbp), %esi
	leaq -128(%rbp), %rdi
	call factorial
	movl $0, -136(%rbp)
	movl -136(%rbp), %eax
	movl %eax, -132(%rbp)
.L7:
	movl $10, -84(%rbp)
	movl -84(%rbp), %eax 
	cmpl %eax , -132(%rbp)
	jle .L5
	jmp .L6
.L9:
	movl -132(%rbp), %eax
	movl %eax, -76(%rbp)
	incl -132(%rbp)
	jmp .L7
.L5:
	movl -132(%rbp), %eax
	imull $4, %eax
	movl %eax, -72(%rbp)
	movl -72(%rbp), %eax
	cltq 
	movl -128(%rbp, %rax, 1), %eax
	movl %eax, -32(%rbp)
	movl -32(%rbp), %edi
	call printInt
	movl %eax, -28(%rbp)
	movl $10, -64(%rbp)
	movl -64(%rbp), %eax 
	cmpl %eax , -132(%rbp)
	jl .L8
	jmp .L9
.L8:
	movq $.LC2, -24(%rbp)
	movq -24(%rbp), %rdi
	call printStr
	movl %eax, -60(%rbp)
	jmp .L9
	jmp .L9
.L6:
	movq $.LC3, -16(%rbp)
	movq -16(%rbp), %rdi
	call printStr
	movl %eax, -8(%rbp)
	movl $0, -4(%rbp)
	movl -4(%rbp), %eax
.LFE1:
	movq %rbp, %rsp
	popq %rbp
	.cfi_def_cfa 7, 8
	ret 
	.cfi_endproc 
	.size main, .-main
