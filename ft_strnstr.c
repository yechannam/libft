/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yecnam <yecnam@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 20:28:05 by yecnam            #+#    #+#             */
/*   Updated: 2022/11/16 18:20:02 by yecnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	find(const char *s1, const char *s2, size_t i, size_t len)
{
	size_t	save;
	size_t	j;

	save = i;
	j = 0;
	while (s2[j])
	{
		if (s2[j] == s1[i] && s1[i] && len > i)
		{
			j++;
			i++;
		}
		else
			j++;
	}
	if (save + j == i)
		return (save);
	else
		return (-1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*s;
	size_t	i;

	s = (char *)haystack;
	i = 0;
	if (!needle[0])
		return (s);
	while ((size_t)i < len && haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			if (find(haystack, needle, i, len) != -1)
			{
				while (i--)
					s++;
				return (s);
			}
		}
		i++;
	}
	return (0);
}
