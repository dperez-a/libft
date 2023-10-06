/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 10:58:51 by dperez-a          #+#    #+#             */
/*   Updated: 2023/10/06 21:06:57 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function `ft_isdigit` checks if a given character is a digit.
 * 
 * @param c The parameter "c" is of type "int" and represents a character.
 * 
 * @return a boolean value indicating whether the given character is a digit or not.
 */
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
