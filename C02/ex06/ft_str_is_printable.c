/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrix <whendrix@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 00:47:04 by whendrix          #+#    #+#             */
/*   Updated: 2022/04/20 17:08:13 by whendrix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 32) || (str[i] > 126))
			return (0);
		i++;
	}
	return (1);
}

/*int		main(void)
{
	char printable[] = "ABCDefghij)($#@!{";
	char *p_print;
	p_print = printable;

	char special[] = "ÇçáàúÆ(tab), \a (?)";
	char *p_spe;
	p_spe = special;

	char empty[] = "";
	char *p_emp;
	p_emp = empty;

	printf("\n1 = Podem ser imprimidos");
	printf("\n0 = Não podem ser imprimidos\n\n");
	printf("%s = %d\n", printable, ft_str_is_printable(p_print));
	printf("%s = %d\n", special, ft_str_is_printable(p_spe));
	printf("Empty = %d\n\n", ft_str_is_printable(p_emp));

	return (0);
}*/