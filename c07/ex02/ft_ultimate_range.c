/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:21:30 by nrahimi           #+#    #+#             */
/*   Updated: 2024/07/25 15:30:44 by nrahimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*array;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	array = (int *)malloc(sizeof(int) * size);
	if (array == NULL)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	*range = array;
	return (size);
}
/*
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int main() {
    int min = 5;
    int max = 15;
    int *range;
    int size = ft_ultimate_range(&range, min, max);
    if (size > 0) {
        for (int i = 0; i < size; i++)
            printf("%d ", range[i]);
        free(range);
    }
    return 0;
}*/
