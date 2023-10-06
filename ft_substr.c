/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:02:24 by dperez-a          #+#    #+#             */
/*   Updated: 2023/10/06 21:11:48 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function `ft_substr` takes a string `s`, a starting index `start`, and a length `len`, and
 * returns a newly allocated substring of `s` starting at `start` and with a length of `len`.
 * 
 * @param s A pointer to the string from which to extract the substring.
 * @param start The start parameter is the index at which the substring should start in the input
 * string.
 * @param len The parameter "len" represents the length of the substring that you want to extract from
 * the input string "s".
 * 
 * @return a substring of the input string 's'.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (s_len - start < len)
		len = s_len - start;
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
