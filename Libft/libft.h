/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <aarouss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 08:59:13 by aarouss           #+#    #+#             */
/*   Updated: 2014/11/08 18:11:54 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_isalnum(int c);

int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

int		ft_strequ(char cont *s1, char cosnt *s2)
int		ft_strnequ(char const *s1, char const *s2, size_t n)

int		ft_tolower(int c);i
int		ft_toupper(int c);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

void	ft_strdel(char **as);

void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);

void	ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);

void	ft_putendl(char const *s);
void	ft_putendl_fd(char const *s, int fd);

void	ft_putstr(char const *s);
void	ft_putstr_fd(char const *s, int fd);

void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_bzero(void *s, size_t n);
void	ft_memdel(void **ap);
void	ft_strdel(char **as);

void	ft_striter(char *s, void (*f)(char *));
void	ft_strteri(char *s, void (*f)(unsigned int, char *));

void	*ft_memset(void *d, int c, size_t n);
void	*ft_memcpy(void *s1, const void *s2, size_t n);
void	*ft_memccpy(void *s1, const void *s2, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memalloc(size_t size);
void	*ft_memmove(void *dst, const void *src, size_t len);

size_t	ft_strlen(const char *s);
size_t	ft_strlcat(char dst, const char *src, size_t size);

char	*ft_strcpy(char *s1, const char *s2);
char	*ft_strncpy(char *s1, const char *s2, size_t n);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *s1, const char *s2);
char	*ft_strnstr(const char *s, const char *s2, size_t n);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, size_t n);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s1);
char	*ft_strnew(size_t size);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s);
char	*ft_itoa(int n);

char	**ft_strsplit(char const *s, char c);
#endif
