/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 21:15:10 by nrahimi           #+#    #+#             */
/*   Updated: 2024/07/22 21:16:37 by nrahimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	convert_to_string(unsigned int n, char *buffer)
{
	int	index;

	index = 0;
	if (n == 0)
	{
		buffer[index++] = '0';
	}
	else
	{
		while (n > 0)
		{
			buffer[index] = (n % 10) + '0';
			index++;
			n /= 10;
		}
	}
	return (index);
}

void	reverse_string(char *str, int length)
{
	int		start;
	int		end;
	char	temp;

	start = 0;
	end = length - 1;
	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}

void	ft_putnbr(int nb)
{
	char			i[12];
	unsigned int	n;
	int				length;

	if (nb < 0)
	{
		write(1, "-", 1);
		n = -nb;
	}
	else
	{
		n = nb;
	}
	length = convert_to_string(n, i);
	reverse_string(i, length);
	write(1, i, length);
}
/*
int	main(void)
{
	ft_putnbr(42);
	write(1, "\n", 1);
	ft_putnbr(-12345);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	return (0);
}*/
