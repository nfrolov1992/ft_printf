#include "ft_printf.h"
#include <stdio.h>

int		main()
{
	printf("%#-10x\n", 0xa);
	ft_printf("%#-10x\n", 0xa);
	return (0);
}