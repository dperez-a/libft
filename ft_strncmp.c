/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:24:07 by dperez-a          #+#    #+#             */
/*   Updated: 2023/11/03 12:49:57 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str, const char *str2, size_t c)
{
	size_t			i;
	unsigned int	diff;

	diff = 0;
	i = 0;
	while ((str[i] != '\0') && (str2[i] != '\0')
		&& (diff == 0) && (i < c))
	{
		diff = (unsigned char)str[i] - (unsigned char)str2[i];
		i++;
	}
	if ((diff == 0) && (i < c))
		diff = (unsigned char)str[i] - (unsigned char)str2[i];
	return (diff);
}
/*int main()
{
	char str1[] = "Hola";
	char str2[] = "Hola";
	size_t c ;
	int result;

	c = 5;
	result = ft_strncmp(str1, str2, c);
	printf("%d", result);
	return(0);
}*/
/*int	main(void)
{
    char	str1[] = "Hola, mundooo!";
    char	str2[] = "Hola, mundoo!";
    int	result;

    result = ft_strncmp(str1, str2, 5);
    if (result < 0)
        printf("Los primeros 5 caracteres de la cadena 1 son menores que los de la cadena 2\n");
    else if (result > 0)
        printf("Los primeros 5 caracteres de la cadena 1 son mayores que los de la cadena 2\n");
    else
        printf("Los primeros 5 caracteres de la cadena 1 son iguales a los de la cadena 2\n");
    return (0);
}*/