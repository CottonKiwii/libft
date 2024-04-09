/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolfram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 18:28:45 by jwolfram          #+#    #+#             */
/*   Updated: 2024/04/09 20:04:12 by jwolfram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;

	if (!s1 || !set)
		return (NULL);
	res = (char *)malloc(ft_strlen((char *)s1));
	if (!res)
		return (NULL);
	while (ft_strchr(s1, *(char *)set) && *s1)
		s1++;
}
