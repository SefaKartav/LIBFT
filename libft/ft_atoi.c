/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekartav <sekartav@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 18:25:12 by sekartav          #+#    #+#             */
/*   Updated: 2026/02/06 06:03:51 by sekartav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	modifier;
	int	a;
	int	total;

	a = 0;
	modifier = 1;
	total = 0;
	while ((str[a] >= 9 && str[a] <= 13) || str[a] == ' ')
	{
		a++;
	}
	if ((str[a] == '-') || (str[a] == '+'))
	{
		if (str[a] == '-')
			modifier *= -1;
		a++;
	}
	while (str[a] <= 57 && str[a] >= 48)
	{
		total = (total * 10) + (str[a] - 48);
		a++;
	}
	return (total * modifier);
}
