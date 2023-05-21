/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthongso <sthongso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:54:02 by sthongso          #+#    #+#             */
/*   Updated: 2023/05/21 19:18:12 by sthongso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdint.h>

int		ft_printf(const char *str, ...);
int		ft_specifier(va_list a, const char c);
int		ft_printchar(char c);
int		ft_putstr(char *s);
int		ft_putunsigned(unsigned int n);
int		ft_pointer(long long n);
int		ft_printhex(unsigned long long n, int capital);
int		ft_putnbr(int n);

/*int	main(void)
{
	char	ch;
	char	*str1;
	int		num1;
	int		num2;
	double	num3;
	int		*ptr;

	ch = 'A';
	str1 = "hello world";
	num1 = 0;
	num2 = 0;
	num3 = 0.2;
	ptr = &num1;
	printf("c: %c\n", ch);
	ft_printf("c: %c\n", ch);
	printf("s: %s\n", str1);
	ft_printf("s: %s\n", str1);
	printf("P: %d\n", printf("p: %p\n", 0));
	printf("P: %d\n", ft_printf("p: %p\n", 0));
	printf("d: %d\n", num2);
	ft_printf("d: %d\n", num2);
	printf("i: %i\n", num2);
	ft_printf("i: %i\n\n", num2);
	printf("U: %d\n", printf("u: %u\n", num2));
	printf("U: %d\n\n", ft_printf("u: %u\n", num2));
	printf("x: %d\n", printf("x: %x\n", num2));
	printf("x: %d\n\n", ft_printf("x: %x\n", num2));
	printf("X: %d\n", printf("X: %X\n", num2));
	printf("X: %d\n", ft_printf("X: %X\n", num2));
	printf("%%%%: %d%%\n", num2);
	ft_printf("%%%%: %d%%\n", num2);
	printf("Float : %f", num3);
}
*/
int	main(void)
{
	printf("r: %d\n", printf("r: %c %s %d %i %u %x %X %p %% \n", NULL, NULL, NULL, NULL, NULL, NULL, NULL));
	printf("f: %d\n", ft_printf("f: %c %s %d %i %u %x %X %p %% \n", NULL, NULL, NULL, NULL, NULL, NULL, NULL));
	printf("r: %d\n", printf("r: %c %s %d %i %u %x %X %p %% \n", 'G',"hello", -123, -123, -123, -123, -123, "hello"));
	printf("f: %d\n", ft_printf("f: %c %s %d %i %u %x %X %p %% \n", 'G',"hello", -123, -123, -123, -123, -123, "hello"));
	printf("r: %d\n", printf("r: %c %s %d %i %u %x %X %p %% \n", 'G',"hello", INT32_MAX, INT32_MAX, INT32_MAX, INT32_MAX, INT32_MAX, "hello"));
	printf("r: %d\n", ft_printf("r: %c %s %d %i %u %x %X %p %% \n", 'G',"hello", INT32_MAX, INT32_MAX, INT32_MAX, INT32_MAX, INT32_MAX, "hello"));
	printf("r: %d\n", printf("r: %c %s %d %i %u %x %X %p %% \n", 'G',"hello", INT32_MIN, INT32_MIN, INT32_MIN,INT32_MIN, INT32_MIN, "hello"));
	printf("r: %d\n", ft_printf("r: %c %s %d %i %u %x %X %p %% \n", 'G',"hello", INT32_MIN, INT32_MIN, INT32_MIN,INT32_MIN, INT32_MIN, "hello"));
}
