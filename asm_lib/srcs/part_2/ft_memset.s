# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_memset.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/29 12:05:14 by aarouss           #+#    #+#              #
#    Updated: 2015/06/01 15:15:31 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global _ft_memset

_ft_memset:

	mov rcx, rdx
	mov rdx, rdi
	mov rax, rsi
	cld
	rep stosb
	mov rax, rdx
	ret
