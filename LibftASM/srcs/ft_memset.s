# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_memset.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/07 15:45:58 by aarouss           #+#    #+#              #
#    Updated: 2015/05/28 15:33:10 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global _ft_memset

_ft_memset:

	mov		rcx, rdx	;
	mov		rdx, rdi	;
	mov		rax, rsi	;
	cld					;
	rep		stosb		;
	mov		rax, rdx	;
	ret
