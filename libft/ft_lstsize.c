/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekartav <sekartav@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 07:46:04 by sekartav          #+#    #+#             */
/*   Updated: 2026/02/04 08:00:44 by sekartav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

/*int main()
{
	t_list *deneme1 = ft_lstnew("A");
	t_list *deneme2 = ft_lstnew("B");
	t_list *deneme3 = ft_lstnew("C");

	deneme1->next = deneme2;
	deneme2->next = deneme3;
	deneme3->next = NULL;

	printf("%d ", ft_lstsize(deneme1));


}*/
