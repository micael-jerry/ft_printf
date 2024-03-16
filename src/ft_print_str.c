/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 16:12:17 by mfidimal          #+#    #+#             */
/*   Updated: 2024/03/16 16:47:23 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_print_str(char *str)
{
	if (!str)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	ft_putstr_fd(str, 1);
	return (ft_strlen((const char *)str));
}
