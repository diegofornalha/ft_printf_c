/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuhex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 19:08:07 by dida-sil          #+#    #+#             */
/*   Updated: 2022/07/04 19:33:40 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuhexx(unsigned int n)
{
	if (n == 10)
			ft_putchar('A');
		if (n == 11)
			ft_putchar('B');
		if (n == 12)
			ft_putchar('C');
		if (n == 13)
			ft_putchar('D');
		if (n == 14)
			ft_putchar('E');
		if (n == 15)
			ft_putchar('F');
}

void	ft_putuhex(unsigned int n, int *p)
{
	if(n > 15)
	{
		ft_putuhex(n / 16, p);
		ft_putuhex(n % 16, p);
	}
	else if (n < 10)
	{
		*p = *p + 1;
		ft_putchar(n + '0');
	}
	else
	{
		*p = *p + 1;
		ft_putuhexx(n);
	}
}
