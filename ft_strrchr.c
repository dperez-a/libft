/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:24:20 by dperez-a          #+#    #+#             */
/*   Updated: 2023/11/16 09:39:42 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
int main()
{
	char s[] = "Hola loco, la lona esta lacia";
	int c = 'l';
	char *result;

	result = ft_strrchr(s, c);
	printf("%s", result);
	return (0);
}