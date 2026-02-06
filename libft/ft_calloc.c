/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekartav <sekartav@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 12:21:28 by sekartav          #+#    #+#             */
/*   Updated: 2026/02/04 08:00:03 by sekartav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*k;

	k = (void *)malloc(nmemb * size);
	if (!k)
		return (NULL);
	ft_memset(k, 0, nmemb * size);
	return (k);
}

/*int main()
{
	char *p;
	p = ft_calloc(3, sizeof(char));
	printf("%d %d %d\n", p[0], p[1], p[2]);
	free(p);
	return (0);
}*/