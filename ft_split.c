/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yecnam <yecnam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 18:05:38 by yecnam            #+#    #+#             */
/*   Updated: 2022/11/22 19:05:04 by yecnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*make_small(char const *s, int i, int save)
{
	int		j;
	char	*small;

	small = (char *)malloc(sizeof(char) * (i - save + 1));
	if (!small)
		return (0);
	j = 0;
	while (save + j < i)
	{
		small[j] = s[save + j];
		j++;
	}
	small[j] = 0;
	return (small);
}

int	check_big(char const *s, char c)
{
	int	i;
	int	check_size;

	check_size = 1;
	i = 0;
	if (s[i] == 0)
		return (0);
	if (s[i] == c)
		check_size--;
	while (s[i])
	{
		if (s[i] == c)
		{
			while (s[i] == c && s[i])
				i++;
			check_size++;
		}
		else
			i++;
	}
	if (s[i - 1] == c)
		check_size--;
	return (check_size);
}

int	split_str(char const *s, char c, char **arr, int i)
{
	int	size;
	int	save;

	size = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			save = i;
			while (s[i] != c && s[i])
				i++;
			arr[size] = make_small(s, i, save);
			if (arr[size] == 0)
			{
				while (size >= 0)
					free(arr[size--]);
				return (0);
			}
			size++;
		}
	}
	arr[size] = 0;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;

	arr = (char **)malloc(sizeof(char *) * (check_big(s, c) + 1));
	if (!arr)
		return (0);
	i = 0;
	if (!(split_str(s, c, arr, i)))
	{
		free(arr);
		return (0);
	}
	return (arr);
}
/*
int main()
{
	int i = 0;
	char **dd = ft_split("xxxxxxxxhelxlxo!xxxx xxxx", ' ');
	while (dd[i])
	{
		printf("%s\n", dd[i]);
		i++;
	}
	return (0);
}*/