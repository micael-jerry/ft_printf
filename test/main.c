/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 08:28:33 by mfidimal          #+#    #+#             */
/*   Updated: 2024/03/21 19:31:26 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <stdio.h>

void	basic_test(void)
{
	int	printf_r;
	int	ft_printf_r;

	printf("********************************\n");
	printf("PRINTF:\n");
	printf_r = printf("1, 2, 3, -d test, testing, 0.4s sound, 1, 2, 3xp, sound, -*dtest");
	printf("\nreturn_val: %d\n", printf_r);
	printf("FT_PRINTF:\n");
	ft_printf_r = ft_printf("1, 2, 3, -d test, testing, 0.4s sound, 1, 2, 3xp, sound, -*dtest");
	printf("\nreturn_val: %d\n", ft_printf_r);
}

void	test_print_chr_1(void)
{
	int	printf_r;
	int	ft_printf_r;

	printf("********************************\n");
	printf("PRINTF:\n");
	printf_r = printf("Hello%%!\n");
	printf("return_val: %d\n", printf_r);
	printf("FT_PRINTF:\n");
	ft_printf_r = ft_printf("Hello%%!\n");
	printf("return_val: %d\n", ft_printf_r);
}

void	test_print_chr_2(void)
{
	int	printf_r;
	int	ft_printf_r;

	printf("********************************\n");
	printf("PRINTF:\n");
	printf_r = printf("Hello%c! \n", '#');
	printf("return_val: %d\n", printf_r);
	printf("FT_PRINTF:\n");
	ft_printf_r = ft_printf("Hello%c! \n", '#');
	printf("return_val: %d\n", ft_printf_r);
}

void	test_print_chr_3(void)
{
	int	printf_r;
	int	ft_printf_r;

	printf("********************************\n");
	printf("PRINTF:\n");
	printf_r = printf("Hello%c!%c \n", '#', 'e');
	printf("return_val: %d\n", printf_r);
	printf("FT_PRINTF:\n");
	ft_printf_r = ft_printf("Hello%c!%c \n", '#', 'e');
	printf("return_val: %d\n", ft_printf_r);
}

void	test_print_str_1(void)
{
	int	printf_r;
	int	ft_printf_r;

	printf("********************************\n");
	printf("PRINTF:\n");
	printf_r = printf("Hello %c%s!\n", 'W', "orld");
	printf("return_val: %d\n", printf_r);
	printf("FT_PRINTF:\n");
	ft_printf_r = ft_printf("Hello %c%s!\n", 'W', "orld");
	printf("return_val: %d\n", ft_printf_r);
}

void	test_print_p_1(void)
{
	int	*test;
	int	printf_r;
	int	ft_printf_r;

	printf("********************************\n");
	printf("PRINTF:\n");
	printf_r = printf("Pointer: %p\n", NULL);
	printf("return_val: %d\n", printf_r);
	printf("FT_PRINTF:\n");
	ft_printf_r = ft_printf("Pointer: %p\n", NULL);
	printf("return_val: %d\n", ft_printf_r);
}

void	test_print_p_2(void)
{
	int	test;
	int	printf_r;
	int	ft_printf_r;

	test = 10;
	printf("********************************\n");
	printf("PRINTF:\n");
	printf_r = printf("Pointer: %p %p\n", &test, &test);
	printf("return_val: %d\n", printf_r);
	printf("FT_PRINTF:\n");
	ft_printf_r = ft_printf("Pointer: %p %p\n", &test, &test);
	printf("return_val: %d\n", ft_printf_r);
}

void	test_print_d_1(void)
{
	int	printf_r;
	int	ft_printf_r;

	printf("********************************\n%%d test 1\n");
	printf("PRINTF:\n");
	printf_r = printf("%d %d", 2147483647, (int)-2147483648);
	printf("\nreturn_val: %d\n", printf_r);
	printf("FT_PRINTF:\n");
	ft_printf_r = ft_printf("%d %d", 2147483647, (int)-2147483648);
	printf("\nreturn_val: %d\n", ft_printf_r);
}

void	test_print_u_1(void)
{
	int	printf_r;
	int	ft_printf_r;

	printf("********************************\n");
	printf("PRINTF:\n");
	printf_r = printf("Pointer: %u %u\n", 42, -24);
	printf("return_val: %d\n", printf_r);
	printf("FT_PRINTF:\n");
	ft_printf_r = ft_printf("Pointer: %u %u\n", 42, -24);
	printf("return_val: %d\n", ft_printf_r);
}

void	test_print_x_1(void)
{
	int	printf_r;
	int	ft_printf_r;

	printf("********************************\n");
	printf("PRINTF:\n");
	printf_r = printf("Pointer: %x\n", 42);
	printf("return_val: %d\n", printf_r);
	printf("FT_PRINTF:\n");
	ft_printf_r = ft_printf("Pointer: %x\n", 42);
	printf("return_val: %d\n", ft_printf_r);
}

int	main(void)
{
	basic_test();
	test_print_chr_1();
	test_print_chr_2();
	test_print_chr_3();
	test_print_str_1();
	test_print_p_1();
	test_print_p_2();
	test_print_d_1();
	test_print_u_1();
	test_print_x_1();
	return (0);
}
