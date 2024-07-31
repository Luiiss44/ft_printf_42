#include "ft_printf.h"

void	ft_puthex_l(unsigned int num, size_t *counter, char *base)
{
	if (num >= 16)
		ft_puthex_l(num / 16, counter, base);
	ft_putchar_l(base[num % 16], counter);
}
