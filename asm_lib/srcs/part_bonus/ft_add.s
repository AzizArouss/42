# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_add.s                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/29 12:06:01 by aarouss           #+#    #+#              #
#    Updated: 2015/06/01 15:36:29 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

	;; int	ft_add(int i, int j)
	;; this function adds i and j.
	;; it returns its result.

global _ft_add

_ft_add:
	push rsi
	mov r8, rsi
	add r8, rdi
	pop rsi
	mov rax, r8
	ret
