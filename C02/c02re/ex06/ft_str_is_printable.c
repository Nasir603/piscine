/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 10:42:09 by nrahimi           #+#    #+#             */
/*   Updated: 2024/07/11 14:49:24 by nrahimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int main()
{
        char *str1 = "Hello, World!";
	char *str2 = "Hello,\t World!";
        int result = ft_str_is_printable(str1);
        if (result)
                printf("the strings are printable.\n");
        else
                printf("The strings are not printable.\n");
        return (0);
}*/
