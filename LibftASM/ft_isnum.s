# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_isnum.s                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/04/02 15:04:18 by aarouss           #+#    #+#              #
#    Updated: 2015/04/02 15:05:15 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .data
	
section .text
	global start
	global _ft_isnum
	
start:
	jmp _ft_isnum
	ret

false:
	mov rax, 1
	ret

_ft_isnum:
	mov rax, 0
	cmp rdi, '0'
	jb false 
	cmp rdi, '9'
	ja false
	ret
