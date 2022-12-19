/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yecnam <yecnam@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:41:19 by yecnam            #+#    #+#             */
/*   Updated: 2022/12/09 21:13:17 by yecnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *s)
{
	int	size;

	size = 0;
	if (!s)
		return (0);
	while (s[size] != 0)
		size++;
	return (size);
}

int	ft_strchr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*make_empty(void)
{
	char	*s;

	s = (char *)malloc(sizeof(char) * 1);
	if (!s)
		return (0);
	s[0] = '\0';
	return (s);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int		len1;
	int		len2;
	int		i;

	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!s1 || !s2 || !str)
		return (0);
	while (i < len1 && s1)
	{
		str[i] = s1[i];
		i++;
	}
	while (i < len1 + len2 && s2)
	{
		str[i] = s2[i - len1];
		i++;
	}
	str[i] = '\0';
	free(s1);
	return (str);
}
