/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekartav <sekartav@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 13:41:32 by sekartav          #+#    #+#             */
/*   Updated: 2026/02/05 16:30:57 by sekartav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *ss;
	size_t s_len;
	size_t i;

	if (!s)
		return (NULL);
	i = 0;
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	ss = (char *)malloc(sizeof(char) * (len + 1));
	if (!ss)
		return (NULL);
	while (i < len)
	{
		ss[i] = s[start + i];
		i++;
	}
	ss[i] = '\0';
	return (ss);
}