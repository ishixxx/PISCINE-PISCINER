/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vihane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:53:37 by vihane            #+#    #+#             */
/*   Updated: 2024/03/26 12:11:24 by vihane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
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
	char a[] = "CESONTDESMAJUSCULES";
	char b[] = "ce sont des minuscules";
	char c[] = "4543453648447787896";
	char d[] = "$^$#^#(^*)&*(&*&";
	char e[] = "";

	printf("%d\n", ft_str_is_uppercase(a));
	printf("%d\n", ft_str_is_uppercase(b));
	printf("%d\n", ft_str_is_uppercase(c));
	printf("%d\n", ft_str_is_uppercase(d));
	printf("%d\n", ft_str_is_uppercase(e));
}*/
