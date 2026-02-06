/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekartav <sekartav@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 21:04:37 by sekartav          #+#    #+#             */
/*   Updated: 2026/02/05 23:16:29 by sekartav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;
    i = 0;
    if (s == NULL || f == NULL)
        return ;
    while (s[i] != '\0')
    {
        f(i, s + i);
        i++;
    }
}
/*void	ft_ttoupper(unsigned int g, char *c)
{
    (void)g;
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}
int main()
{
    char a[] = "sefa";
    ft_striteri(a, ft_ttoupper);
    printf("%s ", a);
}*/

