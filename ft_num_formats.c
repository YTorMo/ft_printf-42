/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_formats.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoro-mo <ytoro-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:46:53 by ytoro-mo          #+#    #+#             */
/*   Updated: 2022/05/17 12:13:33 by ytoro-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_int_format(int num)
{
	return (ft_itoa(num));
}

char	*ft_unsigned_format(unsigned int num)
{
	return (ft_itoa(num));
}

char	*ft_low_hex_format(unsigned int num)
{
	return (ft_to_hex(num));
}

char	*ft_up_hex_format(unsigned int num)
{
	char	*rtrn;
	int		i;

	i = 0;
	rtrn = ft_to_hex(num);
	while (rtrn[i])
	{
		rtrn[i] = ft_toupper(rtrn[i]);
		i++;
	}
	return (rtrn);
}
