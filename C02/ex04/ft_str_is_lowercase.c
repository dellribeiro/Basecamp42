/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrix <whendrix@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 00:28:26 by whendrix          #+#    #+#             */
/*   Updated: 2022/04/20 16:40:57 by whendrix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a') || (str[i] > 'z'))
			return (0);
		i++;
	}
	return (1);
}

/*int		main(void)
{
	char lowcase[] = "abcdefghijklmnopqrstuvwxyz";
	char *p_low;
	p_low = lowcase;

	char special[] = "0123456789ABCDERSTUVWXYZ";
	char *p_spe;
	p_spe = special;

	char empty[] = "";
	char *p_emp;
	p_emp = empty;

	printf("\n1 = String contem char em caixa baixa");
	printf("\n0 = String contem outros tipos de char\n\n");
	printf("%s = %d\n", lowcase, ft_str_is_lowercase(p_low));
	printf("%s = %d\n", special, ft_str_is_lowercase(p_spe));
	printf("Empty = %d\n\n", ft_str_is_lowercase(p_emp));

	return (0);
}*/