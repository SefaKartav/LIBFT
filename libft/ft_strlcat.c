/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekartav <sekartav@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 13:40:58 by sekartav          #+#    #+#             */
/*   Updated: 2026/02/04 08:01:53 by sekartav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstl;
	size_t	srcl;
	size_t	i;
	size_t	j;

	dstl = ft_strlen(dst);
	srcl = ft_strlen(src);
	i = 0;
	j = dstl;
	if (dstl < size)
	{
		while (src[i] != '\0' && (dstl + i + 1) < size)
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = '\0';
	}
	else
		dstl = size;
	return (dstl + srcl);
}

/*int main()
{
	char a[25] = "sefa";
	const char *b = "kartav";
	size_t n = ft_strlcat(a, b, 2);
	printf("%zu ", n);
}*/