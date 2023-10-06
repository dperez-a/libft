/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:01:58 by dperez-a          #+#    #+#             */
/*   Updated: 2023/10/06 21:11:22 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function ft_strncmp compares two strings up to a specified number of characters and returns the
 * difference between the first differing characters.
 * 
 * @param str A pointer to the first string to be compared.
 * @param str2 The parameter `str2` is a pointer to a constant character string. It represents the
 * second string that you want to compare with the first string `str`.
 * @param c The parameter `c` in the `ft_strncmp` function represents the maximum number of characters
 * to compare between the two strings `str` and `str2`.
 * 
 * @return the difference between the first differing characters in the two strings, casted as an
 * unsigned int.
 */
int	ft_strncmp(const char *str, const char *str2, size_t c)
{
	size_t			i;
	unsigned int	diff;

	diff = 0;
	i = 0;
	while ((str[i] != '\0') && (str2[i] != '\0')
		&& (diff == 0) && (i < c))
	{
		diff = (unsigned char)str[i] - (unsigned char)str2[i];
		i++;
	}
	if ((diff == 0) && (i < c))
		diff = (unsigned char)str[i] - (unsigned char)str2[i];
	return (diff);
}
