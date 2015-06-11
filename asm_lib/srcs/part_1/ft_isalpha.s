# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_isalpha.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/29 12:04:25 by aarouss           #+#    #+#              #
#    Updated: 2015/06/11 14:52:41 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

global _ft_isalpha

isnotalpha:
	mov rax, 0
	ret

isalpha:
	mov rax, 1
	ret

ns:
	cmp rdi, 123
	jl isalpha
	ret

sf:
	cmp rdi, 91
	jl isalpha
	cmp rdi, 96
	jg ns						;ns pour ninetysix.
	jmp isnotalpha
	ret

_ft_isalpha:
	cmp rdi, 65
	jl isnotalpha 				;jump less
	cmp rdi, 122
	jg isnotalpha				;jump greater
	cmp rdi, 64
	jg sf						;va falloir vérifier sf pour sixty five
	jmp isnotalpha
