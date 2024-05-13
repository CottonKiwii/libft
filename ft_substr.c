/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolfram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:46:02 by jwolfram          #+#    #+#             */
/*   Updated: 2024/05/13 15:31:53 by jwolfram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	slen;

	sub = 0;
	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen || !len)
		return (ft_calloc(0, sizeof(char)));
	if (len > slen - start)
		sub = (char *)ft_calloc(slen - start + 1, sizeof(char));
	else
		sub = (char *)ft_calloc(len + 1, sizeof(char));
	if (!sub)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	return (sub);
}
