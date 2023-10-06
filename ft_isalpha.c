/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 10:58:39 by dperez-a          #+#    #+#             */
/*   Updated: 2023/10/06 21:06:47 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function `ft_isalpha` checks if a given character is an alphabetic character.
 * 
 * @param c The parameter "c" is of type "int" and represents a character.
 * 
 * @return 1 if the character is an alphabetic character (either uppercase or lowercase), and 0
 * otherwise.
 */
int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
