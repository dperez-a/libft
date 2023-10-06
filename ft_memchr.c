/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 10:59:56 by dperez-a          #+#    #+#             */
/*   Updated: 2023/10/06 21:09:15 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function ft_memchr searches for a specific character in a given memory block and returns a
 * pointer to the first occurrence of that character, or NULL if it is not found.
 * 
 * @param str A pointer to the memory area to be searched.
 * @param c The parameter "c" is the character that we are searching for in the memory block. It is of
 * type "int" because it can represent any character value as well as the special value EOF (End of
 * File).
 * @param n The parameter `n` represents the number of bytes to search in the memory block pointed to
 * by `str`.
 * 
 * @return a pointer to the first occurrence of the character 'c' in the memory block pointed to by
 * 'str'. If the character is not found within the first 'n' bytes, the function returns NULL.
 */
void	*ft_memchr(const void *str, int c, size_t n)
{
	int				i;
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	i = 0;
	while (n > 0)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)(str + i));
		i++;
		n--;
	}
	return (NULL);
}
