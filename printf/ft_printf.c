/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yecnam <yecnam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:01:10 by yecnam            #+#    #+#             */
/*   Updated: 2022/11/28 10:57:08 by yecnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_printf(char *s)
{
	if (*s == '%')
	{
		s++;
		if (*s == 'c')
			return (1);
		else if (*s == 's')
			return (2);
		else if (*s == 'p')
			return (3);
		else if (*s == 'd')
			return (4);
		else if (*s == 'i')
			return (5);
		else if (*s == 'u')
			return (6);
		else if (*s == 'x')
			return (7);
		else if (*s == 'X')
			return (8);
		else if (*s == '%')
			return (9);
		else
			return (-1);
	}
	return (0);
}

void	print(va_list ap, char *s, int *count)
{
	if (check_printf(s) == 1)
		print_c(va_arg(ap, int), count);
	else if (check_printf(s) == 2)
		print_s(va_arg(ap, char *), count);
	else if (check_printf(s) == 3)
	{
		write(1, "0x", 2);
		*count += 2;
		print_p(va_arg(ap, unsigned long), count);
	}
	else if (check_printf(s) == 4)
		print_d(va_arg(ap, int), count);
	else if (check_printf(s) == 5)
		print_d(va_arg(ap, int), count);
	else if (check_printf(s) == 6)
		print_u(va_arg(ap, unsigned int), count);
	else if (check_printf(s) == 7)
		print_x(va_arg(ap, unsigned int), count);
	else if (check_printf(s) == 8)
		print_xx(va_arg(ap, unsigned int), count);
	else if (check_printf(s) == 9)
	{
		write(1, "%", 1);
		*count += 1;
	}
}

int	ft_printf(const char *s, ...)
{
	int		count;
	int		i;
	va_list	ap;
	char	*ss;

	count = 0;
	ss = (char *)s;
	i = 0;
	va_start(ap, s);
	while (ss[i])
	{
		if (check_printf(&ss[i]))
			print(ap, &ss[i++], &count);
		else if (check_printf(&ss[i]) == -1)
			return (-1);
		else
		{
			write(1, &ss[i], 1);
			count++;
		}
		i++;
	}
	va_end(ap);
	return (count);
}
