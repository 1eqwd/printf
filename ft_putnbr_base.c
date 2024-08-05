/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumedai <sumedai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 20:39:43 by sumedai           #+#    #+#             */
/*   Updated: 2024/08/05 01:07:02 by sumedai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_putnbr_base(long long num,char *base)
{
    int         ret;
    long long   base_len;
    
    ret = 0;
    base_len = (long long)ft_strlen(base);
    if (num < 0)
    {
        ret += ft_putchar_num('-');
        num *= -1;
    }
    if (num >= base_len)
        ret += ft_putnbr_base(num / base_len, base);
    ret += ft_putchar_num(base[num % base_len]);
    return (ret);
}

int main(void)
{
    printf("%d\n", ft_putnbr_base(23445,"0123456789"));
    return (0);
}