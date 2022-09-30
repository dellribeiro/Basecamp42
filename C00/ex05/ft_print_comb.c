/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrix <whendrix@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 15:38:38 by whendrix          #+#    #+#             */
/*   Updated: 2022/04/12 20:39:52 by whendrix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_numbers(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7' || b != '8' || c != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	num1;
	char	num2;
	char	num3;

		num1 = '0';
	while (num1 <= '7')
	{
			num2 = num1 + 1;
		while (num2 <= '8')
		{
				num3 = num2 + 1;
			while (num3 <= '9')
			{
				ft_numbers(num1, num2, num3);
			num3++;
			}
			num2++;
		}
		num1++;
	}
}
