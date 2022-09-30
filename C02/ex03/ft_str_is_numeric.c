/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrix <whendrix@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 00:19:58 by whendrix          #+#    #+#             */
/*   Updated: 2022/04/20 16:20:51 by whendrix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{	
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < '0') || (str[i] > '9'))
			return (0);
		i++;
	}
	return (1);
}

/*int		main(void)
{
	char numero[] = "0123456789";
	char *p_num;
	p_num = numero;

	char special[] = "0123456789ABC_";
	char *p_spe;
	p_spe = special;

	char vazio[] = "";
	char *p_vaz;
	p_vaz = vazio;

	printf("\n1 = String contem apenas numeros tipo char");
	printf("\n0 = String contem char diferentes de numeros\n\n");
	printf("%s = %d\n", numero, ft_str_is_numeric(p_num));
	printf("%s = %d\n", special, ft_str_is_numeric(p_spe));
	printf("Vazio = %d\n\n", ft_str_is_numeric(p_vaz));

	return (0);
}*/