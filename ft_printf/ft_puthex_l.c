/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_l.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarquin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:46:42 by lmarquin          #+#    #+#             */
/*   Updated: 2024/07/31 11:46:48 by lmarquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_l(unsigned int num, size_t *counter, char *base)
{
	if (num >= 16)
		ft_puthex_l(num / 16, counter, base);
	ft_putchar_l(base[num % 16], counter);
}
