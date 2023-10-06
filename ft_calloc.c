/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 10:58:08 by dperez-a          #+#    #+#             */
/*   Updated: 2023/10/06 21:06:38 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The ft_calloc function allocates memory for an array of elements and initializes them to zero.
 * 
 * @param num_elements The number of elements to allocate memory for.
 * @param element_size The `element_size` parameter represents the size in bytes of each element in the
 * allocated memory block.
 * 
 * @return a pointer to the allocated memory block.
 */
void	*ft_calloc(size_t num_elements, size_t element_size)
{
	void	*ptr;

	if (num_elements > 0 && element_size > 0
		&& SIZE_MAX / num_elements < element_size)
	{
		return (NULL);
	}
	ptr = malloc(num_elements * element_size);
	if (ptr == 0)
		return (0);
	ft_memset(ptr, 0, num_elements * element_size);
	return (ptr);
}
