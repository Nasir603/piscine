/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:10:45 by nrahimi           #+#    #+#             */
/*   Updated: 2024/07/25 15:20:02 by nrahimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
	{
		return (NULL);
	}
	range = (int *)malloc(sizeof(int) * (max - min));
	if (range == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
/*#include <stdio.h>
int *ft_range(int min, int max);

int main() {
    int min = 3;
    int max = 10;
    int *range = ft_range(min, max);
    if (range) {
        for (int i = 0; i < max - min; i++)
            printf("%d ", range[i]);
        free(range);
    }
    return 0;
}
*/
