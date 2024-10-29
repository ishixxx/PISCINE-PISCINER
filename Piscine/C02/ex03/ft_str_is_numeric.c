/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vihane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 14:22:48 by vihane            #+#    #+#             */
/*   Updated: 2024/03/26 12:10:07 by vihane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
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
	char a[] = "12345678900000";
	char b[] = "ce string ne contient pas de numerique";
	char c[] = " 12466dshjgjsdew23445";
	char d[] = "";

	printf("%d\n", ft_str_is_numeric(a));
	printf("%d\n", ft_str_is_numeric(b));
	printf("%d\n", ft_str_is_numeric(c));
	printf("%d\n", ft_str_is_numeric(d));
	return(0);
}*/
