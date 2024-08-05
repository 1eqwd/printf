/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_num.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumedai <sumedai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:32:07 by sumedai           #+#    #+#             */
/*   Updated: 2024/08/05 00:33:49 by sumedai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_putstr_num(const char *str)
{
    int i;

    i = 0;
    if(!str)
        return (i);
    while(str[i])
    {
        write(1,&str[i], 1);
        i++
    }
    return(i);
}
