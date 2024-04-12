/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolfram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:08:05 by jwolfram          #+#    #+#             */
/*   Updated: 2024/04/12 11:48:42 by jwolfram         ###   ########.fr       */
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
		if (s[i] == c && s[i + 1] != c)
			word++;
		i++;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		start;
	int		word;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	word = ft_wordcount(s, c);
	return (arr);
}
