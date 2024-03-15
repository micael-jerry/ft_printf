/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 08:28:33 by mfidimal          #+#    #+#             */
/*   Updated: 2024/03/15 22:33:29 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../include/ft_printf.h"

void	test_print_without_args(void)
{
	printf("********************************\n");
	printf("PRINTF:\n");
	int printf_r = printf("Hello!\n");
	printf("return val: %d\n", printf_r);
	printf("FT_PRINTF:\n");
	int ft_printf_r = ft_printf("Hello!\n");
	printf("return val: %d\n", ft_printf_r);
}

void	test_print_chr_1(void)
{
	printf("********************************\n");
	printf("PRINTF:\n");
	int printf_r = printf("Hello%%!\n");
	printf("return val: %d\n", printf_r);
	printf("FT_PRINTF:\n");
	int ft_printf_r = ft_printf("Hello%%!\n");
	printf("return val: %d\n", ft_printf_r);
}

void	test_print_chr_2(void)
{
	printf("********************************\n");
	printf("PRINTF:\n");
	int printf_r = printf("Hello%c! \n", '#');
	printf("return val: %d\n", printf_r);
	printf("FT_PRINTF:\n");
	int ft_printf_r = ft_printf("Hello%c! \n", '#');
	printf("return val: %d\n", ft_printf_r);
}

void	test_print_chr_3(void)
{
	printf("********************************\n");
	printf("PRINTF:\n");
	int printf_r = printf("Hello%c!%c \n", '#', 'e');
	printf("return val: %d\n", printf_r);
	printf("FT_PRINTF:\n");
	int ft_printf_r = ft_printf("Hello%c!%c \n", '#', 'e');
	printf("return val: %d\n", ft_printf_r);
}

void	test_print_str_1(void)
{
	printf("********************************\n");
	printf("PRINTF:\n");
	int printf_r = printf("Hello %c%s!\n", 'W', "orld");
	printf("return val: %d\n", printf_r);
	printf("FT_PRINTF:\n");
	int ft_printf_r = ft_printf("Hello %c%s!\n", 'W', "orld");
	printf("return val: %d\n", ft_printf_r);
}

void	test_print_p_1(void)
{
	int test = 10;
	printf("********************************\n");
	printf("PRINTF:\n");
	int printf_r = printf("Pointer: %p\n", &test);
	printf("return val: %d\n", printf_r);
	printf("FT_PRINTF:\n");
	int ft_printf_r = ft_printf("Pointer: %p\n", &test);
	printf("return val: %d\n", ft_printf_r);
}

void	test_print_p_2(void)
{
	int test = 10;
	printf("********************************\n");
	printf("PRINTF:\n");
	int printf_r = printf("Pointer: %p %p\n", &test, test);
	printf("return val: %d\n", printf_r);
	printf("FT_PRINTF:\n");
	int ft_printf_r = ft_printf("Pointer: %p %p\n", &test, test);
	printf("return val: %d\n", ft_printf_r);
}

void	test_print_d_1(void)
{
	printf("********************************\n");
	printf("PRINTF:\n");
	int printf_r = printf("Pointer: %d %i\n", 42, -24);
	printf("return val: %d\n", printf_r);
	printf("FT_PRINTF:\n");
	int ft_printf_r = ft_printf("Pointer: %d %i\n", 42, -24);
	printf("return val: %d\n", ft_printf_r);
}

void	test_print_u_1(void)
{
	printf("********************************\n");
	printf("PRINTF:\n");
	int printf_r = printf("Pointer: %u %u\n", 42, -24);
	printf("return val: %d\n", printf_r);
	printf("FT_PRINTF:\n");
	int ft_printf_r = ft_printf("Pointer: %u %u\n", 42, -24);
	printf("return val: %d\n", ft_printf_r);
}

int	main(void)
{
	test_print_without_args();
	test_print_chr_1();
	test_print_chr_2();
	test_print_chr_3();
	test_print_str_1();
	test_print_p_1();
	test_print_p_2();
	test_print_d_1();
	test_print_u_1();
	return (0);
}
