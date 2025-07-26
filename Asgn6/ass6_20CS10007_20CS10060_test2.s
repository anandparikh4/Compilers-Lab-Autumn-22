	.file	"ass6_20CS10007_20CS10060_test2.c"

	.section	.rodata
.LC0:
	.string	"\nTest file #2\n"
.LC1:
	.string	"\nEnter a positive integer 'n' less than 10: "
.LC2:
	.string	"\nRead Int failed"
.LC3:
	.string	"\nOverflow. Please enter an integer <= 10"
.LC4:
	.string	"!="
.LC5:
	.string	"\n"
	.comm	n,4,4
	.section	.data.rel.local
	.align 8
	.type str, @object
	.size str, 8
str:
	.quad .LC0
	.text
	.globl init
	.type init, @function
init:
.LFB0:
	.cfi_startproc 
	pushq %rbp
	.cfi_def_cfa_offset 16 
	.cfi_offset 6, -16 
	movq %rsp, %rbp
	.cfi_def_cfa_register 6 
	subq $36, %rsp
	movq %rdi, -8(%rbp)
	movl $0, -28(%rbp)
	movl -28(%rbp), %eax
	movl %eax, -36(%rbp)
.L5:
	movl $10, -24(%rbp)
	movl -24(%rbp), %eax 
	cmpl %eax , -36(%rbp)
	jle .L3
	jmp .L4
.L6:
	movl -36(%rbp), %eax
	movl %eax, -20(%rbp)
	incl -36(%rbp)
	jmp .L5
.L3:
	movl -36(%rbp), %eax
	imull $4, %eax
	movl %eax, -32(%rbp)
	movl $1, -16(%rbp)
	movl -16(%rbp), %eax
	negl %eax
	movl %eax, -12(%rbp)
	movl -32(%rbp), %eax
	cltq 
	addq -8(%rbp), %rax
	movl -12(%rbp), %ebx
	movl %ebx, (%rax)
	jmp .L6
.L4:
.LFE0:
	movq %rbp, %rsp
	popq %rbp
	.cfi_def_cfa 7, 8
	ret 
	.cfi_endproc 
	.size init, .-init
	.text
	.globl factorial
	.type factorial, @function
factorial:
.LFB1:
	.cfi_startproc 
	pushq %rbp
	.cfi_def_cfa_offset 16 
	.cfi_offset 6, -16 
	movq %rsp, %rbp
	.cfi_def_cfa_register 6 
	subq $84, %rsp
	movq %rdi, -8(%rbp)
	movl %esi, -12(%rbp)
	movl $0, -64(%rbp)
	movl -64(%rbp), %eax 
	cmpl %eax , -12(%rbp)
	je .L7
	jmp .L8
.L7:
	movl -12(%rbp), %eax
	imull $4, %eax
	movl %eax, -48(%rbp)
	movl $1, -76(%rbp)
	movl -48(%rbp), %eax
	cltq 
	addq -8(%rbp), %rax
	movl -76(%rbp), %ebx
	movl %ebx, (%rax)
	movl -12(%rbp), %eax
	imull $4, %eax
	movl %eax, -68(%rbp)
	movl -68(%rbp), %eax
	cltq 
	addq -8(%rbp), %rax
	movl (%rax), %eax
	movl %eax, -56(%rbp)
	movl -56(%rbp), %eax
	jmp .LFE1
	jmp .L8
.L8:
	movl -12(%rbp), %eax
	imull $4, %eax
	movl %eax, -80(%rbp)
	movl -80(%rbp), %eax
	cltq 
	addq -8(%rbp), %rax
	movl (%rax), %eax
	movl %eax, -72(%rbp)
	movl $1, -44(%rbp)
	movl -44(%rbp), %eax
	negl %eax
	movl %eax, -84(%rbp)
	movl -84(%rbp), %eax 
	cmpl %eax , -72(%rbp)
	jne .L9
	jmp .L10
.L9:
	movl -12(%rbp), %eax
	imull $4, %eax
	movl %eax, -60(%rbp)
	movl -60(%rbp), %eax
	cltq 
	addq -8(%rbp), %rax
	movl (%rax), %eax
	movl %eax, -40(%rbp)
	movl -40(%rbp), %eax
	jmp .LFE1
	jmp .L10
.L10:
	movl -12(%rbp), %eax
	imull $4, %eax
	movl %eax, -36(%rbp)
	movl $1, -24(%rbp)
	movl -12(%rbp), %eax
	subl -24(%rbp), %eax
	movl %eax, -20(%rbp)
	movl -20(%rbp), %esi
	movq -8(%rbp), %rdi
	call factorial
	movl %eax, -32(%rbp)
	movl -12(%rbp), %eax
	imull -32(%rbp), %eax
	movl %eax, -28(%rbp)
	movl -36(%rbp), %eax
	cltq 
	addq -8(%rbp), %rax
	movl -28(%rbp), %ebx
	movl %ebx, (%rax)
	movl -12(%rbp), %eax
	imull $4, %eax
	movl %eax, -52(%rbp)
	movl -52(%rbp), %eax
	cltq 
	addq -8(%rbp), %rax
	movl (%rax), %eax
	movl %eax, -16(%rbp)
	movl -16(%rbp), %eax
.LFE1:
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
.LFB2:
	.cfi_startproc 
	pushq %rbp
	.cfi_def_cfa_offset 16 
	.cfi_offset 6, -16 
	movq %rsp, %rbp
	.cfi_def_cfa_register 6 
	subq $160, %rsp
	movl $11, -152(%rbp)
	leaq -84(%rbp), %rdi
	call init
	movq str, %rdi
	call printStr
	movl %eax, -156(%rbp)
	movq $.LC1, -132(%rbp)
	movq -132(%rbp), %rdi
	call printStr
	movl %eax, -112(%rbp)
	leaq -124(%rbp), %rax
	movq %rax, -120(%rbp)
	movq -120(%rbp), %rdi
	call readInt
	movl %eax, -140(%rbp)
	movl -140(%rbp), %eax
	movl %eax, n
	movl $0, -88(%rbp)
	movl -88(%rbp), %eax 
	cmpl %eax , -124(%rbp)
	je .L11
	jmp .L12
.L11:
	movq $.LC2, -148(%rbp)
	movq -148(%rbp), %rdi
	call printStr
	movl %eax, -160(%rbp)
	movl $0, -32(%rbp)
	movl -32(%rbp), %eax
	jmp .LFE2
	jmp .L13
.L12:
	movl $10, -136(%rbp)
	movl -136(%rbp), %eax 
	cmpl %eax , n
	jg .L14
	jmp .L15
.L15:
	movl $0, -28(%rbp)
	movl -28(%rbp), %eax 
	cmpl %eax , n
	jl .L14
	jmp .L13
.L14:
	movq $.LC3, -24(%rbp)
	movq -24(%rbp), %rdi
	call printStr
	movl %eax, -16(%rbp)
	jmp .L13
.L13:
	movl n, %edi
	call printInt
	movl %eax, -12(%rbp)
	movq $.LC4, -104(%rbp)
	movq -104(%rbp), %rdi
	call printStr
	movl %eax, -8(%rbp)
	movl n, %esi
	leaq -84(%rbp), %rdi
	call factorial
	movl %eax, -96(%rbp)
	movl -96(%rbp), %edi
	call printInt
	movl %eax, -108(%rbp)
	movq $.LC5, -40(%rbp)
	movq -40(%rbp), %rdi
	call printStr
	movl %eax, -4(%rbp)
	movl $0, -92(%rbp)
	movl -92(%rbp), %eax
.LFE2:
	movq %rbp, %rsp
	popq %rbp
	.cfi_def_cfa 7, 8
	ret 
	.cfi_endproc 
	.size main, .-main
