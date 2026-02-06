/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekartav <sekartav@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 08:39:48 by sekartav          #+#    #+#             */
/*   Updated: 2026/02/04 08:59:24 by sekartav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    new->next = *lst;
    *lst = new;
}
/*int	main(void)
{
	t_list *bas = ft_lstnew("A");
	t_list *yeni = ft_lstnew("B");
	t_list *son = ft_lstnew("C");

    //bas->next = yeni;
    //yeni->next = son;
	ft_lstadd_front(&bas, yeni);
    ft_lstadd_front(&bas, son);

	t_list *temp = bas;
	while (temp != NULL)
	{
		printf("%s ", (char *)temp->content);
		temp = temp->next;
	}
    return (0);
}*/