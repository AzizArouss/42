# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strcpy.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/07 16:12:04 by aarouss           #+#    #+#              #
#    Updated: 2015/05/11 11:22:37 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text

extern	_ft_strlen
extern	_ft_memcpy

global	_ft_strcpy

_ft_strcpy:
	mov		r12, rdi
	mov		rdi, rsi
	call	_ft_strlen
	mov		rdi, r12
	call	_ft_memcpy
	ret
