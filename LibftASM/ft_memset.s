# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_memset.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/04/02 15:04:29 by aarouss           #+#    #+#              #
#    Updated: 2015/04/02 15:05:17 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global _ft_memset

segment .text

_ft_memset:
	push rdi
	mov rcs, rdx
	mov rax, rsi
	cld
	rep stosb
	pop rax
	ret
