/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yecnam <yecnam@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 16:06:16 by yecnam            #+#    #+#             */
/*   Updated: 2022/11/16 18:09:02 by yecnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check(char s, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s)
			return (1);
		i++;
	}
	return (0);
}

void	make_ran(int *start, int *end, char const *s1, char const *set)
{
	while (check(s1[*start], set) && s1[*start])
		*start += 1;
	while (check(s1[*end], set) && *end >= 0)
		*end -= 1;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	int		start;
	int		end;
	int		i;

	if (!s1)
		return (0);
	start = 0;
	end = ft_strlen(s1) - 1;
	if (end < 0)
		return (ft_strdup(""));
	i = 0;
	make_ran(&start, &end, s1, set);
	if (start > end)
		return (ft_strdup(""));
	s = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!s)
		return (0);
	while (start + i <= end)
	{
		s[i] = s1[start + i];
		i++;
	}
	s[i] = 0;
	return (s);
}
/*
#include <stdio.h>

int main()
{
	printf("%zd\n", ft_strlen(""));
	printf("%s\n", ft_strtrim("",""));
	return (0);
}*/
