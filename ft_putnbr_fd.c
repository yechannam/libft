/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yecnam <yecnam@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 21:07:11 by yecnam            #+#    #+#             */
/*   Updated: 2022/11/13 21:18:56 by yecnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print(long long nb, int fd)
{
	char	c;

	if (nb <= 9)
	{
		c = nb + 48;
		write(fd, &c, 1);
		return ;
	}
	print(nb / 10, fd);
	c = nb % 10 + 48;
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long long	nb;

	nb = (long long)n;
	if (n < 0)
	{
		write(fd, "-", 1);
		nb *= -1;
	}
	print(nb, fd);
}
