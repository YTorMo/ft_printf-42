/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Yago_42 <Yago_42@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:06:17 by ytoro-mo          #+#    #+#             */
/*   Updated: 2022/05/08 13:32:58 by Yago_42          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*occur;

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
	return (NULL);
}
