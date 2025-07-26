	.file	"ass6_20CS10007_20CS10060_test5.c"

	.section	.rodata
.LC0:
	.string	"\nTest file #5\n"
.LC1:
	.string	" "
.LC2:
	.string	"\n"
.LC3:
	.string	"\nFor loop failed"
.LC4:
	.string	"\nFor loop passed"
.LC5:
	.string	"\nEnter any integer (0 terminates the process): "
.LC6:
	.string	"\nYou entered: "
.LC7:
	.string	"ReadInt failed"
.LC8:
	.string	"\n"
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
	subq $200, %rsp
	movq $.LC0, -116(%rbp)
	movq -116(%rbp), %rdi
	call printStr
	movl %eax, -196(%rbp)
	movl $0, -96(%rbp)
	movl -96(%rbp), %eax
	movl %eax, -104(%rbp)
	movl $0, -72(%rbp)
	movl -72(%rbp), %eax
	movl %eax, -100(%rbp)
.L3:
	movl $10, -80(%rbp)
	movl -80(%rbp), %eax 
	cmpl %eax , -100(%rbp)
	jl .L1
	jmp .L2
.L7:
	movl -100(%rbp), %eax
	movl %eax, -84(%rbp)
	incl -100(%rbp)
	jmp .L3
.L1:
	movl $0, -56(%rbp)
	movl -56(%rbp), %eax
	movl %eax, -76(%rbp)
.L6:
	movl $10, -48(%rbp)
	movl -48(%rbp), %eax 
	cmpl %eax , -76(%rbp)
	jl .L4
	jmp .L5
.L4:
	movl -104(%rbp), %edi
	call printInt
	movl %eax, -44(%rbp)
	movl -104(%rbp), %eax
	movl %eax, -60(%rbp)
	incl -104(%rbp)
	movl -76(%rbp), %eax
	movl %eax, -52(%rbp)
	incl -76(%rbp)
	movq $.LC1, -124(%rbp)
	movq -124(%rbp), %rdi
	call printStr
	movl %eax, -64(%rbp)
	jmp .L6
.L5:
	movq $.LC2, -152(%rbp)
	movq -152(%rbp), %rdi
	call printStr
	movl %eax, -108(%rbp)
	jmp .L7
.L2:
	movl $100, -68(%rbp)
	movl -68(%rbp), %eax 
	cmpl %eax , -104(%rbp)
	jne .L8
	jmp .L9
.L8:
	movq $.LC3, -160(%rbp)
	movq -160(%rbp), %rdi
	call printStr
	movl %eax, -164(%rbp)
	jmp .L10
.L9:
	movq $.LC4, -188(%rbp)
	movq -188(%rbp), %rdi
	call printStr
	movl %eax, -180(%rbp)
.L10:
	movl $0, -192(%rbp)
	movl -192(%rbp), %eax
	movl %eax, -104(%rbp)
.L13:
	movq $.LC5, -172(%rbp)
	movq -172(%rbp), %rdi
	call printStr
	movl %eax, -176(%rbp)
	leaq -200(%rbp), %rax
	movq %rax, -140(%rbp)
	movq -140(%rbp), %rdi
	call readInt
	movl %eax, -40(%rbp)
	movl -40(%rbp), %eax
	movl %eax, -104(%rbp)
	movq $.LC6, -92(%rbp)
	movq -92(%rbp), %rdi
	call printStr
	movl %eax, -36(%rbp)
	movl -104(%rbp), %edi
	call printInt
	movl %eax, -32(%rbp)
	movl $0, -132(%rbp)
	movl -132(%rbp), %eax 
	cmpl %eax , -200(%rbp)
	je .L11
	jmp .L12
.L11:
	movq $.LC7, -28(%rbp)
	movq -28(%rbp), %rdi
	call printStr
	movl %eax, -20(%rbp)
	movl $0, -144(%rbp)
	movl -144(%rbp), %eax
	jmp .LFE0
	jmp .L12
.L12:
	movl $0, -128(%rbp)
	movl -128(%rbp), %eax 
	cmpl %eax , -104(%rbp)
	jne .L13
	jmp .L14
.L14:
	movq $.LC8, -16(%rbp)
	movq -16(%rbp), %rdi
	call printStr
	movl %eax, -8(%rbp)
	movl $0, -4(%rbp)
	movl -4(%rbp), %eax
.LFE0:
	movq %rbp, %rsp
	popq %rbp
	.cfi_def_cfa 7, 8
	ret 
	.cfi_endproc 
	.size main, .-main
