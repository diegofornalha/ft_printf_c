/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:47:41 by dida-sil          #+#    #+#             */
/*   Updated: 2022/07/04 08:37:12 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_flags_u(va_list ap, int *p)
{
	unsigned int print;

	print = va_arg(ap, unsigned int);
	ft_putunbr(print, p);
}