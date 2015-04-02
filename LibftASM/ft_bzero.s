# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_bzero.s                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/04/02 15:04:02 by aarouss           #+#    #+#              #
#    Updated: 2015/04/02 15:05:10 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .data

section .text
	global _ft_bzero

_ft_bzero:
	push rdi
	push rsi

while:
	cmp rdi, 0
	je ret
	mov byte rsi, 0
	inc rdi
 	dec rsi
 	ret

 return:
 	pop rdi
 	pop rsi
 	ret
