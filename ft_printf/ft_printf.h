/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarquin <lmarquin@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 12:51:21 by lmarquin          #+#    #+#             */
/*   Updated: 2024/04/13 13:25:34 by lmarquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int 	ft_printf(char const *str, ...);

void	ft_putchar_l(char c, size_t	*counter);
void	ft_putstr_l(char *str, size_t *counter);
void	ft_putptr_l(void *ptr, size_t *counter);
void	ft_putint_l(int num, size_t *counter);
void	ft_putnbr_l(int num, size_t *counter);
void	ft_putuint_l(unsigned int num, size_t *counter);
void	ft_puthex_l(unsigned int num, size_t *counter, char *base);
void    ft_typeformat(va_list args, char format, size_t *counter);

#endif
