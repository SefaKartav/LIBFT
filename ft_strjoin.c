/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekartav <sekartav@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 13:40:54 by sekartav          #+#    #+#             */
/*   Updated: 2026/02/06 07:21:41 by sekartav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	len;
	char	*new;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	new = malloc(len);
	if (!new)
		return (NULL);
	while (*s1)
	{
		new[i] = *s1++;
		i++;
	}
	while (*s2)
	{
		new[i] = *s2++;
		i++;
	}
	new[i] = '\0';
	return (new);
}
