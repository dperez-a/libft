/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 10:59:28 by dperez-a          #+#    #+#             */
/*   Updated: 2023/10/06 21:07:51 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function `ft_lstiter` iterates through a linked list and applies a given function `f` to each
 * element's content.
 * 
 * @param lst A pointer to the first node of a linked list.
 * @param f f is a function pointer that points to a function that takes a void pointer as its
 * parameter and returns void.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
