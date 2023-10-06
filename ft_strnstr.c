/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:02:04 by dperez-a          #+#    #+#             */
/*   Updated: 2023/10/06 21:11:29 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function `ft_strnstr` searches for the first occurrence of a substring `needle` in a string
 * `haystack` within a specified length `len`.
 * 
 * @param haystack A pointer to the string in which to search for the needle.
 * @param needle The `needle` parameter is a pointer to the substring that we are searching for within
 * the `haystack` string.
 * @param len The parameter `len` represents the maximum number of characters to search in the
 * `haystack` string.
 * 
 * @return The function `ft_strnstr` returns a pointer to the first occurrence of the `needle` string
 * within the `haystack` string, up to a maximum length of `len`. If the `needle` string is empty, it
 * returns a pointer to the `haystack` string. If the `needle` string is not found within the
 * `haystack` string, it returns `NULL
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	needle_len = 0;
	while (needle[needle_len])
		needle_len++;
	while (haystack[i] && i + needle_len <= len)
	{
		j = 0;
		while (needle[j] && haystack[i + j] == needle[j])
			j++;
		if (!needle[j])
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
