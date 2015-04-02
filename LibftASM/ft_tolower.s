# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_tolower.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/04/02 15:04:42 by aarouss           #+#    #+#              #
#    Updated: 2015/04/02 15:05:21 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .data

section .text
	global _ft_tolower

extern _ft_isalpha

_ft_tolower:
	call _ft_isalpha
	cmp rax, 0
	je false
	cmp rdi, 90
	jg false

true:
	mov rax, rdi
	add rax, 32
	ret

false:
	mov rax, rdi
	ret
