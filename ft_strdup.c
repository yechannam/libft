/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yecnam <yecnam@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 22:23:43 by yecnam            #+#    #+#             */
/*   Updated: 2022/11/12 12:13:52 by yecnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s;
	int		i;

	i = 0;
	while (s1[i])
		i++;
	s = (char *)malloc(sizeof(char) * (i + 1));
	if (!s)
		return (0);
	s[i--] = 0;
	while (i != -1)
	{
		s[i] = s1[i];
		i--;
	}
	return (s);
}
