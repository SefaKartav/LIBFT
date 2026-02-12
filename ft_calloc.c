/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekartav <sekartav@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 12:21:28 by sekartav          #+#    #+#             */
/*   Updated: 2026/02/11 17:25:01 by sekartav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*k;

	if (size != 0 && nmemb > ((size_t)-1) / size)
		return (NULL);
	k = (void *)malloc(nmemb * size);
	if (!k)
		return (NULL);
	ft_memset(k, 0, nmemb * size);
	return (k);
}
