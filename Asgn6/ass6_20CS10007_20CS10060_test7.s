	.file	"ass6_20CS10007_20CS10060_test7.c"

	.section	.rodata
.LC0:
	.string	"\nTest file #7\n"
.LC1:
	.string	"\nFailed\n"
.LC2:
	.string	"\nFailed\n"
.LC3:
	.string	"\nFailed\n"
.LC4:
	.string	"\nReached correct point\n"
.LC5:
	.string	"\nFailed\n"
.LC6:
	.string	"\nFailed\n"
.LC7:
	.string	"\nFailed\n"
.LC8:
	.string	"Passed\n"
	.text
	.globl main
	.type main, @function
main:
.LFB0:
	.cfi_startproc 
	pushq %rbp
	.cfi_def_cfa_offset 16 
	.cfi_offset 6, -16 
	movq %rsp, %rbp
	.cfi_def_cfa_register 6 
	subq $172, %rsp
	movq $.LC0, -96(%rbp)
	movq -96(%rbp), %rdi
	call printStr
	movl %eax, -80(%rbp)
	movl $0, -132(%rbp)
	movl -132(%rbp), %eax
	movl %eax, -120(%rbp)
	movl $1, -56(%rbp)
	movl -56(%rbp), %eax
	movl %eax, -48(%rbp)
	movl $0, -44(%rbp)
	movl -44(%rbp), %eax 
	cmpl %eax , -120(%rbp)
	je .L1
	jmp .L2
.L1:
	movl $1, -52(%rbp)
	movl -52(%rbp), %eax 
	cmpl %eax , -120(%rbp)
	je .L3
	jmp .L4
.L3:
	movq $.LC1, -68(%rbp)
	movq -68(%rbp), %rdi
	call printStr
	movl %eax, -32(%rbp)
	movl $0, -28(%rbp)
	movl -28(%rbp), %eax
	jmp .LFE0
	jmp .L5
.L4:
	movl $0, -60(%rbp)
	movl -60(%rbp), %eax 
	cmpl %eax , -48(%rbp)
	je .L6
	jmp .L7
.L6:
	movq $.LC2, -40(%rbp)
	movq -40(%rbp), %rdi
	call printStr
	movl %eax, -100(%rbp)
	movl $0, -72(%rbp)
	movl -72(%rbp), %eax
	jmp .LFE0
	jmp .L5
.L7:
	movl -48(%rbp), %eax 
	cmpl %eax , -120(%rbp)
	jl .L8
	jmp .L9
.L8:
	movl $0, -124(%rbp)
	movl -124(%rbp), %eax 
	cmpl %eax , -120(%rbp)
	jne .L10
	jmp .L11
.L10:
	movq $.LC3, -88(%rbp)
	movq -88(%rbp), %rdi
	call printStr
	movl %eax, -76(%rbp)
	movl $0, -128(%rbp)
	movl -128(%rbp), %eax
	jmp .LFE0
	jmp .L5
.L11:
	movl $1, -140(%rbp)
	movl -140(%rbp), %eax 
	cmpl %eax , -48(%rbp)
	je .L12
	jmp .L13
.L12:
	movq $.LC4, -160(%rbp)
	movq -160(%rbp), %rdi
	call printStr
	movl %eax, -152(%rbp)
	jmp .L5
.L13:
	movq $.LC5, -168(%rbp)
	movq -168(%rbp), %rdi
	call printStr
	movl %eax, -144(%rbp)
	movl $0, -148(%rbp)
	movl -148(%rbp), %eax
	jmp .LFE0
	jmp .L5
.L9:
	movq $.LC6, -112(%rbp)
	movq -112(%rbp), %rdi
	call printStr
	movl %eax, -172(%rbp)
	movl $0, -136(%rbp)
	movl -136(%rbp), %eax
	jmp .LFE0
	jmp .L5
.L2:
	movq $.LC7, -24(%rbp)
	movq -24(%rbp), %rdi
	call printStr
	movl %eax, -16(%rbp)
	movl $0, -104(%rbp)
	movl -104(%rbp), %eax
	jmp .LFE0
.L5:
	movq $.LC8, -12(%rbp)
	movq -12(%rbp), %rdi
	call printStr
	movl %eax, -4(%rbp)
	movl $0, -116(%rbp)
	movl -116(%rbp), %eax
.LFE0:
	movq %rbp, %rsp
	popq %rbp
	.cfi_def_cfa 7, 8
	ret 
	.cfi_endproc 
	.size main, .-main
