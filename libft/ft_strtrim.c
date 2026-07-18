/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 20:40:10 by bsurilla          #+#    #+#             */
/*   Updated: 2026/05/16 18:28:30 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_setcheck(char const *set, char c)
{
	int	f;

	f = 0;
	while (set[f] != 0)
	{
		if (c == set[f])
			return (1);
		f++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		b;
	char	*trimmed;
	int		len;

	len = ft_strlen(s1);
	i = 0;
	while (s1[i] != 0 && ft_setcheck(set, s1[i]) == 1)
		i++;
	b = len - 1;
	while (b >= i && ft_setcheck(set, s1[b]) == 1)
		b--;
	trimmed = ft_substr(s1, i, b - i + 1);
	return (trimmed);
}
/* 
#include <stdio.h>
int	main(void)
{
	char	str[] = "abbaca";
	char	set[] = "abc";
	
	printf("trimmed str: %s\n",ft_strtrim(str,set));
}
 */
