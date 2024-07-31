/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint_l.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarquin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:42:40 by lmarquin          #+#    #+#             */
/*   Updated: 2024/07/31 11:42:43 by lmarquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuint_l(unsigned int num, size_t *counter)
{
	if (num >= 10)
		ft_putuint_l(num / 10, counter);
	ft_putchar_l((num % 10) + '0', counter);
}
