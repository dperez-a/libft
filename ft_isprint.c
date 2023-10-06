/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 10:58:56 by dperez-a          #+#    #+#             */
/*   Updated: 2023/10/06 21:07:02 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function `ft_isprint` checks if a given character is printable.
 * 
 * @param c The parameter "c" is of type "int" and represents a character.
 * 
 * @return a boolean value indicating whether the given character is printable or not.
 */
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
