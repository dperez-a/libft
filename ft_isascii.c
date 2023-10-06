/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 10:58:45 by dperez-a          #+#    #+#             */
/*   Updated: 2023/10/06 21:06:54 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function `ft_isascii` checks if a given character is a valid ASCII character.
 * 
 * @param c The parameter "c" is an integer representing a character.
 * 
 * @return a boolean value indicating whether the given character is an ASCII character or not. It
 * returns 1 if the character is an ASCII character and 0 otherwise.
 */
int	ft_isascii(int c)
{
	return (c >= 0 && c < 128);
}
