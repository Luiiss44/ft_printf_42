#include "ft_printf.h"

void	ft_putstr_l(char *str, size_t *counter)
{
	if (!str)
		str = "(null)";
	while (*str)
		ft_putchar_l(*str++, counter);
}
