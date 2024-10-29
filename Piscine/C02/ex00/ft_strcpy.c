/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vihane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:42:10 by vihane            #+#    #+#             */
/*   Updated: 2024/03/25 16:04:20 by vihane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>

int	main()
{
	char	src[] = "Hello, piscine!";
	char	dest[20];
	ft_strcpy(dest, src);
	printf("Chaine de destination apres copie : %s\n", dest);

	return (0);
}*/
