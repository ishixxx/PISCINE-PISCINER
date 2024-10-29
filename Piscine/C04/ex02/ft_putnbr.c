/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vihane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 20:47:35 by vihane            #+#    #+#             */
/*   Updated: 2024/04/01 15:00:57 by vihane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else
			ft_putchar(nb + '0');
	}
}

/*int	main()
{
	ft_putnbr (42);
	ft_putchar ('\n');
	ft_putnbr (-42);
	ft_putchar ('\n');
	ft_putnbr (-2147483648);
	ft_putchar ('\n');
	ft_putnbr (2147483647);
	ft_putchar ('\n');
	ft_putnbr (0);
	ft_putchar ('\n');
	ft_putnbr (1);
	ft_putchar ('\n');
	return (0);
}*/
