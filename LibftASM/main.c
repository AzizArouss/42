/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/12 16:01:23 by aarouss           #+#    #+#             */
/*   Updated: 2015/03/12 16:01:32 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <strings.h>
#include <ctype.h>
#include <unistd.h>
#include <fcntl.h>

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
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, void *serc, size_t n);
char	*ft_strdup(const char *s);
void	ft_cat(int fd);

int		main(int ac, char **av)
{
  
	printf("***FT_BZERO***\n\n");
	char	s1[] = "coucou";
	char	p1[] = "coucou";
	printf("Initial string : %s\n", s1);
	ft_bzero(s1, 3);
	printf("FT_BZERO: [%c] [%c] [%c] [%c] [%c] [%c]\n", s1[0], s1[1], s1[2], s1[3], s1[4], s1[5]);
	bzero(p1 , 3);
	printf("BZERO: [%c] [%c] [%c] [%c] [%c] [%c]\n", p1[0], p1[1], p1[2], p1[3], p1[4], p1[5]);
	
	printf("\n***FT_STRCAT***\n\n");
	char	dest1[30] = "bonjour";
	char	desti1[30] = "bonjour";
	char	*steve;
	char	*ninja;
	printf("Initial string : %s\n", dest1);
	steve = ft_strcat(dest1, "steve");
	printf("FT_STRCAT: %s\n", steve);
	ninja = strcat(desti1, "steve");
	printf("STRCAT: %s\n", ninja);
	
	printf("\n\e[33m ***FT_ISALPHA*** \e[0m\n\n");
	int		c1 = 42;
	int		i;
	int 	i2;
	i = ft_isalpha(c1);
	i2 = isalpha(c1);
	if (i2 == i)
		printf("\e[32m Test 1 : OK!\e[0m\n");
	else
	{
		printf("\e[31m Test 1 : Error ! \e[0m\n");
		printf("FT_ISALPHA de '*': %d\n", i);
		printf("ISALPHA cd '*': %d\n", i2);
	}
	c1 = 65;
	i = ft_isalpha(c1);
	i2 = isalpha(c1);
	if (i2 == i)
		printf("\e[32m Test 2 : OK!\e[0m\n");
	else
	{
		printf("\e[31m Test 2 : Error ! \e[0m\n");
		printf("FT_ISALPHA de 'A': %d\n", i);
		printf("ISALPHA cd 'A': %d\n", i2);
	}
	c1 = 53;
	i2 = ft_isalpha(c1);
	i = isalpha(c1);
	if (i2 == i)
		printf("\e[32m Test 3 : OK!\e[0m\n");
	else
	{
		printf("\e[31m Test 3 : Error ! \e[0m\n");
		printf("FT_ISALPHA de '5': %d\n", i);
		printf("ISALPHA cd '5': %d\n", i2);
	}


	printf("\n\e[35m ***FT_ISDIGIT*** \e[0m\n\n");
	int		c2 = 91;
	i = ft_isdigit(c2);
	i2 = isdigit(c2);
	if (i == i2)
		printf("\e[32m Test 1 : OK!\e[0m\n");
	else
	{
		printf("\e[31m Test 1 : Error ! \e[0m\n");
		printf("FT_ISDIGIT de '[': %d\n", i);
		printf("ISDIGIT de '[': %d\n", i2);
	}
	c2 = 49;
	i = ft_isdigit(c2);
	i2 = isdigit(c2);
	if (i == i2)
		printf("\e[32m Test 2 : OK!\e[0m\n");
	else
	{
		printf("\e[31m Test 2 : Error ! \e[0m\n");
		printf("FT_ISDIGIT de '1': %d\n", i);
		printf("ISDIGIT de '1': %d\n", i2);
	}
	c2 = 99;
	i = ft_isdigit(c2);
	i2 = isdigit(c2);
	if (i == i2)
		printf("\e[32m Test 2 : OK!\e[0m\n");
		else
	{
		printf("\e[31m Test 2 : Error ! \e[0m\n");
		printf("FT_ISDIGIT de 'c': %d\n", i);
		printf("ISDIGIT de 'c': %d\n", i2);
	}




	printf("\n\e[33m ***FT_ISALNUM***\e[0m\n\n");
	int		c3 = 91;
	i = ft_isalnum(c3);
	i2 = isalnum(c3);
	if (i == i2)
		printf("\e[32m Test 1 : OK!\e[0m\n");
	else
	{
		printf("\e[31m Test 1 : Error ! \e[0m\n");
		printf("FT_ISALNUM de '[': %d\n", i);
		printf("ISALNUM de '[': %d\n", i2);
	}
	c3 = 48;
	i = ft_isalnum(c3);
	i2 = isalnum(c3);
	if (i == i2)
		printf("\e[32m Test 2 : OK!\e[0m\n");
	else
	{
		printf("\e[31m Test 2 : Error ! \e[0m\n");
		printf("FT_ISALNUM de '0': %d\n", i);	
		printf("ISALNUM de '0': %d\n", i2);
	}
	c3 = 67;
	i = ft_isalnum(c3);
	i2 = isalnum(c3);
	if (i == i2)
		printf("\e[32m Test 3 : OK!\e[0m\n");
	else
	{
		printf("\e[31m Test 3 : Error ! \e[0m\n");
		printf("FT_ISALNUM de 'C': %d\n", i);	
		printf("ISALNUM de 'C': %d\n", i2);
	}





	printf("\n\e[35m***FT_ISASCII***\e[0m\n\n");
	int		c4 = 91;
	i = ft_isascii(c4);
	i2 = isascii(c4);
	if (i == i2)
		printf("\e[32m Test 1 : OK!\e[0m\n");
	else
	{
		printf("\e[31m Test 1 : Error ! \e[0m\n");
		printf("FT_ISASCII de '[': %d\n", i);
		printf("ISASCII de '[': %d\n", i2);
	}
	c4 = -2;
	i = ft_isascii(c4);
	i2 = isascii(c4);
	if (i == i2)
		printf("\e[32m Test 1 : OK!\e[0m\n");
	else
	{
		printf("\e[31m Test 1 : Error ! \e[0m\n");
		printf("FT_ISASCII de -2: %d\n", i);
		printf("ISASCII de -2: %d\n", i2);
	}





	printf("\n\e[33m ***FT_ISPRINT***\e[0m\n\n");
	int		c5 = 91;
	i = ft_isprint(c5);
	i2 = isprint(c5);
	if (i == i2)
		printf("\e[32m Test 1 : OK!\e[0m\n");
	else
	{
		printf("\e[31m Test 1 : Error ! \e[0m\n");
		printf("FT_ISPRINT de '[': %d\n", i);
		printf("ISPRINT de '[': %d\n", i2);
	}	

	c5 = 0;
	i = ft_isprint(c5);
	i2 = isprint(c5);
	if (i == i2)
		printf("\e[32m Test 1 : OK!\e[0m\n");
	else
	{
		printf("\e[31m Test 1 : Error ! \e[0m\n");
		printf("FT_ISPRINT de 0: %d\n", i);
		printf("ISPRINT de 0: %d\n", i2);
	}



	printf("\n\e[35m***FT_TOUPPER***\e[0m\n\n");
	int		c6 = 97;
	i = ft_toupper(c6);
	i2 = toupper(c6);
	if (i == i2)
		printf("\e[32m Test 1 : OK!\e[0m\n");
	else
	{
		printf("\e[31m Test 1 : Error ! \e[0m\n");
		printf("FT_TOUPPER de 'a' : %c\n", i);
		printf("TOUPPER de 'a': %c\n", i2);
	}
	c6 = 66;
	i = ft_toupper(c6);
	i2 = toupper(c6);
	if (i == i2)
		printf("\e[32m Test 1 : OK!\e[0m\n");
	else
	{
		printf("\e[31m Test 1 : Error ! \e[0m\n");
		printf("FT_TOUPPER de 'B': %c\n", i);
		printf("TOUPPER de 'B': %c\n", i2);
	}

	i = ft_toupper(c6);
	i2 = toupper(c6);
	if (i == i2)
		printf("\e[32m Test 1 : OK!\e[0m\n");
	else
	{
		printf("\e[31m Test 1 : Error ! \e[0m\n");
		printf("FT_TOUPPER de 'a' : %c\n", i);
		printf("TOUPPER de 'a': %c\n", i2);
	}

	printf("\n\e[33m ***FT_TOLOWER***\e[0m\n\n");
	int		c7 = 65;
	i = ft_tolower(c7);
	i2 = tolower(c7);
	if (i == i2)
		printf("\e[32m Test 1 : OK!\e[0m\n");
	else
	{
		printf("\e[31m Test 1 : Error ! \e[0m\n");
		printf("FT_TOLOWER de 'A': %c\n", i);
		printf("TOLOWER cd 'A': %c\n", i2);
	}

	c7 = 98;
	i = ft_tolower(c7);
	i2 = tolower(c7);
	if (i == i2)
		printf("\e[32m Test 1 : OK!\e[0m\n");
	else
	{
		printf("\e[31m Test 1 : Error ! \e[0m\n");
		printf("FT_TOLOWER 'b': %c\n", i);
		printf("TOLOWER 'b' : %c\n", i2);
	}
	c7 = 41;
	i = ft_tolower(c7);
	i2 = tolower(c7);
	if (i == i2)
		printf("\e[32m Test 1 : OK!\e[0m\n");
	else
	{
		printf("\e[31m Test 1 : Error ! \e[0m\n");
		printf("FT_TOLOWER ')': %c\n", i);
		printf("TOLOWER ')' : %c\n", i2);
	}	

	
	printf("\n***FT_PUTS***\n\n");
	int		ret = 0;
	ret = ft_puts(NULL);
	printf("%d\n", ret);
	char	*var = NULL;
	ret = puts(var);
	printf("%d\n", ret);
	ret = ft_puts("Hello World!");
	printf("%d\n", ret);
	ret = puts("Hello World!");
	printf("%d\n", ret);

	printf("\n***FT_STRLEN***\n\n");
	int		i1;
	char	*str = "bonjour";
	printf("Initial string : %s\n", str);
	i1 = ft_strlen(str);
	printf("FT_STRLEN: %d\n", i1);
	i1 = strlen(str);
	printf("STRLEN: %d\n", i1);

	printf("\n***FT_MEMSET***\n\n");
	char	s2[] = "salut";
	char	p2[] = "salut";
	int		c0 = 54;
	size_t	n2 = 4;
	printf("Initial string : %s, size : %zd, replace char: %c\n", s2, n2, c0);
	ft_memset(s2, c0, n2);
	printf("FT_MEMSET: %c %c %c %c %c\n", s2[0], s2[1], s2[2], s2[3], s2[4]);
	memset(p2, c0, n2);
	printf("MEMSET: %c %c %c %c %c\n", p2[0], p2[1], p2[2], p2[3], p2[4]);
	n2 = 5;
	c0 = 97;
	char	s8[] = "bonjour";
	char	p3[] = "bonjour";
	printf("\nInitial string : %s, size : %zd, replace char: %c\n", s8, n2, c0);
	ft_memset(s8, c0, n2);
	printf("FT_MEMSET: %c %c %c %c %c %c %c\n", s8[0], s8[1], s8[2], s8[3], s8[4], s8[5], s8[6]);
	memset(p3, c0, n2);
	printf("MEMSET: %c %c %c %c %c %c %c\n", p3[0], p3[1], p3[2], p3[3], p3[4], p3[5], p3[6]);

	printf("\n***FT_MEMCPY***\n\n");
	char	dest[] = "chamallow";
	char	desti[] = "chamallow";
	size_t	n = 4;
	printf("Initial string : %s\n", dest);
	ft_memcpy(dest, "bonjour", n);
	printf("FT_MEMCPY: %s\n", dest);
	memcpy(desti, "bonjour", n);
	printf("MEMCPY: %s\n", desti);

	printf("\n***FT_STRDUP***\n\n");
	char	*p;
	char	*y;
	printf("Initial string : %s\n", "bonjour");
	p = ft_strdup("bonjour");
	printf("FT_STRDUP: %s\n", p);
	y = strdup("bonjour");
	printf("STRDUP: %s\n", y);

	printf("\n***FT_CAT***\n\n");
	ft_cat(0);
	ft_cat(open(__FILE__, O_RDONLY));
	ft_cat(open(av[0], O_RDONLY));
	ft_cat(-42);
	ft_cat(42);
	return (ac);
}
