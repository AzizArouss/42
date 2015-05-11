# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_isascii.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/04/02 15:04:13 by aarouss           #+#    #+#              #
#    Updated: 2015/04/02 15:05:14 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .data

section .text
	global _ft_isascii

_ft_isascii:
	mov rax, 1
	cmp rdi, 1
	jb false
	cmp rdi, 127
	ja false
	ret

false:
	mov rax, 0
	ret
