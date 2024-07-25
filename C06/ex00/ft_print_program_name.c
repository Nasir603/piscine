/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 09:23:18 by nrahimi           #+#    #+#             */
/*   Updated: 2024/07/23 09:49:15 by nrahimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;
	int	length;

	length = 0;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
		length++;
	}
	return (length);
}

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		write(1, av[0], ft_strlen(av[0]));
		write(1, "\n", 1);
	}
	return (0);
}
