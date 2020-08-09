/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sevita <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 15:52:09 by sevita            #+#    #+#             */
/*   Updated: 2020/08/08 18:46:51 by sevita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		validation_input(char argc, char **argv)
{
	if (argc == 2)
	{
		if (check_number(argv[1] == -1)
			return (-1);
		else
			return (1);

	}
	else if (argc == 3)
	{
		if (check_dictionary(argv[1], argv[2]) == -1)
			return (-1);
		else (1);
	}
	return (-1);
}

int		check_number(*argv)
{
	int i;

	i = 0;
	while (argv)
	{
		if (argv[i] < 0 || argv[i] > 9)
			return (-1);
		i++;
	}
	return (1);
}

int		check_dictionary(char *argv_1, char *argv_2)
{
	
}
