/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:01:04 by dperez-a          #+#    #+#             */
/*   Updated: 2023/10/06 21:10:46 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function `ft_strdup` takes a string as input and returns a dynamically allocated copy of that
 * string.
 * 
 * @param src The parameter "src" is a pointer to a constant character array, which represents the
 * source string that we want to duplicate.
 * 
 * @return The function `ft_strdup` returns a pointer to a newly allocated memory block containing a
 * copy of the string `src`.
 */
char	*ft_strdup(const char *src)
{
	char	*dest;
	size_t	len;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	dest = (char *)malloc(len + 1);
	if (dest == 0)
	{
		return (0);
	}
	memcpy(dest, src, len + 1);
	return (dest);
}
