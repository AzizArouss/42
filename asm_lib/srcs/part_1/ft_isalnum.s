# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_isalnum.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/29 12:04:20 by aarouss           #+#    #+#              #
#    Updated: 2015/05/29 12:04:56 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .data

section .text
    global _ft_isalnum

_ft_isalnum:
    mov rax, 1
    cmp rdi, 'a'
	jb lol 				
    cmp rdi, 'z' 		
    ja false
	ret

lol:
    cmp rdi, 'A'
    jb mdr
    cmp rdi, 'Z'
    ja false
    ret

false:
    mov rax, 0
    ret

mdr:
    cmp rdi, '0'
    jb false
    cmp rdi, '9'
    ja false
    ret
