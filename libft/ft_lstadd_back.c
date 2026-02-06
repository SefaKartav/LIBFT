/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekartav <sekartav@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 10:30:21 by sekartav          #+#    #+#             */
/*   Updated: 2026/02/04 11:11:36 by sekartav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*try;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	try = ft_lstlast(*lst);
	try->next = new;
}
/*int main(void)
{
    t_list *head = NULL;
    t_list *deneme1 = ft_lstnew("A");
    t_list *deneme2 = ft_lstnew("B");
    t_list *deneme3 = ft_lstnew("C");

    ft_lstadd_back(&head, deneme1);
    ft_lstadd_back(&head, deneme2);
    ft_lstadd_back(&head, deneme3);

    t_list *tmp = head;
    while (tmp)
    {
        printf("%s ", (char *)tmp->content);
        tmp = tmp->next;
    }
    return (0);
}*/