/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:00:00 by dperez-a          #+#    #+#             */
/*   Updated: 2023/10/06 21:09:22 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function `ft_memcmp` compares the first `n` bytes of two memory areas `s1` and `s2` and returns
 * the difference between the first differing bytes, or 0 if they are equal.
 * 
 * @param s1 A pointer to the first memory block to be compared.
 * @param s2 The parameter `s2` is a pointer to the second memory block that you want to compare.
 * @param n The parameter `n` represents the number of bytes to compare between the two memory blocks
 * `s1` and `s2`.
 * 
 * @return an integer value. If the comparison of the memory blocks pointed to by s1 and s2 reveals a
 * difference, the function returns the difference between the first differing bytes (*p1 - *p2). If
 * the memory blocks are equal, the function returns 0.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (n-- > 0)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}
