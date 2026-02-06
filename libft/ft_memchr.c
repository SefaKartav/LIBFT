/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekartav <sekartav@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 11:34:47 by sekartav          #+#    #+#             */
/*   Updated: 2026/02/04 08:00:48 by sekartav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*a;
	size_t			i;

	i = 0;
	if (s == NULL)
		return (NULL);
	a = (unsigned char *)s;
	while (i < n)
	{
		if (a[i] == (char)c)
			return (&a[i]);
		i++;
	}
	return (NULL);
}

/*int main(void)
{
	char data[] = "abcd\0faf";
	char *p;
	p = ft_memchr(data, 'f', 7);
	printf("%s ", p);
}*/