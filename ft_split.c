/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolfram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:08:05 by jwolfram          #+#    #+#             */
/*   Updated: 2024/04/12 18:01:45 by jwolfram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char const *s, char c)
{
	int	word;
	int	i;

	word = 0;
	i = 0;
	if (s[i] != c)
	{
		word++;
		i++;
	}
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1])
			word++;
		i++;
	}
	return (word);
}

static int	ft_findlen(char const *s, char c, int i)
{
	int		len;

	len = 0;
	while (s[i + len] && s[i + len] != c)
		len++;
	return (len);
}

static void	ft_free(char **arr)
{
	int	i;

	i = 0;
	if (!arr)
		return ;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	arr = 0;
}

static char	*ft_findstr(char **arr, char const *s, char c, int i)
{
	int		len;
	char	*str;

	len = ft_findlen(s, c, i);
	str = ft_substr(s, i, len);
	if (!str)
		ft_free(arr);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		word;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	word = ft_wordcount(s, c);
	arr = (char **)ft_calloc((word + 1), sizeof(char *));
	if (!arr)
		return (NULL);
	word = 0;
	while (s[i] && arr)
	{
		if (i == 0 && s[i] != c && s[i])
		{
			arr[word] = ft_findstr(arr, s, c, i);
			word++;
		}
		if (s[i] == c && s[i + 1] != c && s[i + 1])
		{
			arr[word] = ft_findstr(arr, s, c, (i + 1));
			word++;
		}
		i++;
	}
	return (arr);
}
