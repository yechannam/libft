/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yecnam <yecnam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:57:10 by yecnam            #+#    #+#             */
/*   Updated: 2022/11/22 15:20:37 by yecnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*cp;
	size_t	i;
	size_t	size;

	size = 0;
	while (s[size])
		size++;
	i = 0;
	if (size < start)
		return (ft_strdup(""));
	if (len >= size - start)
		len = size - start;
	cp = (char *)malloc(sizeof(char) * (len + 1));
	if (!cp)
		return (0);
	while (i < len && (size_t)start + i < size)
	{
		cp[i] = s[(size_t)start + i];
		i++;
	}
	cp[i] = 0;
	return (cp);
}
