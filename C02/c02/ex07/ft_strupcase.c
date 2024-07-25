/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:24:40 by nrahimi           #+#    #+#             */
/*   Updated: 2024/07/11 14:53:23 by nrahimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
		}
		i++;
	}
}
/*int main()
{
        char str[] = "i love pizza";
	ft_strupcase(str);
	printf("\n%s", str);
	return (0);
}*/
