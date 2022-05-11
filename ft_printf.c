/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoro-mo <ytoro-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 13:00:03 by Yago_42           #+#    #+#             */
/*   Updated: 2022/05/11 10:38:52 by ytoro-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_printf(const char *str, ...)
{
	int		print_size;
	va_list	input;
	char	*memo;

	va_start(input, str);
	memo = (char *)str;
	print_size = 0;
	if (ft_strchr(memo, '%'))
		memo = ft_replacement(memo);
	ft_putstr_fd(memo, 1);
	print_size = ft_strlen(memo);
	return (print_size);
}

char	*ft_replacement(char *str)
{
}
