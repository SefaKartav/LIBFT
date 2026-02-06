/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekartav <sekartav@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 16:31:29 by sekartav          #+#    #+#             */
/*   Updated: 2026/02/06 00:17:29 by sekartav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *nlst;
    t_list *nnode;
    if (lst == NULL || f == NULL || del == NULL)
        return (NULL);
    nlst = NULL;
    while (lst)
    {
        nnode = ft_lstnew(f(lst->content));
        if (!nnode)
        {
            ft_lstclear(&nlst, del);
            return (NULL);
        }
        ft_lstadd_back(&nlst, nnode);
        lst = lst->next;
    }
    return (nlst);
}

/*void *f(void *c)
{
    int i = 0;
    unsigned char *s;
    s = (unsigned char *)c;
    while (s[i])
    {
        if (s[i >= 'a'] && s[i <= 'z'])
            s[i] -= 32;
        i++;
    }
    return (c);
}

int main()
{
    t_list *k = ft_lstnew(ft_strdup("kartav"));
    t_list *s = ft_lstnew(ft_strdup("sefa"));
    
    ft_lstadd_back(&s, k);
    
    t_list *map = ft_lstmap(s, f, free);
    while (map)
    {
        printf("%s ", (char *)map->content);
        map = map->next;
    }
}*/