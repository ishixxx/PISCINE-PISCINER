/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vihane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 09:34:51 by vihane            #+#    #+#             */
/*   Updated: 2024/04/03 19:12:12 by vihane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i > 0)
	{	
		nb = nb * i;
		i--;
	}
	return (nb);
}

/*#include <stdio.h>

int	main()
{
	printf("%d\n", ft_iterative_factorial(1));
	printf("%d\n", ft_iterative_factorial(-1));
	printf("%d\n", ft_iterative_factorial(0));
	printf("%d\n", ft_iterative_factorial(10));
	printf("%d\n", ft_iterative_factorial(3));
}*/
