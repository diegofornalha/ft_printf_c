/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:45:37 by dida-sil          #+#    #+#             */
/*   Updated: 2022/07/04 13:43:16 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <limits.h>
#include <stdarg.h>
#include <unistd.h>

int ft_printf(const char *str, ...);
void ft_flags(const char *str, va_list ap, int *index, int *p);
void ft_putchar(char c);
void ft_flags_percent(int *p);
int ft_flags_d(va_list ap, int *p);
void ft_flags_c(va_list ap, int *p);
void ft_putstr(char *str);
size_t ft_strlen(const char *s);
void ft_flags_u(va_list ap, int *p);
void ft_flags_s(va_list ap, int *p);
void ft_flags_p(va_list ap, int *p);
void ft_flags_x(va_list ap, int *p);
void ft_flags_ux(va_list ap, int *p);
void ft_puthex(unsigned int n, int *p);
void ft_putunbr(unsigned int n, int *p);
void ft_putuhex(unsigned int n, int *p);
void ft_putaddress(unsigned long n, int *p);

#endif