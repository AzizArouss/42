# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_cat.s                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/04/02 15:04:05 by aarouss           #+#    #+#              #
#    Updated: 2015/04/02 15:05:12 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .bss
	message REST 100

	section .text
	global _ft_cat

_ft_cat:
	mov r14, rdi

_read:
	mov		rax, 0x2000003
	mov		rdi, r14
	lea		rsi, [rel message]
	mov		rdx, 100
	syscall
	jc _endoffile

	cmp rax, 0
	je _endreturn

	mov 	r12, rax
	mov		rax, 0x2000004
	mov		rdi, 1
	lea		rsi, [rel message]
	mov		rdx, r12
	syscall
	jmp _read

_endoffile:
	mov 	r12, rax
	mov		rax, 0x2000004
	mov		rdi, 1
	lea		rsi, [rel message]
	mov		rdx, r12
	syscall
	ret

_endreturn:
	ret
