/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarquin <lmarquin@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 12:14:15 by lmarquin          #+#    #+#             */
/*   Updated: 2024/04/13 14:11:59 by lmarquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_printf(char const *str, ...)
{
	va_list	args;
	size_t	counter;

	if(!str)
		return(0);
	counter = 0;
	va_start(args, str);//los argumentos y el tipo de argumento que inicializo

	while(*str)
	{
		if (*str == '%')
		{
			str++;
			ft_typeformat(args, str, &counter);
		}
		else
		{
			ft_putchar_l(str, &counter);	
		}
		str++;
	}
	return(counter);
}










