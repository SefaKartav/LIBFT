#include "libft.h"

int main()
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
}