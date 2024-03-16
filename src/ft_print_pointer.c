/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 17:10:21 by mfidimal          #+#    #+#             */
/*   Updated: 2024/03/15 21:46:49 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static void	ft_write_base_16_nb(unsigned long long int nbr, char *base,
		int size, int *len)
{
	char	a;

	if (nbr >= (unsigned long long int)size)
		ft_write_base_16_nb(nbr / size, base, size, len);
	a = base[nbr % size];
	ft_putchar_fd(a, 1);
	*len = *len + 1;
}

static int	ft_putnbr_base_16(unsigned long long int nbr)
{
	char	*base;
	int		len;

	len = 0;
	base = ft_strdup("0123456789abcdef");
	ft_write_base_16_nb(nbr, base, 16, &len);
	free(base);
	return (len);
}

int	ft_print_pointer(void *pointer)
{
	unsigned long long int	pointer_to_int;
	int						size;

	pointer_to_int = (unsigned long long int)pointer;
	ft_putstr_fd("0x", 1);
	size = 2;
	size += ft_putnbr_base_16(pointer_to_int);
	return (size);
}
