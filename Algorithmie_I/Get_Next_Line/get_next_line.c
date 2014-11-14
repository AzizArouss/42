/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 08:03:54 by aarouss           #+#    #+#             */
/*   Updated: 2014/11/14 08:46:41 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

	int		get_next_line(int const fd, char **line)
{
	char  *str;
	static  char  buffer[MEM_SIZE];
	static  int   i = 0;
	int   j;
	static  int   k = 0;

	j = 0;
	str = malloc(MEM_SIZE * sizeof(char));
	if (k == 0)
		k = read(fd, buffer, MEM_SIZE);
	if (i == k)
		return (NULL);
	while (i < k && buffer[i] != '\n')
	{
		str[j] = buffer[i];
		i = i + 1;
		j = j + 1;
	}
	if (buffer[i] == '\n')
		i = i + 1;
	str[j] = '\0';
	return (str);
}
