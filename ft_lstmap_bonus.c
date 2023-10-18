/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:21:55 by dperez-a          #+#    #+#             */
/*   Updated: 2023/10/18 12:21:57 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*changed_list;
	t_list	*temp;
	t_list	*set;

	changed_list = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		set = f(lst->content);
		temp = ft_lstnew(set);
		if (!temp)
		{
			del(set);
			ft_lstclear(&changed_list, del);
			return (NULL);
		}
		ft_lstadd_back(&changed_list, temp);
		lst = lst->next;
	}
	return (changed_list);
}
