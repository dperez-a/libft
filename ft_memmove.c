/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:22:30 by dperez-a          #+#    #+#             */
/*   Updated: 2023/10/31 18:53:13 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
/*int main(void)
{
	size_t len;
	char src[] = "Hola";
	char dst[] = "Adios";
	
	len = 5;
	src[len] = '\0';
	printf("Original: %s\n", src);
	printf("Original : %s\n", dst);
	ft_memmove(dst, src, len);
	printf("Copia: %s\n", src);
	printf("Copia : %s\n", dst);
	return (0);
}*/