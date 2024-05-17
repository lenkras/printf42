/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_chr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epolkhov <epolkhov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:50:53 by epolkhov          #+#    #+#             */
/*   Updated: 2023/11/24 13:57:22 by epolkhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (s == NULL)
	{
		count = write (1, "(null)", 6);
		if (count < 0)
			return (-1);
		return (6);
	}
	while (s[i])
	{
		count = write (1, &s[i], 1);
		if (count < 0)
			return (-1);
		i++;
	}
	return (i);
}
