/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolfram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 20:04:05 by jwolfram          #+#    #+#             */
/*   Updated: 2024/04/04 20:18:13 by jwolfram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (0);
}
