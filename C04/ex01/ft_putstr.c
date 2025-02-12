/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 19:12:40 by nrahimi           #+#    #+#             */
/*   Updated: 2024/07/22 13:30:59 by nrahimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	*s;

	s = str;
	while (*s != '\0')
	{
		write(1, s, 1);
		s++;
	}
}
/*
int main()
{
	char	*i;

	i = "ad";
	ft_putstr(i);
	return 0;
}*/
