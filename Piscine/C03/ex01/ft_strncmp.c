/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vihane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 17:52:42 by vihane            #+#    #+#             */
/*   Updated: 2024/03/31 17:39:31 by vihane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{	
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int	main()
{
	char a[] = "abcdefghijlmnoqrstuvwxyz";
	char b[] = "abcdefijklmn";
	int n = 10;

	printf("%d\n", ft_strncmp(a, b, n));
	return (0);
}*/
