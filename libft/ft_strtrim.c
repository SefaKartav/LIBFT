/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekartav <sekartav@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 13:41:25 by sekartav          #+#    #+#             */
/*   Updated: 2026/02/07 12:40:06 by sekartav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	allen;
	size_t	i;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	allen = ft_strlen(s1);
	i = 0;
	while (i < allen && ft_strchr(set, s1[i]))
		i++;
	while (allen > i && ft_strchr(set, s1[allen - 1]))
		allen--;
	return (ft_substr(s1, i, allen - i));
}
