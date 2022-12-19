/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yecnam <yecnam@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 20:01:16 by yecnam            #+#    #+#             */
/*   Updated: 2022/12/19 19:34:04 by yecnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ss;
	int		i;

	i = 0;
	while (s[i])
		i++;
	ss = (char *)malloc(sizeof(char) * (i + 1));
	if (!ss)
		return (0);
	ss[i--] = 0;
	while (i >= 0)
	{
		ss[i] = f((unsigned int)i, s[i]);
		i--;
	}
	return (ss);
}
