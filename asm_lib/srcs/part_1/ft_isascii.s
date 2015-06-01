# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_isascii.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/29 12:04:29 by aarouss           #+#    #+#              #
#    Updated: 2015/06/01 15:10:06 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

	;; rdi est le premier paramètre de la fonction
	;; rsi le second
	;; rdx le troisième
	;; rcx le quatrième
	;; le protip de Ary -> Les 'd' sont en premier (orde alphabétique)
	;; mettre le prototype de la fonction en commentaire pour savoir quoi faire. 

global _ft_isascii

start:
	call _ft_isascii
	ret

isascii:
	mov rax, 1
	ret

isnotascii:
	mov rax, 0					;rax est la valeur de retour
	ret

_ft_isascii:
	cmp rdi, 127				;on compare rdi et 127
	jbe isascii					;si c'est inférieur ou égal
	jmp isnotascii				;on jump à isnotascii
	ret
