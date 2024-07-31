/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_l.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarquin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:47:30 by lmarquin          #+#    #+#             */
/*   Updated: 2024/07/31 11:47:34 by lmarquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_l(char *str, size_t *counter)
{
	if (!str)
		str = "(null)";
	while (*str)
		ft_putchar_l(*str++, counter);
}
