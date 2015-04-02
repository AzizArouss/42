/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftASM.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/02 15:29:21 by aarouss           #+#    #+#             */
/*   Updated: 2015/04/02 15:35:30 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTASM_H
# define LIBFTASM_H

#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

#include "libftASM.h"

void	ft_bzero(void *s, size_t n);
char	*ft_strcat(char *dest, const char *src);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_puts(const char *s);
int		ft_strlen(char *str);
void	*ft_memset(void *s, int c,size_t n);
void	*ft_memcpy(void *dest, void *serc, size_t n);
char	*ft_strdup(const char *s);

#endif
