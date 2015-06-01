# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_tolower.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/29 12:04:48 by aarouss           #+#    #+#              #
#    Updated: 2015/06/01 15:13:31 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

	;; int tolower(int c)
	;; tolower renvoie la valeur ascii de c modifiée si c est une majuscule.
	;; sinon il renvoie la valeur de c
	;; rdi -> c

global _ft_tolower

section .text
	extern _ft_isalpha

_ft_tolower:
	call _ft_isalpha
	cmp rax, 0
	je .no_tolower
	cmp rdi, 91
	jl .tolower
	jmp .no_tolower

.tolower:
	add rdi, 32
	
.no_tolower:
	mov rax, rdi
	ret
