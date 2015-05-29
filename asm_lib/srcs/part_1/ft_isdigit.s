# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_isdigit.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/29 12:04:33 by aarouss           #+#    #+#              #
#    Updated: 2015/05/29 12:04:58 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

global _ft_isdigit

start:
	call _ft_isdigit
	ret

isnotdigit:
	mov rax, 0
	ret

isdigit:
	mov rax, 1
	ret

_ft_isdigit:
	cmp rdi, 48
	jl isnotdigit				;jump less
	cmp rdi, 57
	jg isnotdigit				;jump greater
	jmp isdigit
	ret
