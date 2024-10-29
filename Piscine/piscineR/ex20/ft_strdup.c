/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vihane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:36:25 by vihane            #+#    #+#             */
/*   Updated: 2024/05/15 19:59:14 by vihane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*s;
	int		i;

	i = 0;
	s = malloc(sizeof(char) * (i + 1));
	if (s == NULL)
		return (NULL);
	else
	{
		while (src[i] != '\0')
		{
			s[i] = src[i];
			i++;
		}
		return (s);
	}
	s[i] = '\0';
	return (s);
}

/*int	main(void)
{
	char a[]= "is it unbearable?";
	printf("%s\n", ft_strdup(a));
	return (0);
}*/
