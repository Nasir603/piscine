/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 16:29:22 by nrahimi           #+#    #+#             */
/*   Updated: 2024/07/25 16:34:09 by nrahimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	calculate_total_length(int size, char **strs, char *sep)
{
	int	total_len;
	int	i;

	total_len = 0;
	i = 0;
	while (i < size)
		total_len += ft_strlen(strs[i++]);
	total_len += ft_strlen(sep) * (size - 1);
	return (total_len);
}

void	copy_strs_with_sep(char *result, char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	k;

	k = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			result[k++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
				result[k++] = sep[j++];
		}
		i++;
	}
	result[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_len;
	char	*result;

	if (size == 0)
	{
		result = (char *)malloc(sizeof(char));
		if (result)
			result[0] = '\0';
		return (result);
	}
	total_len = calculate_total_length(size, strs, sep);
	result = (char *)malloc(sizeof(char) * (total_len + 1));
	if (!result)
		return (NULL);
	copy_strs_with_sep(result, strs, sep, size);
	return (result);
}
/*#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int main() {
    char *strs[] = {"Hello", "42", "World"};
    char *sep = ", ";
    char *result = ft_strjoin(3, strs, sep);
    if (result) {
        printf("Joined: %s\n", result);
        free(result);
    }
    return 0;
}*/
