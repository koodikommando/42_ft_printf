/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbr_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarejok <okarejok@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:57:56 by okarejok          #+#    #+#             */
/*   Updated: 2023/11/23 13:26:57 by okarejok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_nbr(int n, t_list *res)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		ft_print_char('-', res);
		nbr = -nbr;
	}
	if (nbr > 9)
	{
		print_nbr(nbr / 10, res);
		nbr = nbr % 10;
	}
	if (nbr < 10)
		ft_print_char(nbr + 48, res);
}

void	print_unsigned_nbr(unsigned int n, t_list *res)
{
	unsigned long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		ft_print_char('-', res);
		nbr = -nbr;
	}
	if (nbr > 9)
	{
		print_nbr(nbr / 10, res);
		nbr = nbr % 10;
	}
	if (nbr < 10)
		ft_print_char(nbr + 48, res);
}
