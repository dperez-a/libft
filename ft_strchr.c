/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:00:58 by dperez-a          #+#    #+#             */
/*   Updated: 2023/10/06 21:10:40 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function ft_strchr searches for the first occurrence of a character in a string and returns a
 * pointer to that character.
 * 
 * @param s The parameter "s" is a pointer to a constant character string. It represents the string in
 * which we want to search for the character "c".
 * @param c The parameter "c" is of type "int" and represents the character that we are searching for
 * in the string "s". It is casted to type "char" before comparison with the characters in the string.
 * 
 * @return The function `ft_strchr` returns a pointer to the first occurrence of the character `c` in
 * the string `s`. If the character is found, the function returns a pointer to that character. If the
 * character is not found, the function returns NULL.
 */
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			return ((char *)(s + i));
		}
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (NULL);
}
