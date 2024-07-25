/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 14:24:41 by nrahimi           #+#    #+#             */
/*   Updated: 2024/07/25 15:05:47 by nrahimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dup;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	dup = (char *)malloc(sizeof(char) * (i + 1));
	if (dup == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
#include <stdio.h>

char *ft_strdup(char *src);

int main()
{
	char src[] = "Hello, World!";
	char *dup = ft_strdup(src);
	if (dup) {
		printf("Original: %s\nDuplicate: %s\n", src, dup);
		free(dup);
	}	
	return 0;
}*/
