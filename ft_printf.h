/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoro-mo <ytoro-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 13:01:01 by Yago_42           #+#    #+#             */
/*   Updated: 2022/05/18 16:11:48 by ytoro-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_replacement(const char *str, va_list input);
int		ft_percent_format(char c, va_list input);
int		ft_char_format(int c);
int		ft_str_format(char *str);
int		ft_pointer_format(uintptr_t ptr);
void	ft_to_hex(uintptr_t ptr, int up);
int		ft_int_format(int num);
int		ft_unsigned_format(unsigned int num);
int		ft_low_hex_format(unsigned int num);
int		ft_up_hex_format(unsigned int num);
int		ft_percentage_format(void);
void	ft_to_num_print(long num);

#endif
