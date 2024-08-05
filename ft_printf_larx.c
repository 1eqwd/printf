/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_larx.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumedai <sumedai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 22:04:18 by sumedai           #+#    #+#             */
/*   Updated: 2024/08/05 01:09:03 by sumedai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_printf_larx(unsigned long long n)
{
    long ret;
    
    ret = ft_putunbr_base(n, BASE_MAX);
    return (ret);
}
