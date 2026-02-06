/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekartav <sekartav@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 13:40:06 by sekartav          #+#    #+#             */
/*   Updated: 2026/02/04 08:00:53 by sekartav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*k;

	s = (unsigned char *)s1;
	k = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (s[i] != k[i])
			return (s[i] - k[i]);
		i++;
	}
	return (0);
}

/*int main()
{
	char a[] = "sefa";
	char b[] = "seza";

	printf("%d ", ft_memcmp(a, b, 4));
}*/