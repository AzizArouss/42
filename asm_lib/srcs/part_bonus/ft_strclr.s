# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strclr.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/29 12:06:26 by aarouss           #+#    #+#              #
#    Updated: 2015/05/29 12:06:30 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

	;; void ft_strclr(char *s) (puts all bytes of *s to \0)
	;; s est la string à mettre à \0
	;; rdi -> s
	;; rsi -> n
	;; 0x0 est le \0 du asm. 

global _ft_strclr

section .text
	extern	_ft_strlen
	
_ft_strclr:
	call	_ft_strlen
	mov		rsi, rax
	xor		rax, rax

.while:
	cmp		rsi, 0						;je compare n et 0
	jz		end							;si c'est égale à 0, je retourne
	dec		rsi							;je décrémente rsi (le but sera d'arriver à 0)
	mov		[rdi + rsi], byte 0			;on stock le byte 0, soit NULL, à l'adresse rdi + rsi
	jmp		.while
	
end:
	ret
