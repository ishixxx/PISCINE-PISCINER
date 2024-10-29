/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vihane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 14:10:00 by vihane            #+#    #+#             */
/*   Updated: 2024/04/03 18:34:35 by vihane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!(ft_is_prime(nb)))
		nb++;
	return (nb);
}

/*#include <stdio.h>

int	main()
{
	printf("%d\n", ft_find_next_prime(-1));
	printf("%d\n", ft_find_next_prime(80));
	printf("%d\n", ft_find_next_prime(65));
	printf("%d\n", ft_find_next_prime(18));
	printf("%d\n", ft_find_next_prime(4));
	printf("%d\n", ft_find_next_prime(2147483640));
}*/
