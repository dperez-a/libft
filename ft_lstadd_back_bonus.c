/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:21:14 by dperez-a          #+#    #+#             */
/*   Updated: 2023/11/03 13:09:49 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst)
		ft_lstlast(*lst)->next = new;
	else
		*lst = new;
}
#include <stdio.h>
#include "libft.h"

int	main(void)
{
    t_list	*lst;
    t_list	*new_node;

    // Creamos la lista enlazada
    lst = ft_lstnew("Hola", sizeof("Hola"));
    ft_lstadd_front(&lst, ft_lstnew("Mundo", sizeof("Mundo")));
    ft_lstadd_front(&lst, ft_lstnew("!", sizeof("!")));

    // Agregamos un nuevo nodo al final de la lista
    new_node = ft_lstnew("Adiós", sizeof("Adiós"));
    ft_lstadd_back(&lst, new_node);

    // Imprimimos el contenido de la lista
    while (lst != NULL)
    {
        printf("%s\n", (char *)lst->content);
        lst = lst->next;
    }

    return (0);
}