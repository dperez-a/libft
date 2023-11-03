/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:24:13 by dperez-a          #+#    #+#             */
/*   Updated: 2023/11/03 12:54:21 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
/*int main()
{
	char haystack[] = "Hola mundo";
	char needle[] = "mundo";
	size_t len = 11;
	char *result;
	
	result = ft_strnstr(haystack, needle, len);
	printf("%s", result);
	return (0);
}*/