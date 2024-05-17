/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epolkhov <epolkhov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:38:07 by epolkhov          #+#    #+#             */
/*   Updated: 2023/11/24 13:41:03 by epolkhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *argnum, ...);
int	print_format(char conversion, va_list args);
int	ft_putstr(char *s);
int	print_digit(unsigned long n, unsigned long base, char conversion);
int	ft_putnbr(long n);
int	ft_putchar(char c);
int	putnbr_recursive(long n);
int	print_ptr(unsigned long long ptr);

#endif