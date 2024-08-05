/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumedai <sumedai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 17:10:00 by sumedai           #+#    #+#             */
/*   Updated: 2024/08/05 01:09:47 by sumedai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

static int ft__specifier(const char *fmt, va_list ap)
{
    fmt++;
    if (*fmt == 'c')
        return (ft_printf_c(va_arg(ap, const char)));
    if (*fmt == 's')
        return (ft_printf_s(va_arg(ap, char*)));
    if (*fmt == 'x')
        return (ft_printf_x(va_arg(ap, unsigned long long)));
    if(*fmt == 'X')
        return (ft_printf_larx(va_arg(ap, unsigned long long)));
    if (*fmt == 'd')
        ft_putnbr_num(va_arg(ap, int));
    if (*fmt == 'i')
        ft_putnbr_num(va_arg(ap, int));
    if (*fmt == 'u')
        return (ft_printf_u(va_arg(ap, unsigned int)));
    if (*fmt == 'p')
        return (ft_pirntf_p(va_arg(ap, unsigned int)));
    if (*fmt == '%')
        return (ft_putchar_num(va_arg(ap, const char)));

}

static int ft_putstr_n(const char *str,int start, char c)
{
    int count
    while(str[start] && (str[start] != c && str[start] != '\0'))
    {
        count++;
        write(1, &str[i], 1);
    }
    return(count);
}

int ft_printf(const char *fmt, ...)
{
    va_list ap;
    int n;
    int num;
    int i;

    n = 0;
    va_start(ap, fmt);
    if(fmt == NULL)
        return (0);
    while(fmt[i])
    {
        if(fmt[i] != '%')
        {
            num = ft_putstr_num(fmt[i], i, '%');
            n += num;
        }
        else
        {
            num = ft__specifier(fmt[i],ap);
            n += num;
        }
    }
    va_end(ap);
    return(n);
}
