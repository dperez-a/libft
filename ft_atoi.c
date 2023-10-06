/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 10:57:29 by dperez-a          #+#    #+#             */
/*   Updated: 2023/10/06 21:05:40 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The ft_atoi function converts a string representation of an integer to an actual integer value.
 * 
 * @param str The parameter `str` is a pointer to a character array, which represents the string that
 * we want to convert to an integer.
 * 
 * @return an integer value.
 */
int	ft_atoi(const char *str)
{
	int	cur;
	int	num;
	int	sign;

	cur = 0;
	num = 0;
	sign = 1;
	while ((str[cur] >= 9 && str[cur] <= 13) || str[cur] == ' ')
		cur++;
	if (str[cur] == '+' || str[cur] == '-')
	{
		if (str[cur] == '-')
			sign = -1;
		cur++;
	}
	while (str[cur] >= '0' && str[cur] <= '9')
	{
		num = num * 10 + str[cur] - '0';
		cur++;
	}
	return (num * sign);
}
