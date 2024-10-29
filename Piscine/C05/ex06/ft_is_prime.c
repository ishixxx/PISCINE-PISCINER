/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vihane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 13:42:14 by vihane            #+#    #+#             */
/*   Updated: 2024/04/03 15:36:02 by vihane           ###   ########.fr       */
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

/*#include <stdio.h>

int	main()
{
	printf("%d\n", ft_is_prime(-1));
	printf("%d\n", ft_is_prime(11));
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(25));
	printf("%d\n", ft_is_prime(3));
	printf("%d\n", ft_is_prime(42));
	printf("%d\n", ft_is_prime(5));
	printf("%d\n", ft_is_prime(18));
	printf("%d\n", ft_is_prime(41));
	printf("%d\n", ft_is_prime(88));
	printf("%d\n", ft_is_prime(97));
	printf("%d\n", ft_is_prime(91));
	return (0);
}*/
