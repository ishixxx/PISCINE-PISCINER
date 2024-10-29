/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vihane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 11:07:02 by vihane            #+#    #+#             */
/*   Updated: 2024/04/02 18:25:26 by vihane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb ;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (power > 1)
		{
			i = i * nb;
			power--;
		}
		return (i);
	}
}

/*#include <stdio.h>
 
int	main()
{
	printf("%d\n", ft_iterative_power(5, 3));
	printf("%d\n", ft_iterative_power(1, -10));
	printf("%d\n", ft_iterative_power(1, -1));
	printf("%d\n", ft_iterative_power(10, 0));
	printf("%d\n", ft_iterative_power(10, 1));
	printf("%d\n", ft_iterative_power(10, 2));
	printf("%d\n", ft_iterative_power(6, 3));
}*/
