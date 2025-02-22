/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vihane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:13:02 by vihane            #+#    #+#             */
/*   Updated: 2024/03/22 12:17:26 by vihane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tmps;

	tmps = *a;
	*a = *b;
	*b = tmps;
}

/*int	main();
{	
	a = '2'
	b = '6'
	ft_swap()

}*/
