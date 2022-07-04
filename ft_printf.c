/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:45:41 by dida-sil          #+#    #+#             */
/*   Updated: 2022/07/01 08:35:00 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_flags(const char *str, va_list ap,int *index, int *p)
{
    *index += 1;
    
    if (str[*index] == '%')
        ft_flags_percent(p);
    else if (str[*index] == 'd' || str[*index] == 'i')
        ft_flags_d(ap, p);
    else if (str[*index] == 'c')
        ft_flags_c(ap, p);
    else if (str[*index] == 's')
        ft_flags_s(ap, p);
    else if (str[*index] == 'u')
        ft_flags_u(ap, p);
    else if (str[*index] == 'x')
        ft_flags_x(ap, p);
    else if (str[*index] == 'X')
        ft_flags_ux(ap, p);
    else if (str[*index] == 'p')
        ft_flags_p(ap, p);
}


int ft_printf  (const char *str, ...)
{
    va_list ap;
    int i;
    int j;

    i = 0;
    j = 0;
    va_start(ap, str);
    while (str[i] != '\0')
    {
        if (str[i] == '%')
            ft_flags(str, ap, &i, &j);
        else
        {
            ft_putchar(str[i]);
            j++;
        }
        i++;
    }
    va_end(ap);
    return (j);
}