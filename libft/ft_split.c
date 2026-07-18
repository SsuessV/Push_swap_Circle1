/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 18:35:02 by bsurilla          #+#    #+#             */
/*   Updated: 2026/05/26 22:41:44 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char *str, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i] != 0)
	{
		if (str[i] != c && ((i == 0) || (str[i - 1] == c)))
		{
			word++;
		}
		i++;
	}
	return (word);
}

static void	ft_freemem(char **words, int w)
{
	while (w > 0)
	{
		w--;
		free(words[w]);
	}
	free(words);
}

static int	ft_arrayfill(char *str, char c, char **words)
{
	int		i;
	int		w;
	size_t	wordlen;

	i = 0;
	w = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		if (str[i] == '\0')
			return (w);
		wordlen = 0;
		while (str[i + wordlen] != '\0' && str [i + wordlen] != c)
			wordlen++;
		words[w] = ft_substr(str, i, wordlen);
		if (!words[w])
		{
			ft_freemem(words, w);
			return (w);
		}
		w++;
		i = i + wordlen;
	}
	return (w);
}

char	**ft_split(char const *s, char c)
{
	int		w;
	int		wordcount;
	char	**splitwords;

	wordcount = ft_wordcount((char *)s, c);
	splitwords = malloc((wordcount + 1) * sizeof(char *));
	if (!splitwords)
		return (NULL);
	w = ft_arrayfill((char *)s, c, splitwords);
	splitwords[w] = NULL;
	return (splitwords);
}

/* #include <stdio.h>
int main(void) {
	char *s = "  tripouille  42  ";
	printf("wc: %i\n", ft_wordcount(s, ' '));
	ft_split(s, ' ');
} */
