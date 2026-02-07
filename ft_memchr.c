/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekartav <sekartav@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 11:34:47 by sekartav          #+#    #+#             */
/*   Updated: 2026/02/07 21:08:52 by sekartav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	k;
	size_t			i;

	a = (unsigned char *)s;
	k = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (a[i] == k)
		{
			return ((void *)&a[i]);
		}
		i++;
	}
	return (NULL);
}
