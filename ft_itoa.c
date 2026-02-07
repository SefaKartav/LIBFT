/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekartav <sekartav@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 13:38:59 by sekartav          #+#    #+#             */
/*   Updated: 2026/02/07 13:05:18 by sekartav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numlen(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i++;
	}
	while (n != 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	ln;
	size_t	i;

	ln = n;
	i = numlen(ln);
	str = malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[i] = '\0';
	if (ln == 0)
		str[0] = '0';
	if (ln < 0)
	{
		str[0] = '-';
		ln = -ln;
	}
	while (ln > 0)
	{
		str[--i] = (ln % 10) + '0';
		ln /= 10;
	}
	return (str);
}
