/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 09:03:00 by nrahimi           #+#    #+#             */
/*   Updated: 2024/07/17 10:58:36 by nrahimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power -1));
}
/*#include <stdio.h>
int main()
{
	int x = 3;
	int y = 3;

	printf("%d^%d = %d", x, y,  ft_recursive_power(x, y));
	return 0;
}*/
