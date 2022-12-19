/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yecnam <yecnam@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 21:50:24 by yecnam            #+#    #+#             */
/*   Updated: 2022/11/14 19:12:27 by yecnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*a;
	size_t			sum;

	sum = count * size;
	a = (unsigned char *)malloc(sum);
	if (!a)
		return (0);
	while (sum--)
		a[sum] = 0;
	a[0] = 0;
	return (a);
}
