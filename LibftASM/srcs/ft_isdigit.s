# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_isdigit.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/04/02 15:04:16 by aarouss           #+#    #+#              #
#    Updated: 2015/04/02 15:05:15 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .data
	
section .text
	global _ft_isdigit

_ft_isdigit:
	mov rax, 1
	cmp rdi, '0'
	jb false 
	cmp rdi, '9'
	ja false
	ret

false:
	mov rax, 0
	ret
