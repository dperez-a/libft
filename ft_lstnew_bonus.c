/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 10:59:45 by dperez-a          #+#    #+#             */
/*   Updated: 2023/10/06 21:08:55 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function `ft_lstnew` creates a new linked list element with the given content.
 * 
 * @param content The "content" parameter is a void pointer that represents the data that will be
 * stored in the new element of the linked list. It can be any type of data, as it is a generic
 * pointer.
 * 
 * @return a pointer to a newly created t_list element.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem->content = content;
	elem->next = NULL;
	return (elem);
}
