	.file	"ass6_20CS10007_20CS10060_test6.c"

	.section	.rodata
.LC0:
	.string	"\nTest file #6\n"
.LC1:
	.string	"\n> op passed"
.LC2:
	.string	"\n> op failed"
.LC3:
	.string	"\n< op passed"
.LC4:
	.string	"\n< op failed"
.LC5:
	.string	"\n>= op passed"
.LC6:
	.string	"\n> op failed"
.LC7:
	.string	"\n<= op passed"
.LC8:
	.string	"\n< op failed"
.LC9:
	.string	"\n== op passed"
.LC10:
	.string	"\n== op failed"
.LC11:
	.string	"\n!= op passed"
.LC12:
	.string	"\n!= op failed"
.LC13:
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
	subq $188, %rsp
	movq $.LC0, -108(%rbp)
	movq -108(%rbp), %rdi
	call printStr
	movl %eax, -92(%rbp)
	movl $1, -140(%rbp)
	movl -140(%rbp), %eax
	movl %eax, -72(%rbp)
	movl $0, -80(%rbp)
	movl -80(%rbp), %eax
	movl %eax, -88(%rbp)
	movl -88(%rbp), %eax 
	cmpl %eax , -72(%rbp)
	jg .L1
	jmp .L2
.L1:
	movq $.LC1, -68(%rbp)
	movq -68(%rbp), %rdi
	call printStr
	movl %eax, -76(%rbp)
	jmp .L3
.L2:
	movq $.LC2, -48(%rbp)
	movq -48(%rbp), %rdi
	call printStr
	movl %eax, -28(%rbp)
.L3:
	movl -72(%rbp), %eax 
	cmpl %eax , -88(%rbp)
	jl .L4
	jmp .L5
.L4:
	movq $.LC3, -24(%rbp)
	movq -24(%rbp), %rdi
	call printStr
	movl %eax, -40(%rbp)
	jmp .L6
.L5:
	movq $.LC4, -36(%rbp)
	movq -36(%rbp), %rdi
	call printStr
	movl %eax, -112(%rbp)
.L6:
	movl -72(%rbp), %eax 
	cmpl %eax , -72(%rbp)
	jge .L7
	jmp .L8
.L7:
	movl -88(%rbp), %eax 
	cmpl %eax , -72(%rbp)
	jge .L9
	jmp .L8
.L9:
	movq $.LC5, -56(%rbp)
	movq -56(%rbp), %rdi
	call printStr
	movl %eax, -128(%rbp)
	jmp .L10
.L8:
	movq $.LC6, -100(%rbp)
	movq -100(%rbp), %rdi
	call printStr
	movl %eax, -60(%rbp)
.L10:
	movl -72(%rbp), %eax 
	cmpl %eax , -88(%rbp)
	jle .L11
	jmp .L12
.L11:
	movl -88(%rbp), %eax 
	cmpl %eax , -88(%rbp)
	jle .L13
	jmp .L12
.L13:
	movq $.LC7, -136(%rbp)
	movq -136(%rbp), %rdi
	call printStr
	movl %eax, -148(%rbp)
	jmp .L14
.L12:
	movq $.LC8, -164(%rbp)
	movq -164(%rbp), %rdi
	call printStr
	movl %eax, -180(%rbp)
.L14:
	movl -72(%rbp), %eax 
	cmpl %eax , -72(%rbp)
	je .L15
	jmp .L16
.L15:
	movq $.LC9, -156(%rbp)
	movq -156(%rbp), %rdi
	call printStr
	movl %eax, -168(%rbp)
	jmp .L17
.L16:
	movq $.LC10, -176(%rbp)
	movq -176(%rbp), %rdi
	call printStr
	movl %eax, -124(%rbp)
.L17:
	movl -88(%rbp), %eax 
	cmpl %eax , -72(%rbp)
	jne .L18
	jmp .L19
.L18:
	movq $.LC11, -188(%rbp)
	movq -188(%rbp), %rdi
	call printStr
	movl %eax, -144(%rbp)
	jmp .L20
.L19:
	movq $.LC12, -16(%rbp)
	movq -16(%rbp), %rdi
	call printStr
	movl %eax, -8(%rbp)
.L20:
	movq $.LC13, -120(%rbp)
	movq -120(%rbp), %rdi
	call printStr
	movl %eax, -4(%rbp)
	movl $0, -84(%rbp)
	movl -84(%rbp), %eax
.LFE0:
	movq %rbp, %rsp
	popq %rbp
	.cfi_def_cfa 7, 8
	ret 
	.cfi_endproc 
	.size main, .-main
