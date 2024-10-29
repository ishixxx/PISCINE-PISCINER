/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vihane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:56:23 by vihane            #+#    #+#             */
/*   Updated: 2024/03/25 16:24:48 by vihane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
	i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char a[] = "453 hjszghdhscds 45455 %&^$^$&&";

	printf("%d\n", ft_str_is_printable(a));
	return (0);
}*/
