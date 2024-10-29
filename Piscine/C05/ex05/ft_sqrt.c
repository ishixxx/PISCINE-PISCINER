/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vihane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 13:26:12 by vihane            #+#    #+#             */
/*   Updated: 2024/04/03 15:32:00 by vihane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{		
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i * i < nb && i <= 46340)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}

/*#include <stdio.h>

int	main(void)
{
	printf("10:%d\n", ft_sqrt(100));
	printf("6:%d\n", ft_sqrt(36));
	printf("0:%d\n", ft_sqrt(37));
	printf("100:%d\n", ft_sqrt(10000));
	printf("0:%d\n", ft_sqrt(2147483647));
	printf("2000:%d\n", ft_sqrt(4000000));
	printf("0:%d\n", ft_sqrt(-36));
}*/
