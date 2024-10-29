/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vihane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:34:13 by vihane            #+#    #+#             */
/*   Updated: 2024/03/26 16:40:10 by vihane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123))
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
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "abcdefghijklmnopqrstuvwxyz";
	char c[] = "necontientPasSeuLementDeslettres[";
	char d[] = "0contientpasSeuLementDeLettres";
	char e[] = "";

	printf("%d\n", ft_str_is_alpha(a));
	printf("%d\n", ft_str_is_alpha(b));
	printf("%d\n", ft_str_is_alpha(c));
	printf("%d\n", ft_str_is_alpha(d));
	printf("%d\n", ft_str_is_alpha(e));
	return(0);
}*/
