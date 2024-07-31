/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint_l.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarquin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:41:39 by lmarquin          #+#    #+#             */
/*   Updated: 2024/07/31 11:41:42 by lmarquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putint_l(int num, size_t *counter)
{
	if (num < 0)
	{
		ft_putchar_l('-', counter);
		if (num == -2147483648)
		{
			ft_putstr_l("2147483648", counter);
			return ;
		}
		num = -num;
	}
	if (num >= 10)
		ft_putint_l(num / 10, counter);
	ft_putchar_l((num % 10) + '0', counter);
}
