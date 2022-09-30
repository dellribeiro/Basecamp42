/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrix <whendrix@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 00:53:31 by whendrix          #+#    #+#             */
/*   Updated: 2022/04/22 19:09:22 by whendrix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	c;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{	
		c = 0;
		j = i;
		while ((str[i] == to_find[c]) && (to_find[c] != '\0') && (str[i] != '\0'))
		{
			i++;
			c++;
		}
		if (to_find[c] == '\0')
			return (&str[j]);
		str++;
	}
	return (0);
}
