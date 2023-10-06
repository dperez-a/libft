/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 10:59:11 by dperez-a          #+#    #+#             */
/*   Updated: 2023/10/06 21:07:38 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function `ft_lstadd_front` adds a new node to the front of a linked list.
 * 
 * @param lst A pointer to a pointer to the first node of a linked list.
 * @param new The "new" parameter is a pointer to a t_list structure that represents the new node to be
 * added to the front of the list.
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
