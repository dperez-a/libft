/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:24:01 by dperez-a          #+#    #+#             */
/*   Updated: 2023/11/03 12:41:17 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	size_t	i;

	if (s == NULL || f == NULL)
		return (NULL);
	new_str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
char	to_upper(unsigned int i, char c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 'a' + 'A');
    return (c);
}
int	main(void)
{
    char	str[] = "Hola, mundo!";
    char	*result;

    result = ft_strmapi(str, &to_upper);
    if (result == NULL)
        return (1);
    printf("Cadena original: %s\n", str);
    printf("Cadena modificada: %s\n", result);
    free(result);
    return (0);
}