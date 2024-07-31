#include "ft_printf.h"

void	ft_putuint_l(unsigned int num, size_t *counter)
{
	if (num >= 10)
		ft_putuint_l(num / 10, counter);
	ft_putchar_l((num % 10) + '0', counter);
}
