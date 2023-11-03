/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:23:32 by dperez-a          #+#    #+#             */
/*   Updated: 2023/11/03 12:23:27 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	total_len;
	char	*result;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	total_len = len1 + len2;
	if (!s1 || !s2)
		return (NULL);
	result = (char *)malloc(total_len + 1);
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, len1 + 1);
	ft_strlcat(result, s2, total_len + 1);
	return (result);
}
/*int main()
{
	char s1[] = "Hola";
	char s2[] = "Mundo";
	char *result;
	
	result = ft_strjoin(s1, s2);
	printf("%s", result);
	return (0);
}*/