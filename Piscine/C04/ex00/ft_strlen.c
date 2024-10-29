/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vihane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 20:07:05 by vihane            #+#    #+#             */
/*   Updated: 2024/03/26 19:48:45 by vihane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

/*#include <stdio.h>

int	main()
{
	char a[] = "1a2b3c4d5e6f";
	int length = ft_strlen(a);
	printf("Le nombre de caracteres est de : %d", length);

	return (0);
}*/
