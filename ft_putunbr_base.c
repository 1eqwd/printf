/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumedai <sumedai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 20:17:43 by sumedai           #+#    #+#             */
/*   Updated: 2024/08/05 00:11:46 by sumedai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_putunbr_base(unsigned long long n, char *base)
{
    int ret;
    unsigned  long base_len;
    
    ret = 0;
    base_len = (unsigned long long)ft_strlen(base);
    if(n >= base_len)
        ret += ft_putunbr_base(n / base_len, base);
    ret += ft_putchar_num(base[n % base_len]);
    return (ret);
}

// int main(int ac, char **av)
// {
//     if (ac != 2)
//         return (0);
//     unsigned long long num = ft_atoi(av[1]);
//     printf("%d\n", ft_putunbr_base(num, "0123456789abcdef"));
//     return (0);
// }
