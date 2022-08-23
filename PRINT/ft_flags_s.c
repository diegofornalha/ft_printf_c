/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:46:01 by dida-sil          #+#    #+#             */
/*   Updated: 2022/07/04 08:37:14 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_flags_s(va_list ap, int *p)
{
	char *str;

	str = va_arg(ap, char *);
	if (str == NULL)
		str = "(null)";
	ft_putstr(str);
	*p += ft_strlen(str);
}