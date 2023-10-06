/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:00:16 by dperez-a          #+#    #+#             */
/*   Updated: 2023/10/06 21:09:36 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function ft_memset sets a specified number of bytes in a memory block to a specified value.
 * 
 * @param b The parameter "b" is a void pointer that represents the memory block to be filled with a
 * specific value.
 * @param c The parameter "c" is an integer representing the value to be set. It will be casted to an
 * unsigned char before being assigned to each byte in the memory block.
 * @param len The parameter "len" represents the length of the memory block that needs to be filled
 * with the specified value.
 * 
 * @return a pointer to the memory block that was passed as the first argument.
 */
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (len--)
		*ptr++ = (unsigned char)c;
	return (b);
}
