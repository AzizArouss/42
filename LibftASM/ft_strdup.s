# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strdup.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/04/02 15:04:36 by aarouss           #+#    #+#              #
#    Updated: 2015/04/02 15:05:19 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global _ft_strdup

extern _malloc
extern _ft_strlen

_ft_strdup:
	push rdi
	call _ft_strlen
	mov rcx, rax
	push rcx
	mov rdi, rax
	inc rdi
	call _malloc
	jc end
	pop rcx
	pop rsi
	mov rdi, rax
	cld
	rep movsb

end:
	ret
