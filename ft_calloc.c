/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:20:05 by dperez-a          #+#    #+#             */
/*   Updated: 2023/10/18 12:20:07 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	void	*ptr;

	if (num_elements > 0 && element_size > 0
		&& SIZE_MAX / num_elements < element_size)
		return (NULL);
	ptr = malloc(num_elements * element_size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, num_elements * element_size);
	return (ptr);
}
