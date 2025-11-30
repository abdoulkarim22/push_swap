/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absouman <absouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 17:48:07 by absouman          #+#    #+#             */
/*   Updated: 2025/11/30 19:56:19 by absouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static size_t	ft_countword(const char *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*copy_word(const char *start, size_t len)
{
	char	*word;
	size_t	i;

	word = malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	
	word[i] = '\0';
	return (word);
}

static void	ft_free_all(char **lst, int last)
{
	while (--last >= 0)
		free(lst[last]);
	free(lst);
}

static const char	*extract_word(const char *s, char c, char **lst, int i)
{
	const char	*start;
	size_t		len;

	start = s;
	len = 0;
	while (s[len] && s[len] != c)
		len++;
	if (len == 0)
		return (NULL);
	lst[i] = copy_word(start, len);
	if (!lst[i])
		return (NULL);
	return (s + len);
}

char	**ft_split(const char *s, char c)
{
	char		**lst;
	int			i;

	if (!s)
		return (NULL);
	lst = malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!lst)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		s = extract_word(s, c, lst, i);
		if (!s)
			break ;
		if (!lst[i])
			return (ft_free_all(lst, i), NULL);
		i++;
	}
	lst[i] = NULL;
	return (lst);
}
