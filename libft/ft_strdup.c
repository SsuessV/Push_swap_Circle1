/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 15:55:32 by bsurilla          #+#    #+#             */
/*   Updated: 2026/05/06 20:26:15 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	char	*dest;
	int		i;

	len = 0;
	while (s[len] != 0)
		len++;
	dest = malloc((len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (s[i] != 0)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* #include <stdio.h>
#include <string.h>

int main(void)
{
	char src[] = "yip yip, Appa";
	char *dupe = ft_strdup(src);
	char *dupe2 = strdup(src);

	printf("src address %p\n string: %s\n",src, src);
	printf("ft_strdup address %p\n text %s\n",dupe,dupe);
	printf("strdup address %p\n text %s\n", dupe2,dupe2);
}
 */