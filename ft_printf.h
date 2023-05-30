/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthongso <sthongso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 19:27:54 by sthongso          #+#    #+#             */
/*   Updated: 2023/05/21 13:46:22 by sthongso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
int		ft_specifier(va_list a, const char c);
int		ft_printchar(char c);
int		ft_putstr(char *s);
int		ft_putunsigned(unsigned int n);
int		ft_pointer(uintptr_t n);
int		ft_strlen(unsigned long long n);
int		ft_printhex(unsigned long long n, int capital);
int		ft_printnbr(int n);
char	*ft_itoa(int n);
int		count_digits(long int n);
int		ft_printstr(char *str);

#endif
