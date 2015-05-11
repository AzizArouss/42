# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strcat.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/04/02 15:04:33 by aarouss           #+#    #+#              #
#    Updated: 2015/04/02 15:05:19 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
    global _ft_strcat
    extern _ft_strcpy

_ft_strcat:
    mov         r8,     rdi
    sub         rax,    rax
    sub         rcx,    rcx
    not         rcx
    cld
    repne       scasb
    dec         rdi
    mov byte    [rdi],  '9'
    call        _ft_strcpy
    mov         rax,    r8
    ret
