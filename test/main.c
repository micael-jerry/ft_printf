/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 08:28:33 by mfidimal          #+#    #+#             */
/*   Updated: 2024/03/15 16:46:48 by mfidimal         ###   ########.fr       */
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

int	main(void)
{
	test_print_without_args();
	test_print_chr_1();
	test_print_chr_2();
	test_print_chr_3();
	test_print_str_1();
	return (0);
}
