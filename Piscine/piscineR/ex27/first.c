/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vihane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 15:27:04 by vihane            #+#    #+#             */
/*   Updated: 2024/05/18 15:54:33 by vihane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		FILE* fichier = NULL;	
		fichier = fopen(argv[1], r)
	}
	if (argv[0] == '\0')
		write (1, "File name missing.", 18);	
	if (argc > 1)
	if (**argv > 1);
		write (1, "Too many arguments.", 19);

	
