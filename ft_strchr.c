/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoro-mo <ytoro-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:06:17 by ytoro-mo          #+#    #+#             */
/*   Updated: 2022/05/10 17:13:30 by ytoro-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*occur;

	if (s)
	{
		while (*s != '\0')
		{
			if ((char)*s == (char)c)
			{
				occur = (char *)s;
				return (occur);
			}
			s++;
		}
		if (c == 0)
			return (occur = (char *)s);
	}
	return (NULL);
}
