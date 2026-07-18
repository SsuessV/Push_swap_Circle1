/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 19:01:46 by bsurilla          #+#    #+#             */
/*   Updated: 2026/05/28 19:52:56 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next)
		lst = lst->next;
	return (lst);
}
/*
#include <stdio.h>

void	ft_printtester(t_list *start)
{
	while (start != NULL)
	{
		printf("%s\n", (char *)start->content);
		start = start->next;
	}
	printf("\n");
}

int	main (void)
{
	t_list	**start = NULL;
	t_list	*node1 = NULL;
	t_list	*node2 = NULL;
	t_list	*node3 = NULL;
	char content1[] = "b";
	char content2[] = "c";
	char content3[] = "d";
	
	node1 = ft_lstnew(content1);
	node2 = ft_lstnew(content2);
	node3 = ft_lstnew(content3);
	
	start = &node1;
	node1->next = node2;
	ft_printtester(*start);	

	ft_lstadd_front(start, node3);
	start = &node3;
	ft_printtester(*start);
	printf("size of the list: %d\n", ft_lstsize(*start));
	ft_printtester(ft_lstlast(*start));
}
*/
