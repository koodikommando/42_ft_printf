/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarejok <okarejok@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:46:41 by okarejok          #+#    #+#             */
/*   Updated: 2023/11/23 13:27:16 by okarejok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_hex(unsigned int nbr, const char *format, t_list *res)
{
	if (nbr >= 16)
	{
		ft_put_hex(nbr / 16, format, res);
		ft_put_hex(nbr % 16, format, res);
	}
	else
	{
		if (nbr <= 9)
			ft_print_char(nbr + '0', res);
		else
		{
			if (*format == 'x')
				ft_print_char(nbr - 10 + 'a', res);
			else if (*format == 'X')
				ft_print_char(nbr - 10 + 'A', res);
		}
	}
}

void	ft_print_hex(unsigned int nbr, const char *format, t_list *res)
{
	if (nbr == '0')
		ft_print_char('0', res);
	ft_put_hex(nbr, format, res);
}
