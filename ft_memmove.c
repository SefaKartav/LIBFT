/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekartav <sekartav@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 13:40:15 by sekartav          #+#    #+#             */
/*   Updated: 2026/02/07 13:07:15 by sekartav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*ds;
	char	*sr;

	if (!dest && !src)
		return (0);
	ds = (char *)dest;
	sr = (char *)src;
	if (sr < ds)
	{
		while (n--)
			ds[n] = sr[n];
	}
	else
		ft_memcpy(ds, sr, n);
	return (dest);
}
