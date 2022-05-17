/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoro-mo <ytoro-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 13:01:01 by Yago_42           #+#    #+#             */
/*   Updated: 2022/05/17 12:21:02 by ytoro-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>

int		ft_printf(const char *str, ...);
char	*ft_replacement(char *str, va_list input);
char	*ft_percent_format(char *str, va_list input);
char	*ft_char_format(int c);
char	*ft_str_format(char *str2);
char	*ft_pointer_format(uintptr_t ptr);
char	*ft_to_hex(uintptr_t ptr);
char	*ft_num_to_char(uintptr_t ptr, char *rtrn);
char	*ft_inverter(char *rtrn);
char	*ft_int_format(int num);
char	*ft_unsigned_format(unsigned int num);
char	*ft_low_hex_format(unsigned int num);
char	*ft_up_hex_format(unsigned int num);
char	*ft_percentage_format(void);

#endif
