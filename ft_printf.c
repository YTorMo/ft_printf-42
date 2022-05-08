/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Yago_42 <Yago_42@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 13:00:03 by Yago_42           #+#    #+#             */
/*   Updated: 2022/05/08 13:36:41 by Yago_42          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include"ft_printf.h"

int ft_printf(const char *str, ...)
{
    int print_size;
    
    print_size = 0;
    if (ft_strchr(str, '%'))
    {
        //haz algo
        return(0);
    }
    ft_putstr_fd(str, 1);
    print_size = ft_strlen(str);
    return (print_size);
}
