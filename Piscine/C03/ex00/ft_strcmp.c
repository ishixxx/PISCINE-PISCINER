/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vihane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 11:52:47 by vihane            #+#    #+#             */
/*   Updated: 2024/03/29 11:46:51 by vihane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>

int	main()
{
	char a[] = "abcdefghijklmnopqrstuvwxyzA";
	char b[] = "abcdefghijklmnopqrstuvwxyzB";

	printf("%d\n", ft_strcmp(a,b));
	return (0);
}*/
