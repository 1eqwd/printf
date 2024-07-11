/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumedai <sumedai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 17:10:00 by sumedai           #+#    #+#             */
/*   Updated: 2024/07/11 21:08:35 by sumedai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

static int ft__specifier(const char *fmt, va_list ap)
{
    fmt++;
    if (*fmt == 'c')
        return (ft_putchar_num(va_arg(ap, int)));
    if (*fmt == 's')
        return (ft_putstr_num(va_arg(ap, const char*)));
    if (*fmt == 'p' || *fmt == 'x' || *fmt == 'X')
    {
        if(*fmt == 'p')
            wtitie(1,"0x",2);
        ft_set16(va_arg(ap,int));
    }
    if (*fmt == 'd' || *fmt == 'i')
        ft_putnbr_num(va_arg(ap, int));
    if (*fmt == 'u')

}

static int ft_putstr_num(const char *str,int start, char c)
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

int main(void)
{
    printf("");
}