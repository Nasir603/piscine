/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:57:13 by nrahimi           #+#    #+#             */
/*   Updated: 2024/07/22 16:51:19 by nrahimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	f_num;

	if (nb <= 0)
	{
		return (0);
	}
	f_num = 1;
	while (f_num * f_num <= nb)
	{
		if (f_num * f_num == nb)
			return (f_num);
		f_num++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <math.h>
int main()
{
	int	 result = 120.0;
	printf("%d\n", ft_sqrt(result));
	printf("%2f\n", sqrt(120));
	return 0;
}*/
