/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:00:25 by dperez-a          #+#    #+#             */
/*   Updated: 2023/10/06 21:10:01 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function `ft_putendl_fd` writes a string followed by a newline character to a specified file
 * descriptor.
 * 
 * @param s The parameter "s" is a pointer to a constant character string. It represents the string
 * that needs to be written to the file descriptor "fd".
 * @param fd The parameter "fd" is an integer representing the file descriptor of the file where the
 * string "s" will be written.
 */
void	ft_putendl_fd(const char *s, int fd)
{
	if (s)
	{
		write(fd, s, ft_strlen(s));
		write(fd, "\n", 1);
	}
}
