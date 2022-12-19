/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yecnam <yecnam@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:52:12 by yecnam            #+#    #+#             */
/*   Updated: 2022/11/12 14:54:54 by yecnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	size_d;
	size_t	size_s;
	size_t	i;

	i = 0;
	size_d = 0;
	size_s = 0;
	while (src[size_s])
		size_s++;
	while (dst[size_d])
		size_d++;
	if (dstsize == 0)
		return (size_s);
	while (i + size_d < dstsize - 1 && src[i])
	{
		dst[size_d + i] = src[i];
		i++;
	}
	dst[size_d + i] = 0;
	if (dstsize > size_d)
		return (size_d + size_s);
	return (dstsize + size_s);
}
