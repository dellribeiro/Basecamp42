/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrix <whendrix@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 01:00:02 by whendrix          #+#    #+#             */
/*   Updated: 2022/04/20 16:21:41 by whendrix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		++i;
	}
	return (str);
}

/*int main(){
	char string[] = "abcdefghijklxyz";
	char *str;
	str = string;

	char vazio[] = "";
	char *vaz;
	vaz = vazio;

	printf("\n\nAntes : %s\n", string);
	printf("Depois: %s\n\n", ft_strupcase(str));
	printf("Vazio: -%s-\n\n", ft_strupcase(vaz));
	return (0);
}*/