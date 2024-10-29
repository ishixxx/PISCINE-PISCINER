/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vihane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:30:31 by vihane            #+#    #+#             */
/*   Updated: 2024/03/16 11:13:12 by vihane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 97;
	while (letter <= 122)
	{		
		write(1, &letter, 1);
		letter++;
	}
}

/*int	main()
{
	ft_print_alphabet();
	return (0);
}*/
