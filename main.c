/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoro-mo <ytoro-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 12:37:17 by ytoro-mo          #+#    #+#             */
/*   Updated: 2022/05/18 15:28:50 by ytoro-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	i;
	int	*p;

	i = ft_printf("\x01\x02\x07\v\x08\f\r\n");
	ft_printf("\n%i", i);
	i = printf("\x01\x02\x07\v\x08\f\r\n");
	printf("\n%i", i);
	return (0);
}
