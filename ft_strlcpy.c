/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:01:38 by dperez-a          #+#    #+#             */
/*   Updated: 2023/10/06 21:11:06 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function `ft_strlcpy` copies a string from `src` to `dst` with a maximum size of `size`, and
 * returns the length of the copied string.
 * 
 * @param dst The `dst` parameter is a pointer to the destination string where the copied string will
 * be stored.
 * @param src The parameter "src" is a pointer to a constant character string, which is the source
 * string that we want to copy.
 * @param size The parameter "size" is the maximum number of characters that can be copied from the
 * source string to the destination string, including the null terminator.
 * 
 * @return the length of the source string, which is the number of characters copied into the
 * destination string.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}
