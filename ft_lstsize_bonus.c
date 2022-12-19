/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yecnam <yecnam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 18:47:10 by yecnam            #+#    #+#             */
/*   Updated: 2022/11/22 12:51:27 by yecnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
/*
#include <stdio.h>
int main()
{
	t_list *new;
	t_list *new2;
	t_list *new3;
	new = ft_lstnew("abcd");
	new2 = ft_lstnew("abcd");
	new3 = ft_lstnew("aaa");
	new->next = new2;
	ft_lstadd_front(&new, new3);
	printf("%d", ft_lstsize(new));
	printf("%s", new->content);
}*/