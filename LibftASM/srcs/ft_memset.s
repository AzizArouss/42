# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_memset.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/07 15:45:58 by aarouss           #+#    #+#              #
#    Updated: 2015/05/07 15:47:35 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
global ft_memset

ft_memset:

	mov		rcx, rdx	;
	mov		rdx, rdi	;
	mov		rax, rsi	;
	cld					;
	rep		stosb		;
	mov		rax, rdx	;
	ret
