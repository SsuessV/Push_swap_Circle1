/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 18:26:46 by bsurilla          #+#    #+#             */
/*   Updated: 2026/05/29 20:11:06 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
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
}
*/
