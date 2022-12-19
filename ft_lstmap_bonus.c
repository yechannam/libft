/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yecnam <yecnam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:49:29 by yecnam            #+#    #+#             */
/*   Updated: 2022/11/22 17:20:05 by yecnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*first;
	void	*temp;

	first = 0;
	while (lst)
	{
		temp = f(lst->content);
		if (!temp)
		{
			ft_lstclear(&first, del);
			return (0);
		}
		new_lst = ft_lstnew(temp);
		if (!new_lst)
		{
			ft_lstclear(&first, del);
			del(temp);
			return (0);
		}
		ft_lstadd_back(&first, new_lst);
		lst = lst->next;
	}
	return (first);
}
