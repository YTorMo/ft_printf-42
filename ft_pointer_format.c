/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoro-mo <ytoro-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 09:29:12 by ytoro-mo          #+#    #+#             */
/*   Updated: 2022/05/17 12:47:27 by ytoro-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_pointer_format(uintptr_t ptr)
{
	char	*rtrn;

	if (ptr < 0)
		return (NULL);
	else
		return (ft_to_hex(ptr));
}

char	*ft_to_hex(uintptr_t ptr)
{
	char		*rtrn;
	uintptr_t	memo;
	int			i;

	memo = ptr;
	i = 0;
	while (memo >= 1)
	{
		i++;
		memo /= 16;
	}
	rtrn = malloc(i + 1);
	if (!rtrn)
		return (NULL);
	rtrn = ft_num_to_char(ptr, rtrn);
	return (rtrn);
}

char	*ft_num_to_char(uintptr_t ptr, char *rtrn)
{
	int	i;

	i = 0;
	while (ptr >= 1)
	{
		if (ptr % 16 <= 9)
			rtrn[i++] = (ptr % 16) + 48;
		else
			rtrn[i++] = ((ptr % 16) - 10) + 97;
		ptr /= 16;
	}
	rtrn[i] = 0;
	return (ft_inverter(rtrn));
}

char	*ft_inverter(char *rtrn)
{
	char	memo;
	int		i;

	i = 0;
	while (i < (ft_strlen(rtrn) / 2))
	{
		memo = rtrn[i];
		rtrn[i] = rtrn[ft_strlen(rtrn) - i - 1];
		rtrn[ft_strlen(rtrn) - i - 1] = memo;
		i++;
	}
	return (rtrn);
}
