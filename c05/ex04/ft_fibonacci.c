/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 12:35:47 by nrahimi           #+#    #+#             */
/*   Updated: 2024/07/22 23:27:52 by nrahimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 0)
	{
		return (0);
	}
	else if (index == 1)
	{
		return (1);
	}
	else
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}
/*#include <stdio.h>

int main() {
    printf("%d\n", ft_fibonacci(0));
    printf("%d\n", ft_fibonacci(1));
    printf("%d\n", ft_fibonacci(2));
    printf("%d\n", ft_fibonacci(3));
    printf("%d\n", ft_fibonacci(4));
    printf("%d\n", ft_fibonacci(5));
    printf("%d\n", ft_fibonacci(6));
    printf("%d\n", ft_fibonacci(-1));
    return 0;
}*/
