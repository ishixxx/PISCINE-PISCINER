/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vihane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 10:22:45 by vihane            #+#    #+#             */
/*   Updated: 2024/04/02 20:18:12 by vihane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 1 || nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb -1));
}

/*#include <stdio.h>

int ft_recursive_factorial(int nb);

int	main(void)
{
	printf("0:%d\n", ft_recursive_factorial(-10));
	printf("0:%d\n", ft_recursive_factorial(-1));
	printf("1:%d\n", ft_recursive_factorial(0));
	printf("1:%d\n", ft_recursive_factorial(1));
	printf("3628800:%d\n", ft_recursive_factorial(10));
	printf("6:%d\n", ft_recursive_factorial(3));
}*/
