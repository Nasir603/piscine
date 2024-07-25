/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:19:43 by nrahimi           #+#    #+#             */
/*   Updated: 2024/07/23 11:57:38 by nrahimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;
	int	length;

	i = 0;
	length = 0;
	while (str[i] != '\0')
	{
		i++;
		length++;
	}
	return (length);
}

void	ft_strrev(char *str)
{
	int		length;
	int		i;
	char	temp;

	length = ft_strlen(str);
	i = 0;
	while (i < length / 2)
	{
		temp = str[i];
		str[i] = str[length - 1 - i];
		str[length - 1 - i] = temp;
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = ac - 1;
	if (1 < ac)
	{
		while (i > 0)
		{
			write(1, av[i], ft_strlen(av[i]));
			write(1, "\n", 1);
			i--;
		}
	}
	return (0);
}
