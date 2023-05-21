/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthongso <sthongso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:31:04 by sthongso          #+#    #+#             */
/*   Updated: 2023/05/21 17:08:31 by sthongso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putunsigned(unsigned int n)
{
	int	i;

	i = 0;
	if (n >= 10)
	{
		i = i + ft_putunsigned(n / 10);
		i = i + ft_putunsigned(n % 10);
	}
	else
		i = i + ft_printchar(n + '0');
	return (i);
}

int	ft_putstr(char *s)
{
	int	i;

	if (s == NULL)
		return (write (1, "(null)", 6));
	else if (s != NULL)
	{
		i = 0;
		while (s[i] != '\0')
		{
			write (1, &s[i], 1);
			i++;
		}
	}
	return (i);
}

int	ft_specifier(va_list a, const char c)
{
	int	total;

	total = 0;
	if (c == 'c')
		total = total + ft_printchar(va_arg(a, int));
	else if (c == 's')
		total = total + ft_putstr(va_arg(a, char *));
	else if (c == 'p')
		total = total + ft_pointer(va_arg(a, unsigned long long));
	else if (c == 'd' || c == 'i')
		total = total + ft_printnbr(va_arg(a, int));
	else if (c == 'u')
		total = total + ft_putunsigned(va_arg(a, unsigned int));
	else if (c == 'x')
		total = total + ft_printhex(va_arg(a, unsigned int), 0);
	else if (c == 'X')
		total = total + ft_printhex(va_arg(a, unsigned int), 1);
	else if (c == '%')
		total = total + ft_printchar('%');
	return (total);
}

int	ft_printf(const char *str, ...)
{
	int			i;
	va_list		a;
	int			total;

	i = 0;
	total = 0;
	va_start (a, str);
	if (str != NULL)
	{
		while (str[i] != '\0')
		{
			if (str[i] == '%')
				total = total + ft_specifier(a, str[++i]);
			else
				total = total + ft_printchar(str[i]);
			i++;
		}
	}
	va_end(a);
	return (total);
}
