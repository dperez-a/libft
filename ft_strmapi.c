/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:01:52 by dperez-a          #+#    #+#             */
/*   Updated: 2023/10/06 21:11:17 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function `ft_strmapi` takes a string `s` and applies a function `f` to each character, returning
 * a new string with the modified characters.
 * 
 * @param s A pointer to a null-terminated string that we want to apply the function `f` to.
 * @param f The parameter `f` is a function pointer that takes two arguments: an unsigned integer
 * `unsigned int` and a character `char`. The function `f` is expected to return a character `char`.
 * 
 * @return a pointer to a new string that has been created by applying the function `f` to each
 * character of the input string `s`.
 */
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
