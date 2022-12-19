/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yecnam <yecnam@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:03:11 by yecnam            #+#    #+#             */
/*   Updated: 2022/11/16 17:07:10 by yecnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*temp;
	char	*save;

	save = 0;
	temp = (char *)s;
	while (*temp)
	{
		if (*temp == (char)c)
			save = temp;
		temp++;
	}
	if ((char)c == 0)
		return (temp);
	return (save);
}
