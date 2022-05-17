/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_percentage_format.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoro-mo <ytoro-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 12:20:23 by ytoro-mo          #+#    #+#             */
/*   Updated: 2022/05/17 12:25:45 by ytoro-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_percentage_format(void)
{
	char	*rtrn;

	rtrn = malloc(2);
	if (!rtrn)
		return (NULL);
	rtrn[0] = '%';
	rtrn[1] = '\0';
	return (rtrn);
}
