/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_percent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:20:57 by dida-sil          #+#    #+#             */
/*   Updated: 2022/07/01 08:28:54 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_flags_p(va_list ap, int *p)
{
	void			*print;
	unsigned long	ptr;

	print = va_arg(ap, void*);
	ptr = (unsigned long)(print);
	write(1, "0x", 2);
	*p = *p + 2;
	ft_putaddress(ptr, p);
}
