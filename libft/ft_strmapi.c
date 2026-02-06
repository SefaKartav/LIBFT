/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekartav <sekartav@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 00:54:16 by sekartav          #+#    #+#             */
/*   Updated: 2026/02/06 07:25:15 by sekartav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	ln;
	char	*new;

	if (!s)
		return (NULL);
	i = 0;
	ln = ft_strlen(s);
	new = malloc(sizeof(char) * (ln + 1));
	if (!new)
		return (NULL);
	while (i < ln)
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}

/*char f(unsigned int i, char c)
{
    (void)i;
    
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}

int main()
{
    char a[] = "sefa";
    char *result = ft_strmapi(a, f);
    printf("%s ", result);
}*/
