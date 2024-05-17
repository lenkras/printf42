/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epolkhov <epolkhov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:26:23 by epolkhov          #+#    #+#             */
/*   Updated: 2023/11/24 14:48:09 by epolkhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>

int main()
{
// 	char	*c;
// 	int		a;
// 	a = ft_printf("s>9A%%%c&)s{8{E%i_%iI4M%sQj\t%uk- #gcz%sRWwCR)}5T%xf%iH<G}y@R9?%dt\r'Eo", 492736169, 1083681425, 588178026, "iN{3x~", -516968248, "rej]sY)[%)G=3j\t,C\"r|\vksVo\rv.!6<)\rP&XBqBdw2Z\" n^.-MIt; N(^[AnSz*jJA6wW<,S]", 2026829680, 1251823962, -386218195);
// 	printf("\na = %d\n", a);
ft_printf("NULL %s\n", (char *)NULL);
printf("NULL %s\n", (char *)NULL);
ft_printf("%p\n", "");
printf("%p\n", "");
// 	// ft_printf("%u", 0);
// 	// printf("%u", 0);
ft_printf("%x\n", -67);
printf("%x\n", -67);
ft_printf(" %u \n", LONG_MAX);
//ft_printf(" %u ", LONG_MIN);
//ft_printf(" %u ", ULONG_MAX);
//ft_printf(" %u ", 9223372036854775807LL);
printf(" %u \n", LONG_MAX);
//printf(" %u ", LONG_MIN);
//printf(" %u ", ULONG_MAX);
//printf(" %u ", 9223372036854775807LL);
//ft_printf(" %u %u %u %u %u %u %u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
//printf(" %u %u %u %u %u %u %u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
//printf(" %X ", LONG_MAX);
//ft_printf(" %X ", LONG_MAX);
int x = printf(" %X %X %X %X %X %X %w\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
int y = ft_printf(" %X %X %X %X %X %X %w\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
ft_printf("%d :: %d", x, y);
return (0);
}
