/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthongso <sthongso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 18:41:38 by sthongso          #+#    #+#             */
/*   Updated: 2023/05/21 19:14:24 by sthongso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(unsigned long long n, int capital)
{
	char	*hex;
	char	hex_char[16];
	int		i;
	int		j;

	i = 0;
	hex = "0123456789abcdef";
	if (capital != 0)
		hex = "0123456789ABCDEF";
	if (n == 0)
	{
		i = i + ft_printchar('0');
		return (i);
	}
	while (n != 0)
	{
		hex_char[i] = hex[n % 16];
		n = n / 16;
		i++;
	}
	j = i;
	while (--j >= 0)
		ft_printchar(hex_char[j]);
	return (i);
}

int	ft_pointer(uintptr_t n)
{
	int	num;

	num = 0;
	num = num + ft_putstr("0x");
	if (n == 0)
		num = num + ft_printchar('0');
	else
		num = num + ft_printhex(n, 0);
	return (num);
}
