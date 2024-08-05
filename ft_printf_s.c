/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumedai <sumedai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 22:01:49 by sumedai           #+#    #+#             */
/*   Updated: 2024/08/05 01:03:26 by sumedai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_printf_s(const char *s)
{
    int ret;
    
    ret = 0;
    if (s == NULL)
        s = "(null)";
    ret = ft_putstr_num(s);
    return (ret);
}

// int main(void)
// {
//     int i = ft_printf_s("fadas");
//     printf("%d\n",i);
//     return (0);
// }