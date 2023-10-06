/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:00:09 by dperez-a          #+#    #+#             */
/*   Updated: 2023/10/06 21:09:32 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function `ft_memmove` copies a block of memory from source to destination, handling overlapping
 * memory regions correctly.
 * 
 * @param dst The destination pointer where the copied data will be stored.
 * @param src A pointer to the source memory location from where the data will be copied.
 * @param len The parameter `len` represents the number of bytes to be copied from the source memory
 * location (`src`) to the destination memory location (`dst`).
 * 
 * @return a pointer to the destination memory block (dst).
 */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	if (len == 0)
		return (dst);
	if (dst > src)
	{
		i = (int)len - 1;
		while (i >= 0)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i--;
		}
	}
	else if (dst < src)
	{
		i = 0;
		while (i < (int)len)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dst);
}
