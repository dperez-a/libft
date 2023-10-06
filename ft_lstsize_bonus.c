/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 10:59:51 by dperez-a          #+#    #+#             */
/*   Updated: 2023/10/06 21:09:06 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function `ft_lstsize` calculates the size of a linked list.
 * 
 * @param lst The parameter "lst" is a pointer to the head of a linked list.
 * 
 * @return the size of the linked list.
 */
int	ft_lstsize(t_list *lst)
{
	int	cur;

	cur = 0;
	while (lst)
	{
		cur++;
		lst = lst->next;
	}
	return (cur);
}
