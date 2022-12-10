	.file	"main.cpp"
	.text
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.type	_ZL4setNi, @function
_ZL4setNi:
.LFB1731:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1731:
	.size	_ZL4setNi, .-_ZL4setNi
	.globl	main
	.type	main, @function
main:
.LFB1732:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA1732
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset 3, -24
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	leaq	-40(%rbp), %rax
	movl	$15, %edx
	movl	$12, %esi
	movq	%rax, %rdi
.LEHB0:
	call	_ZN15Rational_NumberC1Eii@PLT
.LEHE0:
	leaq	-32(%rbp), %rax
	movl	$15, %edx
	movl	$12, %esi
	movq	%rax, %rdi
.LEHB1:
	call	_ZN15Rational_NumberC1Eii@PLT
.LEHE1:
	leaq	-40(%rbp), %rax
	movl	$3, %esi
	movq	%rax, %rdi
.LEHB2:
	call	_ZN15Rational_Number4setNEi@PLT
	leaq	-32(%rbp), %rax
	movl	$2, %esi
	movq	%rax, %rdi
	call	_ZN15Rational_Number4setNEi@PLT
.LEHE2:
	movl	$3, %edi
	call	_ZL4setNi
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN15Rational_NumberD1Ev@PLT
	leaq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN15Rational_NumberD1Ev@PLT
	movl	$0, %eax
	movq	-24(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L6
	jmp	.L9
.L8:
	endbr64
	movq	%rax, %rbx
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN15Rational_NumberD1Ev@PLT
	jmp	.L5
.L7:
	endbr64
	movq	%rax, %rbx
.L5:
	leaq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN15Rational_NumberD1Ev@PLT
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB3:
	call	_Unwind_Resume@PLT
.LEHE3:
.L9:
	call	__stack_chk_fail@PLT
.L6:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1732:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA1732:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1732-.LLSDACSB1732
.LLSDACSB1732:
	.uleb128 .LEHB0-.LFB1732
	.uleb128 .LEHE0-.LEHB0
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB1-.LFB1732
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L7-.LFB1732
	.uleb128 0
	.uleb128 .LEHB2-.LFB1732
	.uleb128 .LEHE2-.LEHB2
	.uleb128 .L8-.LFB1732
	.uleb128 0
	.uleb128 .LEHB3-.LFB1732
	.uleb128 .LEHE3-.LEHB3
	.uleb128 0
	.uleb128 0
.LLSDACSE1732:
	.text
	.size	main, .-main
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB2227:
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
	jne	.L12
	cmpl	$65535, -8(%rbp)
	jne	.L12
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
.L12:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2227:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB2228:
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
.LFE2228:
	.size	_GLOBAL__sub_I_main, .-_GLOBAL__sub_I_main
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I_main
	.hidden	DW.ref.__gxx_personality_v0
	.weak	DW.ref.__gxx_personality_v0
	.section	.data.rel.local.DW.ref.__gxx_personality_v0,"awG",@progbits,DW.ref.__gxx_personality_v0,comdat
	.align 8
	.type	DW.ref.__gxx_personality_v0, @object
	.size	DW.ref.__gxx_personality_v0, 8
DW.ref.__gxx_personality_v0:
	.quad	__gxx_personality_v0
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
