/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:22:28 by dida-sil          #+#    #+#             */
/*   Updated: 2022/07/04 13:32:45 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_intmin(int *p)
{
	if (write(1, "-2147483648", 11) == -1)
		return (-1);
	*(p) += 11;
	return (0);
}

int	ft_unsigned_nbr(unsigned int u, int *p)
{
	char	c;

	if (u > 9)
	{
		if (ft_unsigned_nbr(u / 10, p))
			return (-1);
		return (ft_unsigned_nbr(u % 10, p));
	}
	c = u + '0';
	*p += 1;
	if (write(1, &c, 1) == -1)
		return (-1);
	return (0);
}

int	ft_signed_nbr(int i, int *p)
{
	char	c;

	if (i == INT_MIN)
		return (ft_intmin(p));
	if (i < 0)
	{
		if (write(1, "-", 1) == -1)
			return (-1);
		*p += 1;
		i *= -1;
	}
	if (i > 9)
	{
		if (ft_signed_nbr(i / 10, p))
			return (-1);
		return (ft_signed_nbr(i % 10, p));
	}
	c = i + '0';
	*p += 1;
	if (write(1, &c, 1) == -1)
		return (-1);
	return (0);
}


int	ft_flags_d(va_list ap, int *p)
{
	int	i;

	i = va_arg(ap, int);
	if (ft_signed_nbr(i, p) == -1)
		return (-1);
	return (0);
}