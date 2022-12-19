/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yecnam <yecnam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 21:53:08 by yecnam            #+#    #+#             */
/*   Updated: 2022/11/28 10:49:42 by yecnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_c(char c, int *count)
{
	write(1, &c, 1);
	*count += 1;
}

void	print_s(char *s, int *count)
{
	int	i;

	i = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		*count += 6;
		return ;
	}
	while (s[i])
	{
		write(1, &s[i], 1);
		*count += 1;
		i++;
	}
}

void	print_p(unsigned long v, int *count)
{
	char	hex[17];

	ft_strcpy(hex, "0123456789abcdef");
	if (v < 16)
	{
		write(1, &hex[v], 1);
		*count += 1;
		return ;
	}
	print_p(v / 16, count);
	*count += 1;
	write(1, &hex[v % 16], 1);
}

void	print_d(int num, int *count)
{
	char		c;
	long long	n;

	n = (long long)num;
	if (n < 0)
	{
		write(1, "-", 1);
		*count += 1;
		n *= -1;
	}
	if (n <= 9)
	{
		c = n % 10 + 48;
		write(1, &c, 1);
		*count += 1;
		return ;
	}
	c = n % 10 + 48;
	print_d((int)(n /= 10), count);
	write(1, &c, 1);
	*count += 1;
}

void	print_u(unsigned int n, int *count)
{
	char	c;

	if (n <= 9)
	{
		c = n % 10 + 48;
		write(1, &c, 1);
		*count += 1;
		return ;
	}
	c = n % 10 + 48;
	print_d(n /= 10, count);
	*count += 1;
	write(1, &c, 1);
}
