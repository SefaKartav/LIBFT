/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekartav <sekartav@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 16:31:29 by sekartav          #+#    #+#             */
/*   Updated: 2026/02/07 21:27:41 by sekartav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlst;
	t_list	*nnode;
	void	*content;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	nlst = NULL;
	while (lst)
	{
		content = f(lst->content);
		nnode = ft_lstnew(content);
		if (!nnode)
		{
			del(content);
			ft_lstclear(&nlst, del);
			return (NULL);
		}
		ft_lstadd_back(&nlst, nnode);
		lst = lst->next;
	}
	return (nlst);
}
