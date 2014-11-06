/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <aarouss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/25 17:07:05 by aarouss           #+#    #+#             */
/*   Updated: 2014/07/25 17:07:21 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_lowercase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

void	ft_strcapitalize(char *str)
{
	int		i;
	int		is_first;
	char	c;

	i = 0;
	is_first = 1;
	str = ft_lowercase(str);
	while (str[i])
	{
		c = str[i];
		if (c >= 'a' && c <= 'z')
		{
			if (is_first == 1)
				c -= 32;
			is_first = 0;
		}
		else if (c >= '0' && c <= '9')
			is_first = 0;
		else
			is_first = 1;
		write(1, &c, 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc > 1)
		ft_strcapitalize(argv[1]);
	write(1, "\n", 1);
	return (0);
}
