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

void	ft_flags_ux(va_list ap, int *p)
{
	unsigned int print;

	print = va_arg(ap, unsigned int);
	ft_putuhex(print, p);
}