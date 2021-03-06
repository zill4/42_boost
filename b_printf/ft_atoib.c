#include "ft_printf.h"


char to_hex(int64_t i)
{
	i = i % 10;
	return ('a' + i);
}

void ft_atoib(long  value, int base, int *count)
{
		long  div_c;
		long  mod_c;

		div_c = value / base;
		mod_c = value % base;

			if (value == 0)
				return;
		value = div_c;
		ft_atoib(value, base, count);
			if (mod_c >= 10 && base > 10)
				ft_putchar(to_hex(mod_c), count);
			else
				ft_putnbr(mod_c, count);
}
