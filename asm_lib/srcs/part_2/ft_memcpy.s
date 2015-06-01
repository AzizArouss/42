# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_memcpy.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/29 12:05:11 by aarouss           #+#    #+#              #
#    Updated: 2015/06/01 15:14:12 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

	;; void *memcpy(void *dst, const void *src, size_t n)
	;; memcpy ecrit les n premiers caractères de dst dans src
	;; rdi -> dst
	;; rsi -> src
	;; rdx -> len

global _ft_memcpy

_ft_memcpy:
	push	rdi
	mov		rcx, rdx				;string operation -> rcx fait office de compteur
	cld								;flags à initialiser
	rep		movsb					;le S.O à effectuer pour copier les premiers caractères. 
	pop		rax
	ret
