/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrix <whendrix@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 01:26:59 by whendrix          #+#    #+#             */
/*   Updated: 2022/04/20 16:40:37 by whendrix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		++i;
	}
	return (str);
}

/*int main(){
	char string[] = "ABCDEFGHIJKXYZ";
	char *str;
	str = string;

	char vazio[] = "";
	char *vaz;
	vaz = vazio;

	printf("\n\nAntes : %s\n", string);
	printf("Depois: %s\n\n", ft_strlowcase(str));
	printf("Vazio: -%s-\n\n", ft_strlowcase(vaz));
	return (0);
}*/