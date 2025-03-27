/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alschnei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:22:53 by alschnei          #+#    #+#             */
/*   Updated: 2024/09/20 12:22:56 by alschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_freemem(char **str);

static size_t	ft_wordcount(char const *s, char c)
{
	size_t	count;
	size_t	in_word;

	count = 0;
	in_word = 0;
	if (!s)
		return (0);
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			count++;
			in_word = 1;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	**fill_array(char **dest, char const *s, char c)
{
	size_t	lenstr;
	int		i;
	char	*next_delim;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			next_delim = ft_strchr(s, c);
			if (!next_delim)
				lenstr = ft_strlen(s);
			else
				lenstr = next_delim - s;
			dest[i] = ft_substr(s, 0, lenstr);
			if (!dest[i])
				return (ft_freemem(dest));
			s += lenstr;
			i++;
		}
	}
	return (dest);
}

static void	*ft_freemem(char **str)
{
	int	i;

	i = 0;
	while (str[i] != NULL)
	{
		free(str[i]);
		i++;
	}
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**wordarray;
	size_t	countword;

	if (!s)
		return (NULL);
	countword = ft_wordcount(s, c);
	wordarray = (char **)malloc((countword + 1) * sizeof(char *));
	if (!wordarray)
		return (NULL);
	wordarray[countword] = NULL;
	if (fill_array(wordarray, s, c) == NULL)
	{
		free(wordarray);
		return (NULL);
	}
	return (wordarray);
}
