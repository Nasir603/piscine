/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 16:22:14 by nrahimi           #+#    #+#             */
/*   Updated: 2024/07/22 10:54:53 by nrahimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*t;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str != '\0')
	{
		s = str;
		t = to_find;
		while (*s != '\0' && *t != '\0' && *s == *t)
		{
			s++;
			t++;
		}
		if (*t == '\0')
		{
			return (str);
		}
		str++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main() {
    char haystack[] = "i love it";
    char needle[10] = "love it";
    char *result = ft_strstr(haystack, needle);

    if (result != NULL) {
        printf("Found: %s\n", result);
    } else {
        printf("Not found\n");
    }

    return 0;
}*/
