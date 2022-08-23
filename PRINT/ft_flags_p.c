/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:20:57 by dida-sil          #+#    #+#             */
/*   Updated: 2022/07/04 18:49:42 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_flags_p(va_list ap, int *p)
{
	unsigned long			print;

	print = va_arg (ap, unsigned long);

	ft_putchar('0');
	ft_putchar('x');
	*p = *p + 2;
	ft_putaddress(print, p);
}
