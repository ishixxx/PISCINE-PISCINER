/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vihane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 13:11:49 by vihane            #+#    #+#             */
/*   Updated: 2024/04/02 18:27:03 by vihane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_fibonacci(int index)
{
	int	val;

	if (index < 0)
		return (-1);
	else if (index < 2)
		return (index);
	else
		val = (ft_fibonacci(index -1) + ft_fibonacci(index - 2));
	return (val);
}

/*#include <stdio.h>

int ft_fibonacci(int index);

int	main(void)
{
	printf("0:%d\n", ft_fibonacci(0));
	printf("1:%d\n", ft_fibonacci(1));
	printf("1:%d\n", ft_fibonacci(2));
	printf("2:%d\n", ft_fibonacci(3));
	printf("55:%d\n", ft_fibonacci(10));
}*/
