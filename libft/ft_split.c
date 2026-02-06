/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekartav <sekartav@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 01:25:23 by sekartav          #+#    #+#             */
/*   Updated: 2026/02/06 05:50:36 by sekartav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_counter(char const *s, char c)
{
	size_t	i;
	size_t	j;

	if (!s)
		return (0);
	j = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			j++;
		i++;
	}
	return (j);
}

static char	**ft_area(size_t len)
{
	char	**result;

	result = (char **)malloc(sizeof(char *) * (len + 1));
	if (!result)
		return (NULL);
	return (result);
}

static char	**ft_freez(char **result, int j)
{
	while (j >= 0)
	{
		free(result[j]);
		j--;
	}
	free(result);
	return (NULL);
}

static char	**ft_fill(char **new, char const *s, char c)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			new[j] = ft_substr(s, start, i - start);
			if (!new[j])
				return (ft_freez(new, j - 1));
			j++;
		}
		else
			i++;
	}
	new[j] = NULL;
	return (new);
}

char	**ft_split(char const *s, char c)
{
	char	**new;

	if (!s)
		return (NULL);
	new = ft_area(ft_counter(s, c));
	if (!new)
		return (NULL);
	return (ft_fill(new, s, c));
}
