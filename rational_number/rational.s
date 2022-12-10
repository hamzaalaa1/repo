	.file	"rational.cpp"
	.text
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.align 2
	.globl	_ZN15Rational_NumberC2Eii
	.type	_ZN15Rational_NumberC2Eii, @function
_ZN15Rational_NumberC2Eii:
.LFB1732:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movl	%edx, -16(%rbp)
	movl	-12(%rbp), %edx
	movq	-8(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_ZN15Rational_Number4setNEi
	movl	-16(%rbp), %edx
	movq	-8(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_ZN15Rational_Number4setDEi
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1732:
	.size	_ZN15Rational_NumberC2Eii, .-_ZN15Rational_NumberC2Eii
	.globl	_ZN15Rational_NumberC1Eii
	.set	_ZN15Rational_NumberC1Eii,_ZN15Rational_NumberC2Eii
	.align 2
	.globl	_ZN15Rational_Number7reducedEii
	.type	_ZN15Rational_Number7reducedEii, @function
_ZN15Rational_Number7reducedEii:
.LFB1734:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movl	%edx, -32(%rbp)
	movl	-28(%rbp), %eax
	cmpl	-32(%rbp), %eax
	jge	.L3
	movl	-32(%rbp), %eax
	cltd
	idivl	-28(%rbp)
	movl	%edx, %eax
	testl	%eax, %eax
	jne	.L4
	movl	-28(%rbp), %eax
	jmp	.L5
.L4:
	movl	-28(%rbp), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, -8(%rbp)
	jmp	.L6
.L8:
	movl	-32(%rbp), %eax
	cltd
	idivl	-8(%rbp)
	movl	%edx, %eax
	testl	%eax, %eax
	jne	.L7
	movl	-28(%rbp), %eax
	cltd
	idivl	-8(%rbp)
	movl	%edx, %eax
	testl	%eax, %eax
	jne	.L7
	movl	-8(%rbp), %eax
	jmp	.L5
.L7:
	subl	$1, -8(%rbp)
.L6:
	cmpl	$0, -8(%rbp)
	jg	.L8
	jmp	.L9
.L3:
	movl	-28(%rbp), %eax
	cmpl	-32(%rbp), %eax
	jle	.L10
	movl	-28(%rbp), %eax
	cltd
	idivl	-32(%rbp)
	movl	%edx, %eax
	testl	%eax, %eax
	jne	.L11
	movl	-32(%rbp), %eax
	jmp	.L5
.L11:
	movl	-32(%rbp), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, -4(%rbp)
	jmp	.L12
.L14:
	movl	-28(%rbp), %eax
	cltd
	idivl	-4(%rbp)
	movl	%edx, %eax
	testl	%eax, %eax
	jne	.L13
	movl	-32(%rbp), %eax
	cltd
	idivl	-4(%rbp)
	movl	%edx, %eax
	testl	%eax, %eax
	jne	.L13
	movl	-4(%rbp), %eax
	jmp	.L5
.L13:
	subl	$1, -4(%rbp)
.L12:
	cmpl	$0, -4(%rbp)
	jg	.L14
	jmp	.L9
.L10:
	movl	-28(%rbp), %eax
	cmpl	-32(%rbp), %eax
	jne	.L9
	movl	-28(%rbp), %eax
	jmp	.L5
.L9:
	movl	$1, %eax
.L5:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1734:
	.size	_ZN15Rational_Number7reducedEii, .-_ZN15Rational_Number7reducedEii
	.globl	_Z3LCMii
	.type	_Z3LCMii, @function
_Z3LCMii:
.LFB1735:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -20(%rbp)
	movl	%esi, -24(%rbp)
	movl	-20(%rbp), %eax
	cmpl	-24(%rbp), %eax
	jle	.L16
	movl	-20(%rbp), %eax
	movl	%eax, -8(%rbp)
.L19:
	movl	-8(%rbp), %eax
	cltd
	idivl	-24(%rbp)
	movl	%edx, %eax
	testl	%eax, %eax
	jne	.L17
	movl	-8(%rbp), %eax
	jmp	.L15
.L17:
	movl	-20(%rbp), %eax
	addl	%eax, -8(%rbp)
	jmp	.L19
.L16:
	movl	-24(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jle	.L20
	movl	-24(%rbp), %eax
	movl	%eax, -4(%rbp)
.L22:
	movl	-4(%rbp), %eax
	cltd
	idivl	-20(%rbp)
	movl	%edx, %eax
	testl	%eax, %eax
	jne	.L21
	movl	-4(%rbp), %eax
	jmp	.L15
.L21:
	movl	-24(%rbp), %eax
	addl	%eax, -4(%rbp)
	jmp	.L22
.L20:
.L15:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1735:
	.size	_Z3LCMii, .-_Z3LCMii
	.align 2
	.globl	_ZN15Rational_Number4getNEv
	.type	_ZN15Rational_Number4getNEv, @function
_ZN15Rational_Number4getNEv:
.LFB1736:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1736:
	.size	_ZN15Rational_Number4getNEv, .-_ZN15Rational_Number4getNEv
	.align 2
	.globl	_ZN15Rational_Number4getDEv
	.type	_ZN15Rational_Number4getDEv, @function
_ZN15Rational_Number4getDEv:
.LFB1737:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	4(%rax), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1737:
	.size	_ZN15Rational_Number4getDEv, .-_ZN15Rational_Number4getDEv
	.align 2
	.globl	_ZN15Rational_Number4setNEi
	.type	_ZN15Rational_Number4setNEi, @function
_ZN15Rational_Number4setNEi:
.LFB1738:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %edx
	movl	%edx, (%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1738:
	.size	_ZN15Rational_Number4setNEi, .-_ZN15Rational_Number4setNEi
	.align 2
	.globl	_ZN15Rational_Number4setDEi
	.type	_ZN15Rational_Number4setDEi, @function
_ZN15Rational_Number4setDEi:
.LFB1739:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %edx
	movl	%edx, 4(%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1739:
	.size	_ZN15Rational_Number4setDEi, .-_ZN15Rational_Number4setDEi
	.align 2
	.globl	_ZN15Rational_Number3addEii
	.type	_ZN15Rational_Number3addEii, @function
_ZN15Rational_Number3addEii:
.LFB1740:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -40(%rbp)
	movl	%esi, -44(%rbp)
	movl	%edx, -48(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN15Rational_Number4getDEv
	cmpl	%eax, -48(%rbp)
	sete	%al
	testb	%al, %al
	je	.L30
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN15Rational_Number4getNEv
	movl	-44(%rbp), %edx
	leal	(%rax,%rdx), %ecx
	movl	-48(%rbp), %edx
	movq	-40(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	_ZN15Rational_Number7reducedEii
	movl	%eax, -4(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN15Rational_Number4getNEv
	movl	-44(%rbp), %edx
	addl	%edx, %eax
	cltd
	idivl	-4(%rbp)
	movl	%eax, %edx
	movq	-40(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_ZN15Rational_Number4setNEi
	movl	-48(%rbp), %eax
	cltd
	idivl	-4(%rbp)
	movl	%eax, %edx
	movq	-40(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_ZN15Rational_Number4setDEi
	jmp	.L32
.L30:
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN15Rational_Number4getNEv
	movl	%eax, -20(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN15Rational_Number4getDEv
	movl	%eax, %edx
	movl	-48(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	_Z3LCMii
	movl	%eax, -16(%rbp)
	movl	-16(%rbp), %eax
	cltd
	idivl	-48(%rbp)
	movl	%eax, -12(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN15Rational_Number4getDEv
	movl	%eax, %ecx
	movl	-16(%rbp), %eax
	cltd
	idivl	%ecx
	movl	%eax, -8(%rbp)
	movl	-44(%rbp), %eax
	imull	-12(%rbp), %eax
	movl	%eax, -44(%rbp)
	movl	-20(%rbp), %eax
	imull	-8(%rbp), %eax
	movl	%eax, -20(%rbp)
	movl	-20(%rbp), %edx
	movl	-44(%rbp), %eax
	leal	(%rdx,%rax), %ecx
	movl	-48(%rbp), %edx
	movq	-40(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	_ZN15Rational_Number7reducedEii
	movl	%eax, -4(%rbp)
	movl	-20(%rbp), %edx
	movl	-44(%rbp), %eax
	addl	%edx, %eax
	cltd
	idivl	-4(%rbp)
	movl	%eax, %edx
	movq	-40(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_ZN15Rational_Number4setNEi
	movl	-16(%rbp), %edx
	movq	-40(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_ZN15Rational_Number4setDEi
.L32:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1740:
	.size	_ZN15Rational_Number3addEii, .-_ZN15Rational_Number3addEii
	.align 2
	.globl	_ZN15Rational_Number3subEii
	.type	_ZN15Rational_Number3subEii, @function
_ZN15Rational_Number3subEii:
.LFB1741:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -40(%rbp)
	movl	%esi, -44(%rbp)
	movl	%edx, -48(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN15Rational_Number4getDEv
	cmpl	%eax, -48(%rbp)
	sete	%al
	testb	%al, %al
	je	.L34
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN15Rational_Number4getNEv
	movl	-44(%rbp), %edx
	leal	(%rax,%rdx), %ecx
	movl	-48(%rbp), %edx
	movq	-40(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	_ZN15Rational_Number7reducedEii
	movl	%eax, -4(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN15Rational_Number4getNEv
	subl	-44(%rbp), %eax
	cltd
	idivl	-4(%rbp)
	movl	%eax, %edx
	movq	-40(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_ZN15Rational_Number4setNEi
	movl	-48(%rbp), %eax
	cltd
	idivl	-4(%rbp)
	movl	%eax, %edx
	movq	-40(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_ZN15Rational_Number4setDEi
	jmp	.L36
.L34:
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN15Rational_Number4getNEv
	movl	%eax, -20(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN15Rational_Number4getDEv
	movl	%eax, %edx
	movl	-48(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	_Z3LCMii
	movl	%eax, -16(%rbp)
	movl	-16(%rbp), %eax
	cltd
	idivl	-48(%rbp)
	movl	%eax, -12(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN15Rational_Number4getDEv
	movl	%eax, %ecx
	movl	-16(%rbp), %eax
	cltd
	idivl	%ecx
	movl	%eax, -8(%rbp)
	movl	-44(%rbp), %eax
	imull	-12(%rbp), %eax
	movl	%eax, -44(%rbp)
	movl	-20(%rbp), %eax
	imull	-8(%rbp), %eax
	movl	%eax, -20(%rbp)
	movl	-20(%rbp), %eax
	subl	-44(%rbp), %eax
	movl	%eax, %ecx
	movl	-48(%rbp), %edx
	movq	-40(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	_ZN15Rational_Number7reducedEii
	movl	%eax, -4(%rbp)
	movl	-20(%rbp), %eax
	subl	-44(%rbp), %eax
	cltd
	idivl	-4(%rbp)
	movl	%eax, %edx
	movq	-40(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_ZN15Rational_Number4setNEi
	movl	-16(%rbp), %edx
	movq	-40(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_ZN15Rational_Number4setDEi
.L36:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1741:
	.size	_ZN15Rational_Number3subEii, .-_ZN15Rational_Number3subEii
	.align 2
	.globl	_ZN15Rational_Number3devEii
	.type	_ZN15Rational_Number3devEii, @function
_ZN15Rational_Number3devEii:
.LFB1742:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movl	%edx, -32(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN15Rational_Number4getDEv
	movl	-28(%rbp), %edx
	imull	%edx, %eax
	movl	%eax, -12(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN15Rational_Number4getNEv
	movl	-32(%rbp), %edx
	imull	%edx, %eax
	movl	%eax, -8(%rbp)
	movl	-12(%rbp), %edx
	movl	-8(%rbp), %ecx
	movq	-24(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	_ZN15Rational_Number7reducedEii
	movl	%eax, -4(%rbp)
	movl	-8(%rbp), %eax
	cltd
	idivl	-4(%rbp)
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_ZN15Rational_Number4setNEi
	movl	-12(%rbp), %eax
	cltd
	idivl	-4(%rbp)
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_ZN15Rational_Number4setDEi
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1742:
	.size	_ZN15Rational_Number3devEii, .-_ZN15Rational_Number3devEii
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB2237:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L40
	cmpl	$65535, -8(%rbp)
	jne	.L40
	leaq	_ZStL8__ioinit(%rip), %rax
	movq	%rax, %rdi
	call	_ZNSt8ios_base4InitC1Ev@PLT
	leaq	__dso_handle(%rip), %rax
	movq	%rax, %rdx
	leaq	_ZStL8__ioinit(%rip), %rax
	movq	%rax, %rsi
	movq	_ZNSt8ios_base4InitD1Ev@GOTPCREL(%rip), %rax
	movq	%rax, %rdi
	call	__cxa_atexit@PLT
.L40:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2237:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I__ZN15Rational_NumberC2Eii, @function
_GLOBAL__sub_I__ZN15Rational_NumberC2Eii:
.LFB2238:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2238:
	.size	_GLOBAL__sub_I__ZN15Rational_NumberC2Eii, .-_GLOBAL__sub_I__ZN15Rational_NumberC2Eii
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__ZN15Rational_NumberC2Eii
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 11.2.0-19ubuntu1) 11.2.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
