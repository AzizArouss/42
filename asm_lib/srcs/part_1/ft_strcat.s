# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strcat.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/29 12:04:45 by aarouss           #+#    #+#              #
#    Updated: 2015/05/29 12:05:00 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

	;; char *strcat(char *s1, const char *s2)
	;; s1 est la string qui va avoir s2 en plus d'elle
	;; s2 est la chaine à mettre dans s1
	;; rdi -> s1
	;; rsi -> s2
	;; 0x0 est le \0 du asm.
	
global _ft_strcat

section .text
	extern _ft_strlen
	
_ft_strcat:
	call	_ft_strlen				;on choppe la première len
	mov		r8, rax					;on sauve la len de s1 dans r8
	mov		rdx, rdi				;on sauvegarde s1 chez rdx
	mov		rdi, rsi				;on met rsi dans rdi pour le strlen
	call	_ft_strlen				;on a la len de s2
	mov		r9, rax					;on sauve la len de s2 dans r9
	mov		rdi, rdx				;on remet rdi à sa bonne adresse
	mov		rdx, -1					;on initialise un compteur
	jmp		.while					;on va dans le while

.while:
	inc		rdx							;on incrémente notre compteur
	cmp		rdx, r9						;on compare les valeurs
	je		.end						;si c'est la même on va à la fin
	mov		cl, [rsi + rdx]				;on met dans rcx ce qu'il y a dans rsi + rdx
	mov		[rdi + r8], cl				;on met dans rdi + "sa len incrémentée" ce qu'il y a dans rcx
	inc		r8							;on écrit au bon endroit
	jmp		.while						;on recommence


.end:
	mov 	rax, rdi
	ret
