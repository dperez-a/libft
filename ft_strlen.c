/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:01:45 by dperez-a          #+#    #+#             */
/*   Updated: 2023/10/06 21:11:11 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function `ft_strlen` calculates the length of a string by iterating through each character until
 * it reaches the null terminator.
 * 
 * @param s The parameter "s" is a pointer to a character array (string).
 * 
 * @return the length of the string `s` as a `size_t` value.
 */
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
