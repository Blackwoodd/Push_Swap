/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbechon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:05:28 by nbechon           #+#    #+#             */
/*   Updated: 2023/03/21 17:05:36 by nbechon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;
	size_t	j;

	if (!s)
		return (NULL);
	j = ft_strlen(s);
	if (start > j)
		str = malloc(sizeof(char));
	else if (len >= j)
		str = malloc(sizeof(char) * (j - start + 1));
	else
		str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[start] && len-- > 0 && start < j)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}

static void	**ft_free_all(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		strs[i++] = NULL;
	}
	free(strs);
	return (NULL);
}

static char	**ft_words_in_tab(const char *s, char c, char **strs)
{
	int	i;
	int	j;
	int	end_last;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		end_last = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > end_last)
		{
			strs[j++] = ft_substr(s, end_last, i - end_last);
			if (!(strs[j - 1]))
				return (*ft_free_all(strs));
		}
	}
	return (strs);
}

char	**ft_split(const char *s, char c)
{
	char	**strs;
	int		i;
	int		end_last;
	int		j;

	if (!s)
		return (NULL);
	j = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		end_last = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > end_last)
			j++;
	}
	strs = malloc(sizeof (char *) * (j + 1));
	if (!strs)
		return (NULL);
	strs[j] = NULL;
	strs = ft_words_in_tab(s, c, strs);
	return (strs);
}
