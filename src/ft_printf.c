/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 17:58:29 by mfidimal          #+#    #+#             */
/*   Updated: 2024/03/15 21:48:12 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <stdio.h>

static int	print_args(char format, va_list params_info)
{
	int	size;

	size = 0;
	if (format == '%')
		size += ft_print_chr('%');
	else if (format == 'c')
		size += ft_print_chr(va_arg(params_info, int));
	else if (format == 's')
		size += ft_print_str(va_arg(params_info, char *));
	else if (format == 'p')
		size += ft_print_pointer(va_arg(params_info, void *));
	else if (format == 'd')
		size += ft_print_nbr(va_arg(params_info, int));
	return (size);
}

static int	print(const char *format, va_list params_info)
{
	size_t	size_imprimed_caracters;
	size_t	i;

	size_imprimed_caracters = 0;
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			size_imprimed_caracters += print_args(format[i + 1], params_info);
			i += 2;
		}
		else
		{
			ft_putchar_fd(format[i], 0);
			size_imprimed_caracters++;
			i++;
		}
	}
	return (size_imprimed_caracters);
}

int	ft_printf(const char *format, ...)
{
	va_list	params_info;
	int		return_value;

	va_start(params_info, format);
	return_value = print(format, params_info);
	va_end(params_info);
	return (return_value);
}
