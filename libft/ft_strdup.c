/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekartav <sekartav@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 13:40:49 by sekartav          #+#    #+#             */
/*   Updated: 2026/02/04 08:01:42 by sekartav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s1;
	size_t	i;
	size_t	len;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	i = 0;
	s1 = (char *)malloc(sizeof(*s) * (len + 1));
	if (!s1)
		return (NULL);
	while (s[i])
	{
		s1[i] = s[i];
		i++;
	}
	s1[i] = 0;
	return (s1);
}

/*int main()
{
   const char *a;
   char deneme[] = "harika";
   a = ft_strdup(deneme);
   printf("%d ", *a);
}*/
