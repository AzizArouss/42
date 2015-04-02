# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_toupper.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/04/02 15:04:45 by aarouss           #+#    #+#              #
#    Updated: 2015/04/02 15:05:23 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .data

section .text
    global _ft_toupper

_ft_isalpha:
    mov rax, 1
    cmp rdi, 'a'
    jb lol 
    cmp rdi, 'z'
    ja false2   
    ret

lol:
   cmp rdi, 'A'
   jb false
   cmp rdi, 'Z'
   ja false2
   ret

false2:
    mov rax, 0
    ret

_ft_toupper:
    call _ft_isalpha
    cmp rax, 0
    je false
    cmp rdi, 97
    jl false

true:
    mov rax, rdi
    sub rax, 32
    ret

false:
    mov rax, rdi
    ret
