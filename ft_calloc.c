/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:20:05 by dperez-a          #+#    #+#             */
/*   Updated: 2023/10/27 12:36:08 by dani_mm__        ###   ########.fr       */
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
/*int	main()
{
    size_t num_elements = 5;
    size_t element_size = 2;
    void *ptr;
    
    ptr = ft_calloc(5,2);
    printf("%s", (char *)ptr);
}*/