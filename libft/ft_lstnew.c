/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekartav <sekartav@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 07:53:16 by sekartav          #+#    #+#             */
/*   Updated: 2026/02/04 08:57:04 by sekartav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/*int	main(void)
{
	t_list *deneme1 = ft_lstnew("A");
	t_list *deneme2 = ft_lstnew("B");
	t_list *deneme3 = ft_lstnew("C");

	deneme1->next = deneme2;
	deneme2->next = deneme3;

	t_list *temp = deneme1;
	while (temp != NULL)
	{
		printf("%s ", (char *)temp->content);
		temp = temp->next;
	}
	free(deneme1);
	free(deneme2);
	free(deneme3);
}*/