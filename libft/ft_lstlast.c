/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekartav <sekartav@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 09:11:51 by sekartav          #+#    #+#             */
/*   Updated: 2026/02/04 15:57:54 by sekartav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*int main()
{
	t_list *deneme1 = ft_lstnew("A");
	t_list *deneme2 = ft_lstnew("B");
	t_list *deneme3 = ft_lstnew("C");

	deneme1->next = deneme2;
	deneme2->next = deneme3;
	t_list *son = ft_lstlast(deneme1);

	if (son)
		printf("%s ", (char *)son->content);
	return (0);
}*/