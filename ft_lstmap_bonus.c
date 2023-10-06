/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 10:59:37 by dperez-a          #+#    #+#             */
/*   Updated: 2023/10/06 21:08:02 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function `ft_lstmap` takes a linked list `lst` and applies the function `f` to each element,
 * creating a new linked list with the modified elements.
 * 
 * @param lst A pointer to the first node of a linked list.
 * @param f f is a function pointer that takes a void pointer as input and returns a void pointer. It
 * is used to apply a transformation function to each element of the linked list.
 * @param del The `del` parameter is a function pointer that points to a function responsible for
 * deleting the content of a node in the linked list.
 * 
 * @return a pointer to the head of the changed_list.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*changed_list;
	t_list	*temp;
	t_list	*set;

	changed_list = NULL;
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
