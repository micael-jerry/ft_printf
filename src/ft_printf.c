/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 17:58:29 by mfidimal          #+#    #+#             */
/*   Updated: 2024/03/15 09:25:44 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	params_info;
	size_t	size_imprimed_caracters;
	size_t	i;

	va_start(params_info, format);
	size_imprimed_caracters = 0;
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			ft_putchar_fd(format[i], 0);
			size_imprimed_caracters++;
			i++;
			continue ;
		}
	}
	return (size_imprimed_caracters);
}
