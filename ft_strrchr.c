/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:02:10 by dperez-a          #+#    #+#             */
/*   Updated: 2023/10/06 21:11:33 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function ft_strrchr searches for the last occurrence of a character in a string and returns a
 * pointer to that character.
 * 
 * @param s The parameter "s" is a pointer to a constant character string. It represents the string in
 * which we want to search for the character "c".
 * @param c The parameter "c" is an integer representing the character to search for in the string "s".
 * It is cast to a char before comparison with the characters in the string.
 * 
 * @return The function `ft_strrchr` returns a pointer to the last occurrence of the character `c` in
 * the string `s`. If the character is found, a pointer to it is returned. If the character is not
 * found, the function returns NULL.
 */
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)(s + i));
		}
		i--;
	}
	return (NULL);
}
