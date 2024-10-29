/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vihane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 19:23:33 by vihane            #+#    #+#             */
/*   Updated: 2024/03/25 16:26:30 by vihane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + ('a' - 'A');
		}
	i++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char a[] ="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	printf ("%s\n", ft_strlowcase(a));
	return (0);
}*/
