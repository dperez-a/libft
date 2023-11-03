/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:23:16 by dperez-a          #+#    #+#             */
/*   Updated: 2023/11/02 19:35:22 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	size_t	len;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	dest = (char *)malloc(len + 1);
	if (dest == 0)
	{
		return (0);
	}
	ft_memcpy(dest, src, len + 1);
	return (dest);
}
/*int main()
{
	char *src = "Hola";
	char *dest;
	
	dest = ft_strdup(src);
	printf("%s", dest);
}*/