# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_mult.s                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/29 12:06:09 by aarouss           #+#    #+#              #
#    Updated: 2015/05/29 12:06:10 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

	;; int	ft_mult(int i, int j)
	;; this function multiplies i and j.
	;; it returns its result.
	
global _ft_mult

_ft_mult:
	push	rsi
	mov		rax, rdi
	mul		rsi
	pop		rsi
	ret
