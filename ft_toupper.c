/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:24:42 by dperez-a          #+#    #+#             */
/*   Updated: 2023/11/03 12:43:38 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*int	main()
{
	int c;
	int d;
	
	c = 'a';
	d = 'x';
	printf("%c", ft_toupper(c));
	printf("\n");
	printf("%c", ft_toupper(d));
}*/