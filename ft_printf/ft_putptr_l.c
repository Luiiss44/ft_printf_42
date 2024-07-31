/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_l.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarquin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:42:04 by lmarquin          #+#    #+#             */
/*   Updated: 2024/07/31 11:42:06 by lmarquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	putptr_rec(unsigned long num, size_t *counter)
{
	char	*base;

	base = "0123456789abcdef";
	if (num >= 16)
		putptr_rec(num / 16, counter);
	ft_putchar_l(base[num % 16], counter);
}

void	ft_putptr_l(void *ptr, size_t *counter)
{
	unsigned long	num;

	num = (unsigned long)ptr;
	ft_putstr_l("0x", counter);
	putptr_rec(num, counter);
}
