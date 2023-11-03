/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:23:25 by dperez-a          #+#    #+#             */
/*   Updated: 2023/11/03 12:18:49 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*void	ft_striteri(char *s, void (*f)(unsigned int, char*));

void	print_char(unsigned int i, char *c)
{
    printf("Caracter en la posición %d: %c\n", i, *c);
}

int	main(void)
{
    char	str[] = "Hola, mundo!";

    ft_striteri(str, &print_char);
    return (0);
}*/