/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 10:59:06 by dperez-a          #+#    #+#             */
/*   Updated: 2023/10/06 21:07:21 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function `ft_lstadd_back` adds a new element to the end of a linked list.
 * 
 * @param lst A pointer to a pointer to the first element of a linked list.
 * @param new The "new" parameter is a pointer to a t_list structure that we want to add to the end of
 * the linked list.
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst)
		ft_lstlast(*lst)->next = new;
	else
		*lst = new;
}
