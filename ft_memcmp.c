/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:22:19 by dperez-a          #+#    #+#             */
/*   Updated: 2023/10/27 14:51:24 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
/*int	main(void)
{
    char s1[] = "Hola";
    char s2[] = "Hola";
    size_t n = 5;
    int dest;

    dest = ft_memcmp(s1, s2, n);
    if (dest == 0)
        printf("Las cadenas son iguales\n");
    else if (dest < 0)
        printf("La cadena s1 es menor que la cadena s2\n");
    else
        printf("La cadena s1 es mayor que la cadena s2\n");
    return (0);
}*/