/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yecnam <yecnam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 21:54:34 by yecnam            #+#    #+#             */
/*   Updated: 2022/11/27 22:25:16 by yecnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_x(unsigned int v, int *count)
{
	char	hex[17];

	ft_strcpy(hex, "0123456789abcdef");
	if (v < 16)
	{
		write(1, &hex[v], 1);
		*count += 1;
		return ;
	}
	print_x(v / 16, count);
	write(1, &hex[v % 16], 1);
	*count += 1;
}

void	print_xx(unsigned int v, int *count)
{
	char	hex[17];

	ft_strcpy(hex, "0123456789ABCDEF");
	if (v < 16)
	{
		write(1, &hex[v], 1);
		*count += 1;
		return ;
	}
	print_xx(v / 16, count);
	write(1, &hex[v % 16], 1);
	*count += 1;
}
