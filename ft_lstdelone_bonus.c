/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 10:59:23 by dperez-a          #+#    #+#             */
/*   Updated: 2023/10/06 21:07:46 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function `ft_lstdelone` deletes a single node from a linked list and frees the memory associated
 * with it.
 * 
 * @param lst A pointer to the element in the linked list that needs to be deleted.
 * @param del A function pointer to a function that takes a void pointer as its parameter and returns
 * nothing. This function is responsible for deleting the content of the given list node.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}
