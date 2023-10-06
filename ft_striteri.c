/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:01:10 by dperez-a          #+#    #+#             */
/*   Updated: 2023/10/06 21:10:51 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function `ft_striteri` iterates through a string and applies a given function to each character,
 * along with its index.
 * 
 * @param s A pointer to a string (array of characters) that we want to iterate over.
 * @param f The parameter "f" is a function pointer that points to a function with the following
 * signature: void (*f)(unsigned int, char*). This means that "f" is a pointer to a function that takes
 * two arguments - an unsigned int and a char pointer - and returns void.
 * 
 * @return The function does not explicitly return a value. However, if the conditions in the if
 * statement are met (s is NULL or f is NULL), the function will return without performing any further
 * actions.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
