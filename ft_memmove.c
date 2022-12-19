/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yecnam <yecnam@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:40:22 by yecnam            #+#    #+#             */
/*   Updated: 2022/11/16 17:23:15 by yecnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*s1;
	const unsigned char	*s2;

	if (dst == 0 && src == 0)
		return (0);
	s1 = dst;
	s2 = src;
	i = 0;
	if (s1 < s2)
	{
		while (i < len)
		{
			s1[i] = s2[i];
			i++;
		}
	}
	else
	{
		while (len--)
			s1[len] = s2[len];
	}
	return (dst);
}
/*
int main()
{
	char c[50] = "abcde";
	ft_memmove(c, ((void *)0), 1);
}*/
