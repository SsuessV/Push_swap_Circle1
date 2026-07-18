/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 20:12:30 by bsurilla          #+#    #+#             */
/*   Updated: 2026/05/28 21:07:59 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
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
	t_list	*node4 = NULL;
	char	*content1 = "b";
	char	*content2 = "c";
	char	*content3 = "d";
	char	*content4 = malloc(2); 
	content4[0] = 'o';
	content4[1] = '\0';
	node1 = ft_lstnew(content1);
	node2 = ft_lstnew(content2);
	node3 = ft_lstnew(content3);
	node4 = ft_lstnew(content4);

	start = &node1;
	node1->next = node2;
	node2->next = node3;
		
	ft_lstadd_back(start, node4);
	ft_printtester(*start);
	
	ft_lstdelone(node4,free);
	node3->next = NULL;
	ft_printtester(*start);
}
*/
