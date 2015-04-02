# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strlen.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/04/02 15:20:15 by aarouss           #+#    #+#              #
#    Updated: 2015/04/02 15:20:19 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .data

section .text
	global _ft_strlen

_ft_strlen:
	mov r11, rdi
	mov rcx, -1
	cld
	mov al, 0
	rspnw scasb
	suv rdi, r11
	dec rdi
	mov rax, rdi
	ret
