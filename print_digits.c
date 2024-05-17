/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_digits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epolkhov <epolkhov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:39:09 by epolkhov          #+#    #+#             */
/*   Updated: 2023/11/24 13:54:45 by epolkhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putnbr_recursive(long n)
{
	int	i;
	int	temp;

	i = 0;
	if (n >= 10)
	{
		temp = ft_putnbr(n / 10);
		if (temp < 0)
			return (-1);
		i += temp;
		temp = ft_putnbr(n % 10);
		if (temp < 0)
			return (-1);
		i += temp;
	}
	else
	{
		temp = ft_putchar(n + 48);
		if (temp < 0)
			return (-1);
		i += temp;
	}
	return (i);
}

int	ft_putnbr(long n)
{
	int	i;
	int	temp;

	i = 0;
	if (n < 0)
	{
		temp = ft_putchar('-');
		if (temp < 0)
			return (-1);
		i += temp;
		n = -n;
	}
	i += putnbr_recursive(n);
	return (i);
}

int	print_digit(unsigned long n, unsigned long base, char conversion)
{
	int		count;
	char	*str_base;

	count = 0;
	if (conversion == 'X')
		str_base = "0123456789ABCDEF";
	else
		str_base = "0123456789abcdef";
	if (n < base)
	{
		count += ft_putchar(str_base[n]);
		if (count < 0)
			return (-1);
	}
	else
	{
		count = print_digit(n / base, base, conversion);
		if (count < 0)
			return (-1);
		count += print_digit(n % base, base, conversion);
		if (count < 0)
			return (-1);
	}
	return (count);
}

int	print_ptr(unsigned long long ptr)
{
	int	result;

	result = write(1, "0x", 2);
	if (result < 0)
		return (-1);
	result += print_digit((unsigned long long)ptr, 16, 'x');
	return (result);
}
