# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_bzero.s                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/07 15:39:00 by aarouss           #+#    #+#              #
#    Updated: 2015/05/07 15:44:34 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section	.data

section	.text
	global	_ft_bzero

_ft_bzero:
	push	rbp				;
	mov		rbp, rsp		;
	xor		rcx, rcx		;
	mov		rbx, rdi		;

loop:
	mov		byte [rbx], 0	;
	inc		rbx				;
	inc		rcx				;
	cmp		rcx, rsi		;
	jne		loop			;

	leave
	ret
