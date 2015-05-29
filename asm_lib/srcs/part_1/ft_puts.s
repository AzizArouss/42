# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_puts.s                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/29 12:04:41 by aarouss           #+#    #+#              #
#    Updated: 2015/05/29 12:04:59 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

	;; int puts(const char *s)
	;; s va devoir être écrite
	;; rdi -> s
	;; rax la valeur de retour, un int non négatif
	;; ,10 le \n...
	;; 4 le syscall write

%define MACH_SYSCALL(nb)		0x2000000 | nb
%define STDOUT				1
%define WRITE				4
	
global _ft_puts

section .text
	extern 	_ft_strlen			;va s'avérer utile
	
_ft_puts:
	cmp 	rdi, 0
	je 		.nul
	call 	_ft_strlen
	mov 	rdx, rax				 ;len
	mov 	rcx, rdi				 ;on mov l'adresse de la string
	mov 	rax, MACH_SYSCALL(WRITE) ;on va appeler write
	mov 	rdi, STDOUT				 ;dans l'entrée standard
	lea 	rsi, [rcx]			 	 ;on load effectiv adress là où on veut écrire
	syscall						 	 ;tout va s'écrire
	mov 	rdi, STDOUT				 ;on finie avec le \n
	mov 	rdx, 1					 ;taille du \n
	mov 	rax, MACH_SYSCALL(WRITE)
	lea 	rsi, [rel new_line]
	syscall
	mov		rax, 1
	ret

.nul:	
	mov		rdi, STDOUT				;je ne sais pas pourquoi mais
	lea 	rsi, [rel null_msg]		;impossible d'afficher (null)
	mov 	rdx, 7
	mov 	rax, MACH_SYSCALL(WRITE)
	syscall
	mov 	rax, -1
	ret
	
section .data
	null_msg db "(null)", 10
	new_line db 10
