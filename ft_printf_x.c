/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumedai <sumedai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 21:56:00 by sumedai           #+#    #+#             */
/*   Updated: 2024/08/05 01:08:38 by sumedai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_printf_x(unsigned long long n)
{
    int ret;

    ret = ft_putunbr_base(n, BASE_MIN);
    return (ret);
}
