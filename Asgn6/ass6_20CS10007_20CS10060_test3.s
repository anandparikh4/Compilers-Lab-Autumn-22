	.file	"ass6_20CS10007_20CS10060_test3.c"

	.section	.rodata
.LC0:
	.string	"\nTest file #3\n"
.LC1:
	.string	"\na = "
.LC2:
	.string	"\nb = "
.LC3:
	.string	"\nc = "
.LC4:
	.string	"\nx1 = "
.LC5:
	.string	"\nx2 = "
.LC6:
	.string	"\nx3 = "
.LC7:
	.string	"\nx4 = "
.LC8:
	.string	"\nx5 = "
.LC9:
	.string	"\nx6 = "
.LC10:
	.string	"\ny1 = "
.LC11:
	.string	"\ny2 = "
.LC12:
	.string	"\ny3 = "
.LC13:
	.string	"\ny4 = "
.LC14:
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
	subq $424, %rsp
	movq $.LC0, -136(%rbp)
	movq -136(%rbp), %rdi
	call printStr
	movl %eax, -216(%rbp)
	movl $2, -280(%rbp)
	movl -280(%rbp), %eax
	movl %eax, -152(%rbp)
	movl $36, -304(%rbp)
	movl -304(%rbp), %eax
	movl %eax, -292(%rbp)
	movl $5, -312(%rbp)
	movl -312(%rbp), %eax
	movl %eax, -308(%rbp)
	movl $3, -300(%rbp)
	movl -300(%rbp), %eax
	movl %eax, -152(%rbp)
	movl -152(%rbp), %eax
	addl -292(%rbp), %eax
	movl %eax, -272(%rbp)
	movl -272(%rbp), %eax
	movl %eax, -232(%rbp)
	movl -292(%rbp), %eax
	subl -308(%rbp), %eax
	movl %eax, -204(%rbp)
	movl -204(%rbp), %eax
	movl %eax, -228(%rbp)
	movl -292(%rbp), %eax
	cdq 
	idivl -308(%rbp)
	movl %eax, -276(%rbp)
	movl -276(%rbp), %eax
	movl %eax, -196(%rbp)
	movl -152(%rbp), %eax
	imull -308(%rbp), %eax
	movl %eax, -264(%rbp)
	movl -264(%rbp), %eax
	movl %eax, -184(%rbp)
	movl -152(%rbp), %eax
	movl %eax, -268(%rbp)
	decl -152(%rbp)
	movl -268(%rbp), %eax
	movl %eax, -180(%rbp)
	incl -308(%rbp)
	movl -308(%rbp), %eax
	movl %eax, -244(%rbp)
	movl -308(%rbp), %eax
	movl %eax, -140(%rbp)
	decl -308(%rbp)
	incl -152(%rbp)
	movl -140(%rbp), %eax
	addl -152(%rbp), %eax
	movl %eax, -260(%rbp)
	movl -260(%rbp), %eax
	movl %eax, -144(%rbp)
	movl -152(%rbp), %eax
	negl %eax
	movl %eax, -148(%rbp)
	movl -148(%rbp), %eax
	addl -292(%rbp), %eax
	movl %eax, -212(%rbp)
	movl -212(%rbp), %eax
	subl -308(%rbp), %eax
	movl %eax, -248(%rbp)
	movl -248(%rbp), %eax
	cdq 
	idivl -232(%rbp)
	movl %edx, -220(%rbp)
	movl -220(%rbp), %eax
	movl %eax, -124(%rbp)
	movl -152(%rbp), %eax
	cdq 
	idivl -308(%rbp)
	movl %eax, -192(%rbp)
	movl $52, -332(%rbp)
	movl -192(%rbp), %eax
	subl -332(%rbp), %eax
	movl %eax, -324(%rbp)
	movl $72, -320(%rbp)
	movl -320(%rbp), %eax
	cdq 
	idivl -292(%rbp)
	movl %eax, -328(%rbp)
	movl -324(%rbp), %eax
	addl -328(%rbp), %eax
	movl %eax, -336(%rbp)
	movl $36, -340(%rbp)
	movl -152(%rbp), %eax
	imull -152(%rbp), %eax
	movl %eax, -172(%rbp)
	movl -292(%rbp), %eax
	subl -172(%rbp), %eax
	movl %eax, -288(%rbp)
	movl -340(%rbp), %eax
	cdq 
	idivl -288(%rbp)
	movl %edx, -348(%rbp)
	movl -336(%rbp), %eax
	addl -348(%rbp), %eax
	movl %eax, -360(%rbp)
	movl -360(%rbp), %eax
	movl %eax, -316(%rbp)
	movl -152(%rbp), %eax
	imull -152(%rbp), %eax
	movl %eax, -344(%rbp)
	movl -144(%rbp), %eax
	subl -228(%rbp), %eax
	movl %eax, -376(%rbp)
	movl -184(%rbp), %eax
	subl -308(%rbp), %eax
	movl %eax, -384(%rbp)
	movl -376(%rbp), %eax
	imull -384(%rbp), %eax
	movl %eax, -160(%rbp)
	movl -344(%rbp), %eax
	addl -160(%rbp), %eax
	movl %eax, -368(%rbp)
	movl -308(%rbp), %eax
	subl -292(%rbp), %eax
	movl %eax, -404(%rbp)
	movl -196(%rbp), %eax
	cdq 
	idivl -404(%rbp)
	movl %eax, -388(%rbp)
	movl -368(%rbp), %eax
	addl -388(%rbp), %eax
	movl %eax, -364(%rbp)
	movl -364(%rbp), %eax
	movl %eax, -372(%rbp)
	movq $.LC1, -396(%rbp)
	movq -396(%rbp), %rdi
	call printStr
	movl %eax, -296(%rbp)
	movl -152(%rbp), %edi
	call printInt
	movl %eax, -408(%rbp)
	movq $.LC2, -416(%rbp)
	movq -416(%rbp), %rdi
	call printStr
	movl %eax, -200(%rbp)
	movl -292(%rbp), %edi
	call printInt
	movl %eax, -224(%rbp)
	movq $.LC3, -168(%rbp)
	movq -168(%rbp), %rdi
	call printStr
	movl %eax, -420(%rbp)
	movl -308(%rbp), %edi
	call printInt
	movl %eax, -424(%rbp)
	movq $.LC4, -256(%rbp)
	movq -256(%rbp), %rdi
	call printStr
	movl %eax, -188(%rbp)
	movl -232(%rbp), %edi
	call printInt
	movl %eax, -120(%rbp)
	movq $.LC5, -112(%rbp)
	movq -112(%rbp), %rdi
	call printStr
	movl %eax, -104(%rbp)
	movl -228(%rbp), %edi
	call printInt
	movl %eax, -100(%rbp)
	movq $.LC6, -96(%rbp)
	movq -96(%rbp), %rdi
	call printStr
	movl %eax, -284(%rbp)
	movl -196(%rbp), %edi
	call printInt
	movl %eax, -88(%rbp)
	movq $.LC7, -80(%rbp)
	movq -80(%rbp), %rdi
	call printStr
	movl %eax, -208(%rbp)
	movl -184(%rbp), %edi
	call printInt
	movl %eax, -84(%rbp)
	movq $.LC8, -356(%rbp)
	movq -356(%rbp), %rdi
	call printStr
	movl %eax, -156(%rbp)
	movl -180(%rbp), %edi
	call printInt
	movl %eax, -72(%rbp)
	movq $.LC9, -68(%rbp)
	movq -68(%rbp), %rdi
	call printStr
	movl %eax, -60(%rbp)
	movl -244(%rbp), %edi
	call printInt
	movl %eax, -56(%rbp)
	movq $.LC10, -52(%rbp)
	movq -52(%rbp), %rdi
	call printStr
	movl %eax, -44(%rbp)
	movl -144(%rbp), %edi
	call printInt
	movl %eax, -128(%rbp)
	movq $.LC11, -40(%rbp)
	movq -40(%rbp), %rdi
	call printStr
	movl %eax, -32(%rbp)
	movl -124(%rbp), %edi
	call printInt
	movl %eax, -400(%rbp)
	movq $.LC12, -28(%rbp)
	movq -28(%rbp), %rdi
	call printStr
	movl %eax, -20(%rbp)
	movl -316(%rbp), %edi
	call printInt
	movl %eax, -380(%rbp)
	movq $.LC13, -240(%rbp)
	movq -240(%rbp), %rdi
	call printStr
	movl %eax, -176(%rbp)
	movl -372(%rbp), %edi
	call printInt
	movl %eax, -116(%rbp)
	movq $.LC14, -16(%rbp)
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
