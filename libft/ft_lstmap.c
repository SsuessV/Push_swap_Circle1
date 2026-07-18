/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 22:37:33 by bsurilla          #+#    #+#             */
/*   Updated: 2026/05/29 20:11:44 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void*))
{
	t_list	*lstcpy;
	t_list	*nodecpy;
	void	*tmpcontent;

	lstcpy = NULL;
	while (lst != 0)
	{
		tmpcontent = f(lst->content);
		nodecpy = ft_lstnew(tmpcontent);
		if (!nodecpy)
		{
			del(tmpcontent);
			ft_lstclear(&lstcpy, del);
			return (NULL);
		}
		ft_lstadd_back(&lstcpy, nodecpy);
		lst = lst->next;
	}
	return (lstcpy);
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

static void *ft_uppercpy(void *content)
{
	char	*str;
	char	*copy;

	str = (char *)content;
	copy = ft_strdup(str);
	if (!copy)
		return (NULL);
	copy[0] = ft_toupper(copy[0]);
	return (copy);
}

static void	ft_del(void *content)
{
	free(content);
}

 int	main (void)
{
	t_list	**start = NULL;
	t_list	*node1 = NULL;
	t_list	*node2 = NULL;
	t_list	*node3 = NULL;
	t_list	*node4 = NULL;
	char	content1[] = "b";
	char	content2[] = "c";
	char	content3[] = "d";
	char	content4[] = "o";
	node1 = ft_lstnew(content1);
	if (!node1)
		return (1);
	node2 = ft_lstnew(content2);
	if (!node2)
		return (1);
	node3 = ft_lstnew(content3);
	if (!node3)
		return (1);
	node4 = ft_lstnew(content4);
	if (!node4)
		return (1);

	start = &node1;
	node1->next = node2;
	node2->next = node3;
		
	ft_lstadd_back(start, node4);
	ft_printtester(*start);
	
	t_list *mapped;

	mapped = ft_lstmap(*start, ft_uppercpy, ft_del);

	printf("ORIGINAL LIST:\n");
	ft_printtester(*start);

	printf("MAPPED LIST:\n");
	ft_printtester(mapped);
	
} */