/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekartav <sekartav@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 13:41:15 by sekartav          #+#    #+#             */
/*   Updated: 2026/02/04 08:02:10 by sekartav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	k;

	if (!*little)
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		k = 0;
		while (big[i + k] == little[k] && (i + k) < len)
		{
			if (little[k + 1] == '\0')
				return ((char *)&big[i]);
			k++;
		}
		i++;
	}
	return (0);
}

/*int main()
{
	char a[] = "sefakartav";
	char b[] = "kartav";
	printf("%s ", ft_strnstr(a, b, 10));
}*/