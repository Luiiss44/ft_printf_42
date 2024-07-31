/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarquin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:40:53 by lmarquin          #+#    #+#             */
/*   Updated: 2024/07/31 11:41:00 by lmarquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *str, ...)
{
	va_list	args;
	size_t	counter;

	if (!str)
		return (0);
	counter = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_typeformat(args, *str, &counter);
		}
		else
		{
			ft_putchar_l(*str, &counter);
		}
		str++;
	}
	va_end(args);
	return (counter);
}
