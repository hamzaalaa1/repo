	.file	"date.cpp"
	.text
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.rodata
.LC0:
	.string	"inValid month number"
.LC1:
	.string	"inValid day number"
	.text
	.align 2
	.globl	_ZN4DateC2Eiii
	.type	_ZN4DateC2Eiii, @function
_ZN4DateC2Eiii:
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
	pushq	%r12
	pushq	%rbx
	subq	$32, %rsp
	.cfi_offset 12, -24
	.cfi_offset 3, -32
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movl	%edx, -32(%rbp)
	movl	%ecx, -36(%rbp)
	cmpl	$12, -32(%rbp)
	jg	.L2
	cmpl	$0, -32(%rbp)
	jle	.L2
	movq	-24(%rbp), %rax
	movl	-32(%rbp), %edx
	movl	%edx, 4(%rax)
	cmpl	$0, -36(%rbp)
	jg	.L3
	jmp	.L4
.L2:
	movl	$16, %edi
	call	__cxa_allocate_exception@PLT
	movq	%rax, %rbx
	leaq	.LC0(%rip), %rax
	movq	%rax, %rsi
	movq	%rbx, %rdi
.LEHB0:
	call	_ZNSt16invalid_argumentC1EPKc@PLT
.LEHE0:
	movq	_ZNSt16invalid_argumentD1Ev@GOTPCREL(%rip), %rax
	movq	%rax, %rdx
	leaq	_ZTISt16invalid_argument(%rip), %rax
	movq	%rax, %rsi
	movq	%rbx, %rdi
.LEHB1:
	call	__cxa_throw@PLT
.LEHE1:
.L3:
	cmpl	$29, -36(%rbp)
	jg	.L4
	movq	-24(%rbp), %rax
	movl	-36(%rbp), %edx
	movl	%edx, 8(%rax)
	movq	-24(%rbp), %rax
	movl	-28(%rbp), %edx
	movl	%edx, (%rax)
	jmp	.L9
.L4:
	movl	$16, %edi
	call	__cxa_allocate_exception@PLT
	movq	%rax, %rbx
	leaq	.LC1(%rip), %rax
	movq	%rax, %rsi
	movq	%rbx, %rdi
.LEHB2:
	call	_ZNSt16invalid_argumentC1EPKc@PLT
.LEHE2:
	movq	_ZNSt16invalid_argumentD1Ev@GOTPCREL(%rip), %rax
	movq	%rax, %rdx
	leaq	_ZTISt16invalid_argument(%rip), %rax
	movq	%rax, %rsi
	movq	%rbx, %rdi
.LEHB3:
	call	__cxa_throw@PLT
.L7:
	endbr64
	movq	%rax, %r12
	movq	%rbx, %rdi
	call	__cxa_free_exception@PLT
	movq	%r12, %rax
	movq	%rax, %rdi
	call	_Unwind_Resume@PLT
.L8:
	endbr64
	movq	%rax, %r12
	movq	%rbx, %rdi
	call	__cxa_free_exception@PLT
	movq	%r12, %rax
	movq	%rax, %rdi
	call	_Unwind_Resume@PLT
.LEHE3:
.L9:
	addq	$32, %rsp
	popq	%rbx
	popq	%r12
	popq	%rbp
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
	.uleb128 .L7-.LFB1732
	.uleb128 0
	.uleb128 .LEHB1-.LFB1732
	.uleb128 .LEHE1-.LEHB1
	.uleb128 0
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
	.size	_ZN4DateC2Eiii, .-_ZN4DateC2Eiii
	.globl	_ZN4DateC1Eiii
	.set	_ZN4DateC1Eiii,_ZN4DateC2Eiii
	.align 2
	.globl	_ZNK4Date5printEv
	.type	_ZNK4Date5printEv, @function
_ZNK4Date5printEv:
.LFB1734:
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
	movl	(%rax), %eax
	movl	%eax, %esi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZNSolsEi@PLT
	movl	$47, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c@PLT
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	movl	4(%rax), %eax
	movl	%eax, %esi
	movq	%rdx, %rdi
	call	_ZNSolsEi@PLT
	movl	$47, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c@PLT
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	movl	8(%rax), %eax
	movl	%eax, %esi
	movq	%rdx, %rdi
	call	_ZNSolsEi@PLT
	movl	$10, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1734:
	.size	_ZNK4Date5printEv, .-_ZNK4Date5printEv
	.section	.rodata
.LC2:
	.string	"Distruction!\n"
	.text
	.align 2
	.globl	_ZN4DateD2Ev
	.type	_ZN4DateD2Ev, @function
_ZN4DateD2Ev:
.LFB1736:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA1736
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	.LC2(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1736:
	.section	.gcc_except_table
.LLSDA1736:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1736-.LLSDACSB1736
.LLSDACSB1736:
.LLSDACSE1736:
	.text
	.size	_ZN4DateD2Ev, .-_ZN4DateD2Ev
	.globl	_ZN4DateD1Ev
	.set	_ZN4DateD1Ev,_ZN4DateD2Ev
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB2236:
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
	jne	.L14
	cmpl	$65535, -8(%rbp)
	jne	.L14
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
.L14:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2236:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I__ZN4DateC2Eiii, @function
_GLOBAL__sub_I__ZN4DateC2Eiii:
.LFB2237:
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
.LFE2237:
	.size	_GLOBAL__sub_I__ZN4DateC2Eiii, .-_GLOBAL__sub_I__ZN4DateC2Eiii
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__ZN4DateC2Eiii
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
