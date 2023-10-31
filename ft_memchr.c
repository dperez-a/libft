/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:22:14 by dperez-a          #+#    #+#             */
/*   Updated: 2023/10/27 14:14:16 by dani_mm__        ###   ########.fr       */
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
/*int main()
{
	char str[] = "Hola";
	int c = 'l';
	size_t n = 4;
	void *ptr;
	
	ptr = ft_memchr(str, c, n);
	printf("%s", (char *)ptr);
}*/