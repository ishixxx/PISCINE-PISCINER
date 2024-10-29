/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vihane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 19:15:02 by vihane            #+#    #+#             */
/*   Updated: 2024/05/17 15:50:47 by vihane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*count;

	if (min >= max)
		return (NULL);
	count = (int *)malloc(sizeof(*count) * (max - min));
	if (count == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		count[i] = min;
		i++;
		min++;
	}
	return (count);
}
