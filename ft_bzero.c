/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:19:55 by dperez-a          #+#    #+#             */
/*   Updated: 2023/10/27 12:34:23 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*aux;

	aux = s;
	i = 0;
	while (i < n)
	{
		aux[i] = 0;
		i++;
	}
}
/*int	main()
{
	char s[] = "hola";
	size_t n = 5;
	
	ft_bzero(s, n);
	printf("%s",s);
}*/