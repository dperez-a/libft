/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:00:46 by dperez-a          #+#    #+#             */
/*   Updated: 2023/10/06 21:10:14 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function `ft_putstr_fd` writes a string to a file descriptor.
 * 
 * @param s The parameter "s" is a pointer to a constant character array (string).
 * @param fd The parameter "fd" is an integer representing the file descriptor of the file where the
 * string "s" will be written to.
 */
void	ft_putstr_fd(const char *s, int fd)
{
	if (s)
	{
		while (*s)
		{
			write(fd, s, 1);
			s++;
		}
	}
}
