
#include "ft_printf.h"

int ft_printf_u(unsigned int n)
{
    int ret;

    ret = 0;
    ret += ft_putunbr_base(n, BASE_10);
    if (ret == -1)
        return  (-1);
    return (ret);
}
