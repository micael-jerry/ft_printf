/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 17:47:50 by mfidimal          #+#    #+#             */
/*   Updated: 2024/03/15 16:13:00 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <stdarg.h>

int	ft_print_chr(char c);
int	ft_print_str(char *str);
int	ft_printf(const char *format, ...);
