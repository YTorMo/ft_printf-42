/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Yago_42 <Yago_42@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 13:01:01 by Yago_42           #+#    #+#             */
/*   Updated: 2022/05/13 13:16:23 by Yago_42          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>

int		ft_printf(const char *str, ...);
char	*ft_replacement(char *str, va_list input);
char	*ft_percent_format(char *str, va_list input);
char    *ft_char_format(char *str, int c);

#endif
