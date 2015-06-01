# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strcat.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/01 15:00:03 by aarouss           #+#    #+#              #
#    Updated: 2015/06/01 15:11:53 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

	;; char *strcat(char *s1, const char *s2)
	;; s1 est la string qui va avoir s2 en plus d'elle
	;; s2 est la chaine à mettre dans s1
	;; rdi -> s1
	;; rsi -> s2
	;; 0x0 est le \0 du asm.

section .text
	global _ft_strcat

_ft_strcat:
	push rsi
	mov rax, rdi
	jmp while1

while1:
	cmp byte[rdi], 0
	je while2
	inc rdi
	jne while1

while2:
	cmp byte[rsi], 0
	je  end
	mov bl, byte[rsi]
	mov byte[rdi], bl
	inc rsi
	inc rdi
	jmp while2

end:
	mov byte[rdi], 0
	pop rsi
	ret
