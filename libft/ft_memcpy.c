/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekartav <sekartav@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 13:40:10 by sekartav          #+#    #+#             */
/*   Updated: 2026/02/04 08:00:56 by sekartav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*st;
	char	*st1;

	st = (char *)dest;
	st1 = (char *)src;
	if (!dest && !src)
		return (0);
	if (n == 0 || dest == src)
		return (st);
	while (i < n)
	{
		st[i] = st1[i];
		i++;
	}
	return (st);
}
