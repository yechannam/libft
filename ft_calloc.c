/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yecnam <yecnam@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 21:50:24 by yecnam            #+#    #+#             */
/*   Updated: 2022/12/19 19:30:54 by yecnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*a;
	long long		sum;
	long long		c;
	long long		s;

	c = (long long)count;
	s = (long long)size;
	sum = c * s;
	a = (unsigned char *)malloc(sum);
	if (!a)
		return (0);
	while (sum--)
		a[sum] = 0;
	a[0] = 0;
	return (a);
}
