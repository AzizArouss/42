/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <aarouss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/25 11:33:38 by aarouss           #+#    #+#             */
/*   Updated: 2014/07/25 12:05:31 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int		ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	number;

	number = 48;
	while (number <= 57)
	{
		ft_putchar(number);
		number++;
	}
}
