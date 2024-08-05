/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumedai <sumedai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 20:02:21 by sumedai           #+#    #+#             */
/*   Updated: 2024/08/05 00:32:24 by sumedai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_printf_p(unsigned int n)
{
    int     ret;

    ret += ft_putchar_num("0X");
    ret += ft_putnunbr_base(n, BASE_MIN);
    return (ret);
}
