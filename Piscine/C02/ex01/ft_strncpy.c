/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vihane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 19:41:40 by vihane            #+#    #+#             */
/*   Updated: 2024/03/25 16:05:33 by vihane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*#include <stdio.h>

int	main()
{
	char	src[] = "Hello, piscineux!";
	char	dest[20];
	int n = 15;
	ft_strncpy(dest, src, n);
	printf("Chaine de destination apres copie : %s\n", dest);

	return(0);
}*/
