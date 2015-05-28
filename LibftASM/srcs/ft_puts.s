# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_puts.s                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/04/02 15:04:31 by aarouss           #+#    #+#              #
#    Updated: 2015/05/28 13:59:11 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .data
null_string:	 db      "(null)"
carriage_return:	 db	 10

	section .text
	global _ft_puts

	extern _ft_strlen

_ft_puts:
	cmp		rdi,	0
	je		null

	push		rdi
	call		_ft_strlen
	mov			rdx,		rax
	mov			rax,		0x2000004
	pop			rsi
	mov			rdi,		1
	syscall

	mov			rax,		rdx
	jmp			end


null:
	    mov     	rax,		0x2000004
	    mov     	rdx,		6
	    lea     	rsi,		[rel null_string]
	    mov     	rdi,		1
	    syscall

end:
	mov			rax,		0x2000004
	mov			rdi,		1
	lea			rsi,		[rel carriage_return]
	mov			rdx,		1
	syscall
	mov			rax,		10
	ret
