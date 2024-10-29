/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vihane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 19:13:22 by vihane            #+#    #+#             */
/*   Updated: 2024/03/25 16:25:38 by vihane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - ('a' - 'A');
		}
	i++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char a[] = "abcdefghjklmnopqrstuvwx";

	printf ("%s\n", ft_strupcase(a));
	return (0);

}*/
