/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epolkhov <epolkhov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:47:18 by epolkhov          #+#    #+#             */
/*   Updated: 2023/12/08 12:41:50 by epolkhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format(char conversion, va_list args)
{
	int		result;

	result = 0;
	if (conversion == '%')
		result = ft_putchar('%');
	else if (conversion == 'c')
		result = ft_putchar(va_arg(args, long));
	else if (conversion == 'd' || conversion == 'i')
		result = ft_putnbr(va_arg(args, int));
	else if (conversion == 's')
		result = ft_putstr(va_arg(args, char *));
	else if (conversion == 'x' || conversion == 'X')
		result = print_digit(va_arg(args, unsigned int), 16, conversion);
	else if (conversion == 'u')
		result = print_digit(va_arg(args, unsigned int), 10, conversion);
	else if (conversion == 'p')
		result = print_ptr(va_arg(args, unsigned long long));
	else
		result = write(1, &conversion, 1);
	return (result);
}

int	ft_printf(const char *argnum, ...)
{
	int		i;
	va_list	args;
	int		count;
	int		temp;

	va_start(args, argnum);
	i = 0;
	count = 0;
	while (argnum[i])
	{
		if (argnum[i] == '%')
			temp = print_format(argnum[++i], args);
		else
			temp = write(1, &argnum[i], 1);
		if (temp == -1)
		{
			va_end(args);
			return (-1);
		}
		count += temp;
		i++;
	}
	va_end(args);
	return (count);
}
