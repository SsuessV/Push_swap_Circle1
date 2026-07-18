/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 16:07:10 by bsurilla          #+#    #+#             */
/*   Updated: 2026/05/15 18:59:59 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		a;
	char	*join;

	join = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!join)
		return (NULL);
	i = 0;
	while (s1[i] != 0)
	{
		join[i] = s1[i];
		i++;
	}
	a = 0;
	while (s2[a] != 0)
	{
		join[i + a] = s2[a];
		a++;
	}
	join[i + a] = '\0';
	return (join);
}
/* 
#include <stdio.h>
int	main(void)
{
	char s1[] = "Hello,";
	char s2[] = " Bobert";
	printf("%s\n",ft_strjoin(s1,s2));
}
 */
