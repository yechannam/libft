/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yecnam <yecnam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 18:50:30 by yecnam            #+#    #+#             */
/*   Updated: 2022/11/22 15:41:25 by yecnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*make_arr(int i, int pm, long long nb)
{
	char	*s;

	if (nb == 0)
	{
		s = (char *)malloc(sizeof(char) * 2);
		if (!s)
			return (0);
		s[0] = '0';
		s[1] = 0;
		return (s);
	}
	s = (char *)malloc(sizeof(char) * (i + 1));
	if (!s)
		return (0);
	if (pm == 1)
		s[0] = '-';
	s[i--] = 0;
	while (nb != 0)
	{
		s[i--] = 48 + nb % 10;
		nb /= 10;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char		*ss;
	int			i;
	long long	nb;
	int			pm;

	nb = (long long)n;
	i = 0;
	pm = 0;
	while (n != 0)
	{
		i++;
		n /= 10;
	}
	if (nb < 0)
	{
		i++;
		nb *= -1;
		pm = 1;
	}
	ss = make_arr(i, pm, nb);
	if (!ss)
		return (0);
	return (ss);
}
