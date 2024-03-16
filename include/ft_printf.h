/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 17:47:50 by mfidimal          #+#    #+#             */
/*   Updated: 2024/03/16 11:11:36 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <stdarg.h>

int	ft_print_chr(char c);
int	ft_print_str(char *str);
int	ft_print_pointer(void *pointer);
int	ft_print_nbr(int n);
int	ft_print_u_nbr(unsigned int n);
int	ft_print_hex_lower(unsigned int n);
int	ft_print_hex_upper(unsigned int n);
int	ft_printf(const char *format, ...);
