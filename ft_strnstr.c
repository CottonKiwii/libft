/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolfram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 17:55:31 by jwolfram          #+#    #+#             */
/*   Updated: 2024/04/05 19:14:10 by jwolfram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	llen;

	if (!little[0])
		return ((char *)big);	
	llen = ft_strlen((char *)little);
	while (*big != little[0])
	{
		if (len < 1 || *big || llen > len)
			return (0);
		len--;
		if (ft_strncmp(big, little, llen) == 0)
			break ;
		big++;
	}
	return ((char *)big);
}
