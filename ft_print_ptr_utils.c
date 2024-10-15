/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarejok <okarejok@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:29:11 by okarejok          #+#    #+#             */
/*   Updated: 2023/11/23 13:27:06 by okarejok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_ptr(unsigned long ptr, t_list *res)
{
	if (ptr >= 16)
	{
		ft_put_ptr(ptr / 16, res);
		ft_put_ptr(ptr % 16, res);
	}
	else
	{
		if (ptr <= 9)
			ft_print_char(ptr + '0', res);
		else if (ptr <= 16)
			ft_print_char(ptr - 10 + 'a', res);
	}
}

void	ft_print_ptr(unsigned long ptr, t_list *res)
{
	print_str("0x", res);
	if (ptr == 0)
		ft_print_char('0', res);
	else
		ft_put_ptr(ptr, res);
}
