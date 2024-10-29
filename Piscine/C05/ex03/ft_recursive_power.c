/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vihane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 13:06:59 by vihane            #+#    #+#             */
/*   Updated: 2024/04/02 18:31:48 by vihane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
	return (nb);
}

/*#include <stdio.h>

int	main()
{
	printf("%d\n", ft_recursive_power(2, 5));
	printf("%d\n", ft_recursive_power(1, -10));
	printf("%d\n", ft_recursive_power(1, -1));
	printf("%d\n", ft_recursive_power(10, 0));
	printf("%d\n", ft_recursive_power(10, 1));
	printf("%d\n", ft_recursive_power(10, 2));
	printf("%d\n", ft_recursive_power(6, 3));
}*/
