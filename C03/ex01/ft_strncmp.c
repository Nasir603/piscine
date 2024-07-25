/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 23:25:27 by nrahimi           #+#    #+#             */
/*   Updated: 2024/07/22 09:51:26 by nrahimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n)
		return (s1[i] - s2[i]);
	return (0);
}
/*#include <stdio.h>
int main()
{
    char str1[] = "Hello";
    char str2[] = "Helium";

    // Test cases
    unsigned int n1 = 4;
    int result1 = ft_strncmp(str1, str2, n1);

    printf("Comparing first %u characters:\n", n1);
    if (result1 < 0)
    {
        printf("The first string is less than the second string.\n");
    }
    else if (result1 > 0)
    {
        printf("The first string is greater than the second string.\n");
    }
    else
    {
        printf("The strings are equal up to %u characters.\n", n1);
    }
}*/
