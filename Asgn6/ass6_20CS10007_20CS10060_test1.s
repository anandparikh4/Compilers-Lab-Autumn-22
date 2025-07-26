	.file	"ass6_20CS10007_20CS10060_test1.c"

	.section	.rodata
.LC0:
	.string	"\nReturning integer: "
.LC1:
	.string	"\nReturning character: "
.LC2:
	.string	"\nReturning integer pointer: "
.LC3:
	.string	"\nReturning character pointer: "
.LC4:
	.string	" "
.LC5:
	.string	"\nTest file #1\n"
.LC6:
	.string	" "
.LC7:
	.string	"\nSuccess"
.LC8:
	.string	"\nFailure"
.LC9:
	.string	"\nSuccess"
.LC10:
	.string	"\nFailure"
.LC11:
	.string	"\nSuccess"
.LC12:
	.string	"\nFailure"
.LC13:
	.string	"\nSuccess"
.LC14:
	.string	"\nFailure"
.LC15:
	.string	"\nSuccess"
.LC16:
	.string	"\nFailure"
.LC17:
	.string	"\n"
	.text
	.globl return_int
	.type return_int, @function
return_int:
.LFB0:
	.cfi_startproc 
	pushq %rbp
	.cfi_def_cfa_offset 16 
	.cfi_offset 6, -16 
	movq %rsp, %rbp
	.cfi_def_cfa_register 6 
	subq $20, %rsp
	movl %edi, -4(%rbp)
	movq $.LC0, -20(%rbp)
	movq -20(%rbp), %rdi
	call printStr
	movl %eax, -12(%rbp)
	movl -4(%rbp), %edi
	call printInt
	movl %eax, -8(%rbp)
	movl -4(%rbp), %eax
.LFE0:
	movq %rbp, %rsp
	popq %rbp
	.cfi_def_cfa 7, 8
	ret 
	.cfi_endproc 
	.size return_int, .-return_int
	.text
	.globl return_char
	.type return_char, @function
return_char:
.LFB1:
	.cfi_startproc 
	pushq %rbp
	.cfi_def_cfa_offset 16 
	.cfi_offset 6, -16 
	movq %rsp, %rbp
	.cfi_def_cfa_register 6 
	subq $17, %rsp
	movb %dil, -1(%rbp)
	movq $.LC1, -17(%rbp)
	movq -17(%rbp), %rdi
	call printStr
	movl %eax, -9(%rbp)
	movb -1(%rbp), %dil
	call printInt
	movl %eax, -5(%rbp)
	movb -1(%rbp), %al
.LFE1:
	movq %rbp, %rsp
	popq %rbp
	.cfi_def_cfa 7, 8
	ret 
	.cfi_endproc 
	.size return_char, .-return_char
	.text
	.globl return_int_star
	.type return_int_star, @function
return_int_star:
.LFB2:
	.cfi_startproc 
	pushq %rbp
	.cfi_def_cfa_offset 16 
	.cfi_offset 6, -16 
	movq %rsp, %rbp
	.cfi_def_cfa_register 6 
	subq $28, %rsp
	movq %rdi, -8(%rbp)
	movq $.LC2, -28(%rbp)
	movq -28(%rbp), %rdi
	call printStr
	movl %eax, -16(%rbp)
	movq -8(%rbp), %rax
	movl (%rax), %eax
	movl %eax, -12(%rbp)
	movl -12(%rbp), %edi
	call printInt
	movl %eax, -20(%rbp)
	movq -8(%rbp), %rax
.LFE2:
	movq %rbp, %rsp
	popq %rbp
	.cfi_def_cfa 7, 8
	ret 
	.cfi_endproc 
	.size return_int_star, .-return_int_star
	.text
	.globl return_char_star
	.type return_char_star, @function
return_char_star:
.LFB3:
	.cfi_startproc 
	pushq %rbp
	.cfi_def_cfa_offset 16 
	.cfi_offset 6, -16 
	movq %rsp, %rbp
	.cfi_def_cfa_register 6 
	subq $61, %rsp
	movq %rdi, -8(%rbp)
	movl %esi, -12(%rbp)
	movq $.LC3, -32(%rbp)
	movq -32(%rbp), %rdi
	call printStr
	movl %eax, -36(%rbp)
	movl $0, -52(%rbp)
	movl -52(%rbp), %eax
	movl %eax, -44(%rbp)
	movl $0, -24(%rbp)
	movl -24(%rbp), %eax
	movl %eax, -44(%rbp)
.L7:
	movl -12(%rbp), %eax 
	cmpl %eax , -44(%rbp)
	jl .L5
	jmp .L6
.L8:
	movl -44(%rbp), %eax
	movl %eax, -48(%rbp)
	incl -44(%rbp)
	jmp .L7
.L5:
	movq $.LC4, -60(%rbp)
	movq -60(%rbp), %rdi
	call printStr
	movl %eax, -40(%rbp)
	movl -44(%rbp), %eax
	imull $1, %eax
	movl %eax, -20(%rbp)
	movl -20(%rbp), %eax
	cltq 
	addq -8(%rbp), %rax
	movl (%rax), %eax
	movl %eax, -61(%rbp)
	movb -61(%rbp), %dil
	call printInt
	movl %eax, -16(%rbp)
	jmp .L8
.L6:
	movq -8(%rbp), %rax
.LFE3:
	movq %rbp, %rsp
	popq %rbp
	.cfi_def_cfa 7, 8
	ret 
	.cfi_endproc 
	.size return_char_star, .-return_char_star
	.text
	.globl main
	.type main, @function
main:
.LFB4:
	.cfi_startproc 
	pushq %rbp
	.cfi_def_cfa_offset 16 
	.cfi_offset 6, -16 
	movq %rsp, %rbp
	.cfi_def_cfa_register 6 
	subq $332, %rsp
	movq $.LC5, -106(%rbp)
	movq -106(%rbp), %rdi
	call printStr
	movl %eax, -126(%rbp)
	movl $1, -118(%rbp)
	movl -118(%rbp), %eax
	movl %eax, -166(%rbp)
	leaq -166(%rbp), %rax
	movq %rax, -82(%rbp)
	movq -82(%rbp), %rax
	movq %rax, -174(%rbp)
	movb $120, -239(%rbp)
	movb -239(%rbp), %al
	movb %al, -208(%rbp)
	leaq -208(%rbp), %rax
	movq %rax, -150(%rbp)
	movq -150(%rbp), %rax
	movq %rax, -142(%rbp)
	movl $26, -243(%rbp)
	movl $0, -308(%rbp)
	movl -308(%rbp), %eax
	movl %eax, -182(%rbp)
.L11:
	movl $26, -62(%rbp)
	movl -62(%rbp), %eax 
	cmpl %eax , -182(%rbp)
	jl .L9
	jmp .L10
.L12:
	movl -182(%rbp), %eax
	movl %eax, -66(%rbp)
	incl -182(%rbp)
	jmp .L11
.L9:
	movl -182(%rbp), %eax
	imull $1, %eax
	movl %eax, -50(%rbp)
	movb $97, -203(%rbp)
	movl -50(%rbp), %eax
	cltq 
	movl -203(%rbp), %ebx
	movl %ebx, -238(%rbp, %rax, 1)
	movq $.LC6, -74(%rbp)
	movq -74(%rbp), %rdi
	call printStr
	movl %eax, -46(%rbp)
	movl -182(%rbp), %eax
	imull $1, %eax
	movl %eax, -212(%rbp)
	movl -212(%rbp), %eax
	cltq 
	movl -238(%rbp, %rax, 1), %eax
	movl %eax, -38(%rbp)
	movb -38(%rbp), %dil
	call printInt
	movl %eax, -190(%rbp)
	jmp .L12
.L10:
	movl $0, -37(%rbp)
	movl -37(%rbp), %eax
	movl %eax, -182(%rbp)
	movl -166(%rbp), %edi
	call return_int
	movl %eax, -42(%rbp)
	movl -42(%rbp), %eax
	movl %eax, -186(%rbp)
	movl -166(%rbp), %eax 
	cmpl %eax , -186(%rbp)
	je .L13
	jmp .L14
.L13:
	movq $.LC7, -25(%rbp)
	movq -25(%rbp), %rdi
	call printStr
	movl %eax, -8(%rbp)
	jmp .L15
.L14:
	movq $.LC8, -267(%rbp)
	movq -267(%rbp), %rdi
	call printStr
	movl %eax, -207(%rbp)
.L15:
	movq -174(%rbp), %rdi
	call return_int_star
	movq %rax, -33(%rbp)
	movq -33(%rbp), %rax
	movq %rax, -134(%rbp)
	movq -174(%rbp), %rax 
	cmpq %rax , -134(%rbp)
	je .L16
	jmp .L17
.L16:
	movq $.LC9, -251(%rbp)
	movq -251(%rbp), %rdi
	call printStr
	movl %eax, -255(%rbp)
	jmp .L18
.L17:
	movq $.LC10, -198(%rbp)
	movq -198(%rbp), %rdi
	call printStr
	movl %eax, -259(%rbp)
.L18:
	movb -208(%rbp), %dil
	call return_char
	movb %al, -9(%rbp)
	movb -9(%rbp), %al
	movb %al, -268(%rbp)
	movb -208(%rbp), %al 
	cmpb %al , -268(%rbp)
	je .L19
	jmp .L20
.L19:
	movq $.LC11, -284(%rbp)
	movq -284(%rbp), %rdi
	call printStr
	movl %eax, -122(%rbp)
	jmp .L21
.L20:
	movq $.LC12, -90(%rbp)
	movq -90(%rbp), %rdi
	call printStr
	movl %eax, -154(%rbp)
.L21:
	movl $0, -300(%rbp)
	movl -300(%rbp), %esi
	movq -142(%rbp), %rdi
	call return_char_star
	movq %rax, -98(%rbp)
	movq -98(%rbp), %rax
	movq %rax, -17(%rbp)
	movq -142(%rbp), %rax 
	cmpq %rax , -17(%rbp)
	je .L22
	jmp .L23
.L22:
	movq $.LC13, -296(%rbp)
	movq -296(%rbp), %rdi
	call printStr
	movl %eax, -304(%rbp)
	jmp .L24
.L23:
	movq $.LC14, -316(%rbp)
	movq -316(%rbp), %rdi
	call printStr
	movl %eax, -202(%rbp)
.L24:
	movl $26, -288(%rbp)
	movl -288(%rbp), %esi
	leaq -238(%rbp), %rdi
	call return_char_star
	movq %rax, -276(%rbp)
	movq -276(%rbp), %rax
	movq %rax, -114(%rbp)
.L27:
	movq $.LC15, -162(%rbp)
	movq -162(%rbp), %rdi
	call printStr
	movl %eax, -328(%rbp)
	jmp .L25
.L26:
	movq $.LC16, -58(%rbp)
	movq -58(%rbp), %rdi
	call printStr
	movl %eax, -178(%rbp)
	movq 0, %rax 
	cmpq %rax , -114(%rbp)
	je .L26
	jmp .L27
.L25:
	movq $.LC17, -324(%rbp)
	movq -324(%rbp), %rdi
	call printStr
	movl %eax, -332(%rbp)
	movl $0, -4(%rbp)
	movl -4(%rbp), %eax
.LFE4:
	movq %rbp, %rsp
	popq %rbp
	.cfi_def_cfa 7, 8
	ret 
	.cfi_endproc 
	.size main, .-main
