/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_num.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumedai <sumedai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 17:46:49 by sumedai           #+#    #+#             */
/*   Updated: 2024/07/11 19:45:28 by sumedai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"


static int ft_numlen(int n)
{
	int	len;
	int	tmp;

	len = 0;
	tmp = n;
	if (n == 0)
		return (0);
	if (n < 0)
	{
		len++;
	}
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return(len);
}

int ft_putnbr_num(int n)
{

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		write(1,'-', 1);
		n *= -1;
	}
	if (n >= 10)
		ft_putnbr_num(n / 10);
	write(1, (n % 10) + '0', 1);
	return(ft_numlen(n));
}
