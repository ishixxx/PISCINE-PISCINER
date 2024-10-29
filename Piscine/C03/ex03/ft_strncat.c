/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vihane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 20:54:30 by vihane            #+#    #+#             */
/*   Updated: 2024/03/27 20:56:04 by vihane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && (j < nb))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>

int	main()
{
	char dest[100] = "123, nous irons au bois\n";
	char src[100] = "456, cueillir des cerises";
	int nb = 18;
	ft_strncat(dest, src, nb);
	printf ("%s", dest);
	
	return (0);
}*/
