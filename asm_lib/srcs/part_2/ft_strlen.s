# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strlen.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/29 12:05:26 by aarouss           #+#    #+#              #
#    Updated: 2015/05/29 12:05:36 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

	;; int ft_strlen(const char *s)
	;; s est la string 
	;; rdi -> s
	;; 0x0 est le \0 du asm.
	;; page 176 les instructions. mettre string dans la barre de recherche
	
global _ft_strlen

_ft_strlen:
	push	r15						;on met r15 au dessus de la stack pour ne pas qu'il soit modifié par le main
	mov		r15, rdi				;on sauvegarde rdi qui se verra modifié par l'utilisation de strlen
	mov		rax, 0					;mettre rax à -2 fait segfault. D'où…**
	mov		rcx, -1					;repnz ne fonctionne pas si rcx vaut 0. Et vu qu'il va le décrémenter, on arrivera forcémenent à 0
	cld							;on clear les flags pour utiliser repnz
	repnz	scasb					;rcx va se décrémenter de la longueur de la string + 2 (c'est SCASB qui lui dit de le faire) REPNZ c'est comme un while.
	sub		rax, rcx				;moins par moins ça fait plus.
	sub		rax, 2					;**…cette soustraction. On a toujours 2 caractères en plus. 
	mov 	rdi, r15				;on remet rdi à la bonne valeur
	pop		r15						;on laisse r15 tranquille.
	ret
