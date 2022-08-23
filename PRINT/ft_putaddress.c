/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 15:55:39 by dida-sil          #+#    #+#             */
/*   Updated: 2022/07/04 19:22:56 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putaddresss(unsigned long n)
{
		if (n == 10)
		ft_putchar('a');
	if (n == 11)
		ft_putchar('b');
	if (n == 12)
		ft_putchar('c');
	if (n == 13)
		ft_putchar('d');
	if (n == 14)
		ft_putchar('e');
	if (n == 15)
		ft_putchar('f');
}

void	ft_putaddress(unsigned long n, int *p)
{
	if (n > 15)
	{
		ft_putaddress((n / 16), p);
		ft_putaddress((n % 16), p);
	}
	else if (n < 10)
	{
		*p = *p + 1;
		ft_putchar(n + '0');
	}
	else
	{
		*p = *p + 1;
		ft_putaddresss(n);
	}
}
