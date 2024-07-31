/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_typeformat.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarquin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:48:03 by lmarquin          #+#    #+#             */
/*   Updated: 2024/07/31 11:48:06 by lmarquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_typeformat(va_list args, char format, size_t *counter)
{
	if (format == 'c')
		ft_putchar_l((char)va_arg(args, int), counter);
	else if (format == 's')
		ft_putstr_l(va_arg(args, char *), counter);
	else if (format == 'p')
		ft_putptr_l(va_arg(args, void *), counter);
	else if (format == 'd' || format == 'i')
		ft_putnbr_l(va_arg(args, int), counter);
	else if (format == 'u')
		ft_putuint_l(va_arg(args, unsigned int), counter);
	else if (format == 'x')
		ft_puthex_l(va_arg(args, unsigned int), counter, "0123456789abcdef");
	else if (format == 'X')
		ft_puthex_l(va_arg(args, unsigned int), counter, "0123456789ABCDEF");
	else if (format == '%')
		ft_putchar_l('%', counter);
}
