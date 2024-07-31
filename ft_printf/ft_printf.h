/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarquin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:45:59 by lmarquin          #+#    #+#             */
/*   Updated: 2024/07/31 11:46:12 by lmarquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(char const *str, ...);

void	ft_putchar_l(char c, size_t	*counter);
void	ft_putstr_l(char *str, size_t *counter);
void	ft_putptr_l(void *ptr, size_t *counter);
void	ft_putint_l(int num, size_t *counter);
void	ft_putnbr_l(int num, size_t *counter);
void	ft_putuint_l(unsigned int num, size_t *counter);
void	ft_puthex_l(unsigned int num, size_t *counter, char *base);
void	ft_typeformat(va_list args, char format, size_t *counter);

#endif
