/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yecnam <yecnam@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:43:23 by yecnam            #+#    #+#             */
/*   Updated: 2022/11/14 19:34:42 by yecnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*s1;
	const unsigned char	*s2;

	if (dst == 0 && src == 0 && n > 0)
		return (0);
	s1 = dst;
	s2 = src;
	while (n--)
		*s1++ = *s2++;
	return (dst);
}
/*
#include <stdio.h>

int main()
{
	char *ds;
   	ds = (char *)malloc(sizeof(char) * 6);
	ds	= "abcd";
	char sr[] = "11111";

	ft_memcpy(ds, sr, 3);
	printf("%s", ds);
	return (0);
}*/
