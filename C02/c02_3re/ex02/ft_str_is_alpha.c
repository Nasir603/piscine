/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:38:48 by nrahimi           #+#    #+#             */
/*   Updated: 2024/07/23 08:44:54 by nrahimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*#include <stdio.h>
#include <unistd.h>
int main()
{
	char *str = "abcdefg";
	int result = ft_str_is_alpha(str);
	if (result == 1)
		write(1, "Alphabetic", 10);
	else
		write(1, "not alphabetic", 14);
	return 0;
}*/
