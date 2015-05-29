# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_bzero.s                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/29 12:04:13 by aarouss           #+#    #+#              #
#    Updated: 2015/05/29 12:04:55 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

	;; void bzero(void *s, size_t n)
	;; s est la string à mettre à \0
	;; n est le nombre de \0
	;; rdi -> s
	;; rsi -> n
	;; 0x0 est le \0 du asm. 

global _ft_bzero

_ft_bzero:
	cmp rsi, 0						;je compare n et 0
	jz end							;si c'est égale à 0, je retourne
	dec rsi							;je décrémente rsi (le but sera d'arriver à 0)
	mov [rdi + rsi], byte 0			;on stock le byte 0, soit NULL, à l'adresse rdi + rsi
	jmp _ft_bzero					;on rappelle, ça fait office de while
	
end:
	ret
