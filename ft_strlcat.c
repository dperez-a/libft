/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:01:32 by dperez-a          #+#    #+#             */
/*   Updated: 2023/10/06 21:11:01 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The ft_strlcat function concatenates two strings, ensuring that the resulting string does not exceed
 * a specified size.
 * 
 * @param dst A pointer to the destination string where the concatenated string will be stored.
 * @param src The `src` parameter is a pointer to a constant character string that we want to
 * concatenate to the `dst` string.
 * @param size The parameter "size" represents the size of the destination buffer, which is the maximum
 * number of characters that can be written to the destination string (including the null-terminating
 * character).
 * 
 * @return the total length of the concatenated string, which is the sum of the length of the
 * destination string and the length of the source string.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_length;
	size_t	src_length;

	src_length = ft_strlen(src);
	dest_length = ft_strlen(dst);
	j = dest_length;
	i = 0;
	if (dest_length < size - 1 && size > 0)
	{
		while (src[i] && dest_length + i < size - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	if (dest_length >= size)
		dest_length = size;
	return (dest_length + src_length);
}
