/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 10:59:16 by dperez-a          #+#    #+#             */
/*   Updated: 2023/10/06 21:07:42 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function `ft_lstclear` clears a linked list by deleting each node and freeing the memory.
 * 
 * @param lst A pointer to a pointer to the first node of a linked list.
 * @param del del is a function pointer that points to a function responsible for deleting the content
 * of each node in the linked list. The function takes a void pointer as its parameter, which
 * represents the content of the node.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	while (*lst)
	{
		next = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = next;
	}
	*lst = NULL;
}
