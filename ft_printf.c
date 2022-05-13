/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Yago_42 <Yago_42@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 13:00:03 by Yago_42           #+#    #+#             */
/*   Updated: 2022/05/13 13:11:46 by Yago_42          ###   ########.fr       */
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
		memo = ft_replacement(memo, input);
	ft_putstr_fd(memo, 1);
	print_size = ft_strlen(memo);
	va_end (input);
	return (print_size);
}

char	*ft_replacement(char *str, va_list input)
{
	int		i;
	int		start;
	char	*new_str;

	i = 0;
	new_str = ft_strdup("");
	while (str[i] != '\0')
	{
		start = i;
		while (str[i] != '%' && str[i] != '\0')
			i++;
		new_str = ft_strjoin(new_str, ft_substr(str, start, i - start));
		start = i++;
		while (str[i] != 'c' || str[i] != 's' || str[i] != 'p' || str[i] != 'd'
			|| str[i] != 'i' || str[i] != 'u' || str[i] != 'x' || str[i] != 'X'
			|| str[i] != '%' || str[i] != '\0')
			i++;
		if (str[i] != '\0')
			new_str = ft_strjoin(new_str, ft_percent_format(
					ft_substr(str, start, i - start), input));
	}
	return (new_str);
}

char	*ft_percent_format(char *str, va_list input)
{
	static int	i;
	char		*rtrn_str;

	i = 0;
	if(str[ft_strlen(str)] == 'c')
		rtrn_str = ft_char_format(str, va_arg(input, int));
	else if (str[ft_strlen(str)] == 's')
		rtrn_str = ft_string_format(str, va_arg(input, char *));
	else if (str[ft_strlen(str)] == 'p')
		rtrn_str = ft_pointer_format(str, va_arg(input, unsigned long long));
	else if (str[ft_strlen(str)] == 'd' || str[ft_strlen(str)] == 'i')
		rtrn_str = ft_int_format(str, va_arg(input, int));
	else if (str[ft_strlen(str)] == 'u')
		rtrn_str = ft_unsigned_format(str, va_arg(input, unsigned int));
	else if (str[ft_strlen(str)] == 'x')
		rtrn_str = ft_low_hex_format(str, va_arg(input, unsigned int));
	else if (str[ft_strlen(str)] == 'X')
		rtrn_str = ft_up_hex_format(str, va_arg(input, unsigned int));
	else if (str[ft_strlen(str)] == '%')
		rtrn_str = ft_percentage_format(str);
	i++;
	return (rtrn_str);
}
