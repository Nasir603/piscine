/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 09:08:40 by nrahimi           #+#    #+#             */
/*   Updated: 2024/07/23 09:19:10 by nrahimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0)
		return (0);
	i = 3;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}
/*#include <stdio.h>
#include <stdlib.h>
int	ft_is_prime(int nb);

int main(int argc, char **argv)
{
    int i;
    int num;

    if (argc < 2)
    {
        printf("Usage: %s <number> [<number> ...]\n", argv[0]);
        return (1);
    }
    
    for (i = 1; i < argc; i++)
    {
        num = atoi(argv[i]);
        printf("%d is %sprime\n", num, ft_is_prime(num) ? "" : "not ");
    }

    return (0);
}*/
