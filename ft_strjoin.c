/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:01:21 by dperez-a          #+#    #+#             */
/*   Updated: 2023/10/06 21:10:56 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function `ft_strjoin` concatenates two strings and returns the result.
 * 
 * @param s1 A pointer to the first string to be joined.
 * @param s2 The parameter `s2` is a pointer to a constant character string. It represents the second
 * string that you want to join with the first string `s1`.
 * 
 * @return The function `ft_strjoin` returns a pointer to a newly allocated string that is the
 * concatenation of `s1` and `s2`.
 */
char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	total_len;
	char	*result;

	len1 = strlen(s1);
	len2 = strlen(s2);
	total_len = len1 + len2;
	if (!s1 || !s2)
		return (NULL);
	result = (char *)malloc(total_len + 1);
	if (!result)
		return (NULL);
	strcpy(result, s1);
	strcat(result, s2);
	return (result);
}
