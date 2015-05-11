# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_isprint.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/04/02 15:04:20 by aarouss           #+#    #+#              #
#    Updated: 2015/04/02 15:05:16 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .data

section .text
	global _ft_isprint

_ft_isprint:
	mov rax, 1
	cmp rdi, 33
	jb false
	cmp rdi, 126
	ja false
	ret

false:
	mov rax, 0
	ret
