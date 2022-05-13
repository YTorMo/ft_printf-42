/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_str_formats.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Yago_42 <Yago_42@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:13:22 by Yago_42           #+#    #+#             */
/*   Updated: 2022/05/13 13:32:36 by Yago_42          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"


char    *ft_char_format(char *str, int c)
{
    //str comprbar los flags
    char    rtnr;
    char    *rtnr_str[2];
    
    if(!ft_isprint(c))
        return (NULL);
    else
    {
        rtnr = c;
        rtnr_str[0] = rtnr;
        rtnr_str[1] = '\0';  
    }
    return (rtnr_str);
}

char    *ft_str_format(char *str1, char *str2)
{
    //str comprbar los flags
    
}
