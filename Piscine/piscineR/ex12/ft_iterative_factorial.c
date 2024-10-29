/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vihane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:29:37 by vihane            #+#    #+#             */
/*   Updated: 2024/05/18 15:12:57 by vihane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	if (nb < 0 || nb > 12)
		return (0);
	i = 2;
	result = 1;
	while (i <= nb)
	{
		result = result * i;
		i++;
	}
	return (result);
}
