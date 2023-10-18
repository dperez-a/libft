/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:22:14 by dperez-a          #+#    #+#             */
/*   Updated: 2023/10/18 12:22:16 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	int				i;
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	i = 0;
	while (n > 0)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)(str + i));
		i++;
		n--;
	}
	return (NULL);
}
