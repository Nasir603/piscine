/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 22:02:33 by nrahimi           #+#    #+#             */
/*   Updated: 2024/07/22 22:02:39 by nrahimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) <= 1)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base_recursive(unsigned int n, char *base, int base_length)
{
	if (n >= (unsigned int)base_length)
	{
		ft_putnbr_base_recursive(n / base_length, base, base_length);
		ft_putnbr_base_recursive(n % base_length, base, base_length);
	}
	else
	{
		ft_putchar(base[n]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	n;
	int				base_length;

	if (!is_valid_base(base))
		return ;
	base_length = ft_strlen(base);
	if (nbr < 0)
	{
		ft_putchar('-');
		n = -nbr;
	}
	else
	{
		n = nbr;
	}
	ft_putnbr_base_recursive(n, base, base_length);
}

/*int main(void)
{
	write(1, "Decimal: ", 9);
	ft_putnbr_base(42, "0123456789");
	write(1, "\n", 1);
	write(1, "Binary: ", 8);
	ft_putnbr_base(42, "01");
	write(1, "\n", 1);
	write(1, "Hexadecimal: ", 13);
	ft_putnbr_base(42, "0123456789ABCDEF");
	write(1, "\n", 1);
	write(1, "Octal (poneyvif): ", 18);
	ft_putnbr_base(42, "poneyvif");
	write(1, "\n", 1);
	write(1, "Negative Decimal: ", 18);
	ft_putnbr_base(-123, "0123456789");
	write(1, "\n", 1);
	write(1, "Invalid base (+): ", 18);
	ft_putnbr_base(42, "01234+56789");
	write(1, "\n", 1);
	write(1, "Invalid base (duplicate): ", 26);
	ft_putnbr_base(42, "1123456789");
	write(1, "\n", 1);
	return (0);
}
*/
