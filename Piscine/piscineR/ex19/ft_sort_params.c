/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vihane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:40:32 by vihane            #+#    #+#             */
/*   Updated: 2024/05/17 16:15:29 by vihane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

void	display_args(int argc, char **argv)
{
	int	i;
	int	j;

	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			ft_putchar(argv[j][i]);
			i++;
		}
		j++;
		ft_putchar('\n');
	}
}

int	main(int argc, char **argv)
{
	char	*temp;
	int		i;
	int		j;

	j = 1;
	while (j < argc)
	{
		i = j;
		while (ft_strcmp(argv[i], argv[i - 1]) < 0 && i > 0)
		{
			temp = argv[i - 1];
			argv[i - 1] = argv[i];
			argv[i] = temp;
			i--;
		}
		j++;
	}
	display_args(argc, argv);
	return (0);
}
