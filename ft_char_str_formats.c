/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_str_formats.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoro-mo <ytoro-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:13:22 by Yago_42           #+#    #+#             */
/*   Updated: 2022/05/17 12:46:20 by ytoro-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_char_format(int c)
{
	char	rtrn;
	char	*rtnr_str;

	rtnr_str = malloc(2);
	if (!rtnr_str)
		return (NULL);
	if (!ft_isprint(c))
		return (NULL);
	else
	{
		rtrn = c;
		rtnr_str[0] = rtrn;
		rtnr_str[1] = '\0';
	}
	return (rtnr_str);
}

char	*ft_str_format(char *str)
{
	if (!str)
		return ("(null)");
	else
		return (str);
}
