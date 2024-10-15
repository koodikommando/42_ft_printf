/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarejok <okarejok@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:16:14 by okarejok          #+#    #+#             */
/*   Updated: 2023/11/23 13:26:42 by okarejok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_handle_spec(const char *format, va_list ap, t_list *res)
{
	if (*format == 's')
		print_str(va_arg(ap, char *), res);
	else if (*format == 'd' || *format == 'i')
		print_nbr(va_arg(ap, int), res);
	else if (*format == 'c')
		ft_print_char(va_arg(ap, int), res);
	else if (*format == 'x' || *format == 'X')
		ft_print_hex(va_arg(ap, unsigned int), format, res);
	else if (*format == 'u')
		print_unsigned_nbr(va_arg(ap, unsigned int), res);
	else if (*format == '%')
		ft_print_char('%', res);
	else if (*format == 'p')
		ft_print_ptr(va_arg(ap, unsigned long), res);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	t_list	res;

	res.error = 0;
	res.length = 0;
	va_start(ap, format);
	while (*format && res.error == 0)
	{
		if (*format == '%')
		{
			ft_handle_spec(format + 1, ap, &res);
			format++;
		}
		else if (*format != '%')
			ft_print_char(*format, &res);
		format++;
	}
	va_end(ap);
	if (res.error == -1)
		return (-1);
	return (res.length);
}
