/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:00:05 by dperez-a          #+#    #+#             */
/*   Updated: 2023/10/06 21:09:26 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function `ft_memcpy` copies `n` bytes from the memory area pointed to by `src` to the memory
 * area pointed to by `dest`.
 * 
 * @param dest The `dest` parameter is a pointer to the destination memory where the copied data will
 * be stored.
 * @param src The `src` parameter is a pointer to the source memory location from where the data will
 * be copied.
 * @param n The parameter `n` represents the number of bytes to be copied from the source (`src`) to
 * the destination (`dest`).
 * 
 * @return a pointer to the destination memory block.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dest && !src)
		return (0);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n--)
		*d++ = *s++;
	return (dest);
}
