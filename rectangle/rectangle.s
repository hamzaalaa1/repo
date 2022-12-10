	.file	"rectangle.cpp"
	.text
	.section	.text._ZSt3absd,"axG",@progbits,_ZSt3absd,comdat
	.weak	_ZSt3absd
	.type	_ZSt3absd, @function
_ZSt3absd:
.LFB1118:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movsd	%xmm0, -8(%rbp)
	movsd	-8(%rbp), %xmm0
	movq	.LC0(%rip), %xmm1
	andpd	%xmm1, %xmm0
	movq	%xmm0, %rax
	movq	%rax, %xmm0
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1118:
	.size	_ZSt3absd, .-_ZSt3absd
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.text._ZSt4setwi,"axG",@progbits,_ZSt4setwi,comdat
	.weak	_ZSt4setwi
	.type	_ZSt4setwi, @function
_ZSt4setwi:
.LFB2911:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movl	-4(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2911:
	.size	_ZSt4setwi, .-_ZSt4setwi
	.text
	.align 2
	.globl	_ZN9Rectangle8setNode1Edd
	.type	_ZN9Rectangle8setNode1Edd, @function
_ZN9Rectangle8setNode1Edd:
.LFB2926:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movsd	%xmm0, -16(%rbp)
	movsd	%xmm1, -24(%rbp)
	movq	-8(%rbp), %rax
	movsd	-16(%rbp), %xmm0
	movsd	%xmm0, 8(%rax)
	movq	-8(%rbp), %rax
	movsd	-24(%rbp), %xmm0
	movsd	%xmm0, 16(%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2926:
	.size	_ZN9Rectangle8setNode1Edd, .-_ZN9Rectangle8setNode1Edd
	.align 2
	.globl	_ZN9Rectangle8setNode2Edd
	.type	_ZN9Rectangle8setNode2Edd, @function
_ZN9Rectangle8setNode2Edd:
.LFB2927:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movsd	%xmm0, -16(%rbp)
	movsd	%xmm1, -24(%rbp)
	movq	-8(%rbp), %rax
	movsd	-16(%rbp), %xmm0
	movsd	%xmm0, 24(%rax)
	movq	-8(%rbp), %rax
	movsd	-24(%rbp), %xmm0
	movsd	%xmm0, 32(%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2927:
	.size	_ZN9Rectangle8setNode2Edd, .-_ZN9Rectangle8setNode2Edd
	.align 2
	.globl	_ZN9Rectangle8setNode3Edd
	.type	_ZN9Rectangle8setNode3Edd, @function
_ZN9Rectangle8setNode3Edd:
.LFB2928:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movsd	%xmm0, -16(%rbp)
	movsd	%xmm1, -24(%rbp)
	movq	-8(%rbp), %rax
	movsd	-16(%rbp), %xmm0
	movsd	%xmm0, 40(%rax)
	movq	-8(%rbp), %rax
	movsd	-24(%rbp), %xmm0
	movsd	%xmm0, 48(%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2928:
	.size	_ZN9Rectangle8setNode3Edd, .-_ZN9Rectangle8setNode3Edd
	.align 2
	.globl	_ZN9Rectangle8setNode4Edd
	.type	_ZN9Rectangle8setNode4Edd, @function
_ZN9Rectangle8setNode4Edd:
.LFB2929:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movsd	%xmm0, -16(%rbp)
	movsd	%xmm1, -24(%rbp)
	movq	-8(%rbp), %rax
	movsd	-16(%rbp), %xmm0
	movsd	%xmm0, 56(%rax)
	movq	-8(%rbp), %rax
	movsd	-24(%rbp), %xmm0
	movsd	%xmm0, 64(%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2929:
	.size	_ZN9Rectangle8setNode4Edd, .-_ZN9Rectangle8setNode4Edd
	.section	.rodata
.LC1:
	.string	" "
	.text
	.align 2
	.globl	_ZN9Rectangle12findtTheMainEv
	.type	_ZN9Rectangle12findtTheMainEv, @function
_ZN9Rectangle12findtTheMainEv:
.LFB2930:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movsd	8(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	%xmm0, 72(%rax)
	movq	-8(%rbp), %rax
	movsd	16(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	%xmm0, 80(%rax)
	movq	-8(%rbp), %rax
	movsd	72(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	24(%rax), %xmm1
	ucomisd	%xmm1, %xmm0
	jp	.L70
	ucomisd	%xmm1, %xmm0
	je	.L10
.L70:
	movq	-8(%rbp), %rax
	movsd	80(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	32(%rax), %xmm1
	ucomisd	%xmm1, %xmm0
	jp	.L71
	ucomisd	%xmm1, %xmm0
	je	.L10
.L71:
	movq	-8(%rbp), %rax
	movsd	24(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	%xmm0, 88(%rax)
	movq	-8(%rbp), %rax
	movsd	32(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	%xmm0, 96(%rax)
	movq	-8(%rbp), %rax
	movsd	88(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	40(%rax), %xmm1
	ucomisd	%xmm1, %xmm0
	jp	.L72
	ucomisd	%xmm1, %xmm0
	je	.L13
.L72:
	movq	-8(%rbp), %rax
	movsd	88(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	56(%rax), %xmm1
	ucomisd	%xmm1, %xmm0
	jp	.L94
	ucomisd	%xmm1, %xmm0
	je	.L13
	jmp	.L94
.L13:
	movq	-8(%rbp), %rax
	movsd	96(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	48(%rax), %xmm1
	ucomisd	%xmm1, %xmm0
	jp	.L73
	ucomisd	%xmm1, %xmm0
	je	.L17
.L73:
	movq	-8(%rbp), %rax
	movsd	96(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	64(%rax), %xmm1
	ucomisd	%xmm1, %xmm0
	jp	.L94
	ucomisd	%xmm1, %xmm0
	je	.L17
	jmp	.L94
.L17:
	movq	-8(%rbp), %rax
	movsd	72(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	40(%rax), %xmm1
	ucomisd	%xmm1, %xmm0
	jp	.L74
	ucomisd	%xmm1, %xmm0
	je	.L20
.L74:
	movq	-8(%rbp), %rax
	movsd	72(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	56(%rax), %xmm1
	ucomisd	%xmm1, %xmm0
	jp	.L94
	ucomisd	%xmm1, %xmm0
	je	.L20
	jmp	.L94
.L20:
	movq	-8(%rbp), %rax
	movsd	80(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	48(%rax), %xmm1
	ucomisd	%xmm1, %xmm0
	jp	.L75
	ucomisd	%xmm1, %xmm0
	je	.L23
.L75:
	movq	-8(%rbp), %rax
	movsd	80(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	64(%rax), %xmm1
	ucomisd	%xmm1, %xmm0
	jp	.L94
	ucomisd	%xmm1, %xmm0
	je	.L23
	jmp	.L94
.L23:
	movq	-8(%rbp), %rax
	movsd	88(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	40(%rax), %xmm1
	ucomisd	%xmm1, %xmm0
	jp	.L26
	ucomisd	%xmm1, %xmm0
	jne	.L26
	movq	-8(%rbp), %rax
	movsd	96(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	48(%rax), %xmm1
	subsd	%xmm1, %xmm0
	movq	%xmm0, %rax
	movq	%rax, %xmm0
	call	_ZSt3absd
	cvttsd2sil	%xmm0, %edx
	movq	-8(%rbp), %rax
	movl	%edx, 4(%rax)
	movq	-8(%rbp), %rax
	movsd	88(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	56(%rax), %xmm1
	subsd	%xmm1, %xmm0
	movq	%xmm0, %rax
	movq	%rax, %xmm0
	call	_ZSt3absd
	cvttsd2sil	%xmm0, %edx
	movq	-8(%rbp), %rax
	movl	%edx, (%rax)
	jmp	.L28
.L26:
	movq	-8(%rbp), %rax
	movsd	88(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	56(%rax), %xmm1
	ucomisd	%xmm1, %xmm0
	jp	.L28
	ucomisd	%xmm1, %xmm0
	jne	.L28
	movq	-8(%rbp), %rax
	movsd	96(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	64(%rax), %xmm1
	subsd	%xmm1, %xmm0
	movq	%xmm0, %rax
	movq	%rax, %xmm0
	call	_ZSt3absd
	cvttsd2sil	%xmm0, %edx
	movq	-8(%rbp), %rax
	movl	%edx, 4(%rax)
	movq	-8(%rbp), %rax
	movsd	88(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	24(%rax), %xmm1
	subsd	%xmm1, %xmm0
	movq	%xmm0, %rax
	movq	%rax, %xmm0
	call	_ZSt3absd
	cvttsd2sil	%xmm0, %edx
	movq	-8(%rbp), %rax
	movl	%edx, (%rax)
.L28:
	movl	$1, %eax
	jmp	.L30
.L10:
	movq	-8(%rbp), %rax
	movsd	72(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	40(%rax), %xmm1
	ucomisd	%xmm1, %xmm0
	jp	.L78
	ucomisd	%xmm1, %xmm0
	je	.L32
.L78:
	movq	-8(%rbp), %rax
	movsd	80(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	48(%rax), %xmm1
	ucomisd	%xmm1, %xmm0
	jp	.L79
	ucomisd	%xmm1, %xmm0
	je	.L32
.L79:
	movq	-8(%rbp), %rax
	movsd	40(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	%xmm0, 88(%rax)
	movq	-8(%rbp), %rax
	movsd	48(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	%xmm0, 96(%rax)
	movq	-8(%rbp), %rax
	movsd	88(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	24(%rax), %xmm1
	ucomisd	%xmm1, %xmm0
	jp	.L80
	ucomisd	%xmm1, %xmm0
	je	.L35
.L80:
	movq	-8(%rbp), %rax
	movsd	88(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	56(%rax), %xmm1
	ucomisd	%xmm1, %xmm0
	jp	.L95
	ucomisd	%xmm1, %xmm0
	je	.L35
	jmp	.L95
.L35:
	movq	-8(%rbp), %rax
	movsd	96(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	32(%rax), %xmm1
	ucomisd	%xmm1, %xmm0
	jp	.L81
	ucomisd	%xmm1, %xmm0
	je	.L39
.L81:
	movq	-8(%rbp), %rax
	movsd	96(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	64(%rax), %xmm1
	ucomisd	%xmm1, %xmm0
	jp	.L95
	ucomisd	%xmm1, %xmm0
	je	.L39
	jmp	.L95
.L39:
	movq	-8(%rbp), %rax
	movsd	72(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	24(%rax), %xmm1
	ucomisd	%xmm1, %xmm0
	jp	.L82
	ucomisd	%xmm1, %xmm0
	je	.L42
.L82:
	movq	-8(%rbp), %rax
	movsd	72(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	56(%rax), %xmm1
	ucomisd	%xmm1, %xmm0
	jp	.L95
	ucomisd	%xmm1, %xmm0
	je	.L42
	jmp	.L95
.L42:
	movq	-8(%rbp), %rax
	movsd	80(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	32(%rax), %xmm1
	ucomisd	%xmm1, %xmm0
	jp	.L83
	ucomisd	%xmm1, %xmm0
	je	.L45
.L83:
	movq	-8(%rbp), %rax
	movsd	80(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	64(%rax), %xmm1
	ucomisd	%xmm1, %xmm0
	jp	.L95
	ucomisd	%xmm1, %xmm0
	je	.L45
	jmp	.L95
.L45:
	movq	-8(%rbp), %rax
	movsd	88(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	24(%rax), %xmm1
	ucomisd	%xmm1, %xmm0
	jp	.L48
	ucomisd	%xmm1, %xmm0
	jne	.L48
	movq	-8(%rbp), %rax
	movsd	96(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	32(%rax), %xmm1
	subsd	%xmm1, %xmm0
	movq	%xmm0, %rax
	movq	%rax, %xmm0
	call	_ZSt3absd
	cvttsd2sil	%xmm0, %edx
	movq	-8(%rbp), %rax
	movl	%edx, 4(%rax)
	movq	-8(%rbp), %rax
	movsd	88(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	56(%rax), %xmm1
	subsd	%xmm1, %xmm0
	movq	%xmm0, %rax
	movq	%rax, %xmm0
	call	_ZSt3absd
	cvttsd2sil	%xmm0, %edx
	movq	-8(%rbp), %rax
	movl	%edx, (%rax)
	movq	-8(%rbp), %rax
	movq	88(%rax), %rax
	movq	%rax, %xmm0
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZNSolsEd@PLT
	movq	%rax, %rdx
	leaq	.LC1(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movq	%rax, %xmm0
	movq	%rdx, %rdi
	call	_ZNSolsEd@PLT
	movl	$10, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c@PLT
	jmp	.L50
.L48:
	movq	-8(%rbp), %rax
	movsd	88(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	56(%rax), %xmm1
	ucomisd	%xmm1, %xmm0
	jp	.L50
	ucomisd	%xmm1, %xmm0
	jne	.L50
	movq	-8(%rbp), %rax
	movsd	96(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	64(%rax), %xmm1
	subsd	%xmm1, %xmm0
	movq	%xmm0, %rax
	movq	%rax, %xmm0
	call	_ZSt3absd
	cvttsd2sil	%xmm0, %edx
	movq	-8(%rbp), %rax
	movl	%edx, 4(%rax)
	movq	-8(%rbp), %rax
	movsd	88(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	24(%rax), %xmm1
	subsd	%xmm1, %xmm0
	movq	%xmm0, %rax
	movq	%rax, %xmm0
	call	_ZSt3absd
	cvttsd2sil	%xmm0, %edx
	movq	-8(%rbp), %rax
	movl	%edx, (%rax)
.L50:
	movl	$1, %eax
	jmp	.L30
.L32:
	movq	-8(%rbp), %rax
	movsd	72(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	56(%rax), %xmm1
	ucomisd	%xmm1, %xmm0
	jp	.L86
	ucomisd	%xmm1, %xmm0
	je	.L31
.L86:
	movq	-8(%rbp), %rax
	movsd	80(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	64(%rax), %xmm1
	ucomisd	%xmm1, %xmm0
	jp	.L87
	ucomisd	%xmm1, %xmm0
	je	.L31
.L87:
	movq	-8(%rbp), %rax
	movsd	56(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	%xmm0, 88(%rax)
	movq	-8(%rbp), %rax
	movsd	64(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	%xmm0, 96(%rax)
	movq	-8(%rbp), %rax
	movsd	88(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	40(%rax), %xmm1
	ucomisd	%xmm1, %xmm0
	jp	.L88
	ucomisd	%xmm1, %xmm0
	je	.L54
.L88:
	movq	-8(%rbp), %rax
	movsd	88(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	24(%rax), %xmm1
	ucomisd	%xmm1, %xmm0
	jp	.L31
	ucomisd	%xmm1, %xmm0
	jne	.L31
.L54:
	movq	-8(%rbp), %rax
	movsd	96(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	48(%rax), %xmm1
	ucomisd	%xmm1, %xmm0
	jp	.L89
	ucomisd	%xmm1, %xmm0
	je	.L57
.L89:
	movq	-8(%rbp), %rax
	movsd	96(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	32(%rax), %xmm1
	ucomisd	%xmm1, %xmm0
	jp	.L31
	ucomisd	%xmm1, %xmm0
	jne	.L31
.L57:
	movq	-8(%rbp), %rax
	movsd	72(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	40(%rax), %xmm1
	ucomisd	%xmm1, %xmm0
	jp	.L90
	ucomisd	%xmm1, %xmm0
	je	.L60
.L90:
	movq	-8(%rbp), %rax
	movsd	72(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	24(%rax), %xmm1
	ucomisd	%xmm1, %xmm0
	jp	.L31
	ucomisd	%xmm1, %xmm0
	jne	.L31
.L60:
	movq	-8(%rbp), %rax
	movsd	80(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	48(%rax), %xmm1
	ucomisd	%xmm1, %xmm0
	jp	.L91
	ucomisd	%xmm1, %xmm0
	je	.L63
.L91:
	movq	-8(%rbp), %rax
	movsd	80(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	32(%rax), %xmm1
	ucomisd	%xmm1, %xmm0
	jp	.L31
	ucomisd	%xmm1, %xmm0
	jne	.L31
.L63:
	movq	-8(%rbp), %rax
	movsd	88(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	24(%rax), %xmm1
	ucomisd	%xmm1, %xmm0
	jp	.L66
	ucomisd	%xmm1, %xmm0
	jne	.L66
	movq	-8(%rbp), %rax
	movsd	96(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	32(%rax), %xmm1
	subsd	%xmm1, %xmm0
	movq	%xmm0, %rax
	movq	%rax, %xmm0
	call	_ZSt3absd
	cvttsd2sil	%xmm0, %edx
	movq	-8(%rbp), %rax
	movl	%edx, 4(%rax)
	movq	-8(%rbp), %rax
	movsd	88(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	40(%rax), %xmm1
	subsd	%xmm1, %xmm0
	movq	%xmm0, %rax
	movq	%rax, %xmm0
	call	_ZSt3absd
	cvttsd2sil	%xmm0, %edx
	movq	-8(%rbp), %rax
	movl	%edx, (%rax)
	jmp	.L68
.L66:
	movq	-8(%rbp), %rax
	movsd	88(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	40(%rax), %xmm1
	ucomisd	%xmm1, %xmm0
	jp	.L68
	ucomisd	%xmm1, %xmm0
	jne	.L68
	movq	-8(%rbp), %rax
	movsd	96(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	32(%rax), %xmm1
	subsd	%xmm1, %xmm0
	movq	%xmm0, %rax
	movq	%rax, %xmm0
	call	_ZSt3absd
	cvttsd2sil	%xmm0, %edx
	movq	-8(%rbp), %rax
	movl	%edx, 4(%rax)
	movq	-8(%rbp), %rax
	movsd	88(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	40(%rax), %xmm1
	subsd	%xmm1, %xmm0
	movq	%xmm0, %rax
	movq	%rax, %xmm0
	call	_ZSt3absd
	cvttsd2sil	%xmm0, %edx
	movq	-8(%rbp), %rax
	movl	%edx, (%rax)
.L68:
	movl	$1, %eax
	jmp	.L30
.L94:
	nop
	jmp	.L31
.L95:
	nop
.L31:
	movl	$0, %eax
.L30:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2930:
	.size	_ZN9Rectangle12findtTheMainEv, .-_ZN9Rectangle12findtTheMainEv
	.align 2
	.globl	_ZN9Rectangle11putThePointEv
	.type	_ZN9Rectangle11putThePointEv, @function
_ZN9Rectangle11putThePointEv:
.LFB2931:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2931:
	.size	_ZN9Rectangle11putThePointEv, .-_ZN9Rectangle11putThePointEv
	.align 2
	.globl	_ZN9Rectangle5printEv
	.type	_ZN9Rectangle5printEv, @function
_ZN9Rectangle5printEv:
.LFB2932:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -40(%rbp)
	movl	$0, -24(%rbp)
	jmp	.L98
.L101:
	movl	$0, -20(%rbp)
	jmp	.L99
.L100:
	movl	$2, %edi
	call	_ZSt4setwi
	movl	%eax, %esi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw@PLT
	movq	%rax, %rbx
	movl	$32, %edi
	call	_ZSt7setfillIcESt8_SetfillIT_ES1_
	movl	%eax, %esi
	movq	%rbx, %rdi
	call	_ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St8_SetfillIS3_E@PLT
	movq	%rax, %rcx
	movq	-40(%rbp), %rdi
	movl	-20(%rbp), %eax
	movslq	%eax, %rsi
	movl	-24(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	leaq	0(,%rax,4), %rdx
	addq	%rdx, %rax
	addq	%rdi, %rax
	addq	%rsi, %rax
	addq	$120, %rax
	movzbl	(%rax), %eax
	movsbl	%al, %eax
	movl	%eax, %esi
	movq	%rcx, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c@PLT
	addl	$1, -20(%rbp)
.L99:
	cmpl	$24, -20(%rbp)
	jle	.L100
	movl	$10, %esi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c@PLT
	addl	$1, -24(%rbp)
.L98:
	cmpl	$24, -24(%rbp)
	jle	.L101
	nop
	nop
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2932:
	.size	_ZN9Rectangle5printEv, .-_ZN9Rectangle5printEv
	.align 2
	.globl	_ZN9Rectangle5paintEv
	.type	_ZN9Rectangle5paintEv, @function
_ZN9Rectangle5paintEv:
.LFB2933:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movl	$4, -16(%rbp)
	movl	-16(%rbp), %eax
	movl	%eax, -8(%rbp)
	jmp	.L103
.L108:
	movl	$10, -12(%rbp)
	movl	-12(%rbp), %eax
	movl	%eax, -4(%rbp)
	jmp	.L104
.L107:
	movl	-16(%rbp), %eax
	cmpl	-8(%rbp), %eax
	je	.L105
	movq	-24(%rbp), %rax
	movl	4(%rax), %edx
	movl	-8(%rbp), %eax
	addl	%edx, %eax
	subl	$1, %eax
	cmpl	%eax, -16(%rbp)
	je	.L105
	movl	-12(%rbp), %eax
	cmpl	-4(%rbp), %eax
	je	.L105
	movq	-24(%rbp), %rax
	movl	(%rax), %edx
	movl	-4(%rbp), %eax
	addl	%edx, %eax
	subl	$1, %eax
	cmpl	%eax, -12(%rbp)
	je	.L105
	movq	-24(%rbp), %rsi
	movl	-12(%rbp), %eax
	movslq	%eax, %rcx
	movl	-16(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	leaq	0(,%rax,4), %rdx
	addq	%rdx, %rax
	addq	%rsi, %rax
	addq	%rcx, %rax
	addq	$120, %rax
	movb	$32, (%rax)
	jmp	.L106
.L105:
	movq	-24(%rbp), %rsi
	movl	-12(%rbp), %eax
	movslq	%eax, %rcx
	movl	-16(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	leaq	0(,%rax,4), %rdx
	addq	%rdx, %rax
	addq	%rsi, %rax
	addq	%rcx, %rax
	addq	$120, %rax
	movb	$42, (%rax)
.L106:
	addl	$1, -12(%rbp)
.L104:
	movq	-24(%rbp), %rax
	movl	(%rax), %edx
	movl	-4(%rbp), %eax
	addl	%edx, %eax
	cmpl	%eax, -12(%rbp)
	jl	.L107
	addl	$1, -16(%rbp)
.L103:
	movq	-24(%rbp), %rax
	movl	4(%rax), %edx
	movl	-8(%rbp), %eax
	addl	%edx, %eax
	cmpl	%eax, -16(%rbp)
	jl	.L108
	nop
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2933:
	.size	_ZN9Rectangle5paintEv, .-_ZN9Rectangle5paintEv
	.align 2
	.globl	_ZN9Rectangle9FillBoardEv
	.type	_ZN9Rectangle9FillBoardEv, @function
_ZN9Rectangle9FillBoardEv:
.LFB2934:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movl	$0, -8(%rbp)
	jmp	.L110
.L117:
	movl	$0, -4(%rbp)
	jmp	.L111
.L116:
	movq	-24(%rbp), %rax
	movl	4(%rax), %eax
	cmpl	%eax, -8(%rbp)
	jge	.L112
	movq	-24(%rbp), %rax
	movl	(%rax), %edx
	movl	-4(%rbp), %eax
	addl	%edx, %eax
	cmpl	$24, %eax
	jg	.L113
	movq	-24(%rbp), %rax
	movl	(%rax), %edx
	movl	-4(%rbp), %eax
	addl	%edx, %eax
	jmp	.L114
.L113:
	movl	$24, -4(%rbp)
	movl	-4(%rbp), %eax
.L114:
	movq	-24(%rbp), %rsi
	movslq	%eax, %rcx
	movl	-8(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	leaq	0(,%rax,4), %rdx
	addq	%rdx, %rax
	addq	%rsi, %rax
	addq	%rcx, %rax
	addq	$120, %rax
	movb	$35, (%rax)
	jmp	.L115
.L112:
	movq	-24(%rbp), %rsi
	movl	-4(%rbp), %eax
	movslq	%eax, %rcx
	movl	-8(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	leaq	0(,%rax,4), %rdx
	addq	%rdx, %rax
	addq	%rsi, %rax
	addq	%rcx, %rax
	addq	$120, %rax
	movb	$35, (%rax)
.L115:
	addl	$1, -4(%rbp)
.L111:
	cmpl	$24, -4(%rbp)
	jle	.L116
	addl	$1, -8(%rbp)
.L110:
	cmpl	$24, -8(%rbp)
	jle	.L117
	nop
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2934:
	.size	_ZN9Rectangle9FillBoardEv, .-_ZN9Rectangle9FillBoardEv
	.align 2
	.globl	_ZN9Rectangle6rotateEPiS0_
	.type	_ZN9Rectangle6rotateEPiS0_, @function
_ZN9Rectangle6rotateEPiS0_:
.LFB2935:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -40(%rbp)
	movq	-32(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, -4(%rbp)
	movq	-40(%rbp), %rax
	movl	(%rax), %edx
	movq	-32(%rbp), %rax
	movl	%edx, (%rax)
	movq	-40(%rbp), %rax
	movl	-4(%rbp), %edx
	movl	%edx, (%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2935:
	.size	_ZN9Rectangle6rotateEPiS0_, .-_ZN9Rectangle6rotateEPiS0_
	.section	.text._ZSt7setfillIcESt8_SetfillIT_ES1_,"axG",@progbits,_ZSt7setfillIcESt8_SetfillIT_ES1_,comdat
	.weak	_ZSt7setfillIcESt8_SetfillIT_ES1_
	.type	_ZSt7setfillIcESt8_SetfillIT_ES1_, @function
_ZSt7setfillIcESt8_SetfillIT_ES1_:
.LFB3265:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, %eax
	movb	%al, -4(%rbp)
	movzbl	-4(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3265:
	.size	_ZSt7setfillIcESt8_SetfillIT_ES1_, .-_ZSt7setfillIcESt8_SetfillIT_ES1_
	.text
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB3606:
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
	jne	.L123
	cmpl	$65535, -8(%rbp)
	jne	.L123
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
.L123:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3606:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I__ZN9Rectangle8setNode1Edd, @function
_GLOBAL__sub_I__ZN9Rectangle8setNode1Edd:
.LFB3607:
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
.LFE3607:
	.size	_GLOBAL__sub_I__ZN9Rectangle8setNode1Edd, .-_GLOBAL__sub_I__ZN9Rectangle8setNode1Edd
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__ZN9Rectangle8setNode1Edd
	.section	.rodata
	.align 16
.LC0:
	.long	-1
	.long	2147483647
	.long	0
	.long	0
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
