/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:45:33 by dida-sil          #+#    #+#             */
/*   Updated: 2022/07/01 08:21:09 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_flags_c(va_list ap, int *p){

    char print;
    
    print = (char)va_arg(ap, int);
    *p += 1;
    ft_putchar(print);
}