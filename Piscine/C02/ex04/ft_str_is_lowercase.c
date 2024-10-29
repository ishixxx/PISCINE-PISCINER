/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vihane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:02:51 by vihane            #+#    #+#             */
/*   Updated: 2024/03/26 12:10:44 by vihane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char a[] = "CE SONT DES MAJUSCULES";
	char b[] = "cesontdesminuscules";
	char c[] = "&%^^(%^&%^&%*$%$";
	char d[] = "";

	printf("%d\n", ft_str_is_lowercase(a));
	printf("%d\n", ft_str_is_lowercase(b));
	printf("%d\n", ft_str_is_lowercase(c));
	printf("%d\n", ft_str_is_lowercase(d));
}*/
