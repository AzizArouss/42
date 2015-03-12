# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_bzero.s                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/03/12 16:18:20 by aarouss           #+#    #+#              #
#    Updated: 2015/03/12 16:19:46 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .data

section .text
	global _ft_zero

_ft_zero:
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
