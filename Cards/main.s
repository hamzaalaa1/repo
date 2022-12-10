	.file	"main.cpp"
	.text
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.rodata
.LC0:
	.string	"PAIR"
.LC1:
	.string	"\n"
.LC2:
	.string	"TWO PAIRS"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1731:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA1731
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$568, %rsp
	.cfi_offset 3, -24
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	movl	$0, %edi
	call	time@PLT
	movl	%eax, %edi
	call	srand@PLT
	movq	-552(%rbp), %rdx
	leaq	-464(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
.LEHB0:
	call	_ZN11DeckOfCardsC1E4Card@PLT
	movl	$0, -564(%rbp)
	jmp	.L2
.L5:
	movl	$0, -560(%rbp)
	jmp	.L3
.L4:
	movl	-564(%rbp), %edx
	leaq	-552(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_ZN4Card7setFaceEi@PLT
	movl	-560(%rbp), %edx
	leaq	-552(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_ZN4Card7setSuitEi@PLT
	movq	-552(%rbp), %rdx
	leaq	-464(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN11DeckOfCards9push_backE4Card@PLT
	addl	$1, -560(%rbp)
.L3:
	cmpl	$3, -560(%rbp)
	jle	.L4
	addl	$1, -564(%rbp)
.L2:
	cmpl	$12, -564(%rbp)
	jle	.L5
	leaq	-464(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN11DeckOfCards7shuffelEv@PLT
	movl	$0, -556(%rbp)
	jmp	.L6
.L7:
	movl	-556(%rbp), %eax
	movslq	%eax, %rbx
	leaq	-464(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN11DeckOfCards8dealCardEv@PLT
	movq	%rax, -512(%rbp,%rbx,8)
	leaq	-512(%rbp), %rdx
	movl	-556(%rbp), %eax
	cltq
	salq	$3, %rax
	addq	%rax, %rdx
	leaq	-544(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN4Card8toStringB5cxx11Ev@PLT
.LEHE0:
	leaq	-544(%rbp), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
.LEHB1:
	call	_ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE@PLT
.LEHE1:
	leaq	-544(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	addl	$1, -556(%rbp)
.L6:
	cmpl	$4, -556(%rbp)
	jle	.L7
	leaq	-512(%rbp), %rax
	movq	%rax, %rdi
.LEHB2:
	call	_ZN9UtilClass4pairEP4Card@PLT
	testb	%al, %al
	je	.L8
	leaq	.LC0(%rip), %rax
	jmp	.L9
.L8:
	leaq	.LC1(%rip), %rax
.L9:
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	leaq	-512(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN9UtilClass8twoPairsEP4Card@PLT
	testb	%al, %al
	je	.L10
	leaq	.LC2(%rip), %rax
	jmp	.L11
.L10:
	leaq	.LC1(%rip), %rax
.L11:
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movl	$0, %eax
	movq	-24(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L14
	jmp	.L16
.L15:
	endbr64
	movq	%rax, %rbx
	leaq	-544(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	movq	%rbx, %rax
	movq	%rax, %rdi
	call	_Unwind_Resume@PLT
.LEHE2:
.L16:
	call	__stack_chk_fail@PLT
.L14:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1731:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA1731:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1731-.LLSDACSB1731
.LLSDACSB1731:
	.uleb128 .LEHB0-.LFB1731
	.uleb128 .LEHE0-.LEHB0
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB1-.LFB1731
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L15-.LFB1731
	.uleb128 0
	.uleb128 .LEHB2-.LFB1731
	.uleb128 .LEHE2-.LEHB2
	.uleb128 0
	.uleb128 0
.LLSDACSE1731:
	.text
	.size	main, .-main
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB2235:
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
	jne	.L19
	cmpl	$65535, -8(%rbp)
	jne	.L19
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
.L19:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2235:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB2236:
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
.LFE2236:
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
