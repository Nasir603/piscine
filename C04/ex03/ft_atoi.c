/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 22:05:51 by nrahimi           #+#    #+#             */
/*   Updated: 2024/07/25 20:20:33 by nrahimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	n;
	int	sign;
	int	has_sign;

	n = 0;
	sign = 1;
	has_sign = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
		has_sign = 1;
	}
	while (*str >= '0' && *str <= '9')
	{
		n = n * 10 + (*str - '0');
		str++;
	}
	return (n * sign);
}
/*#include <stdio.h>
int main()
{
	char *s1 = " -35,7 +35,7 @@";
	int a = ft_atoi(s1);
	printf("%d", a);
	return 0;
}*/
