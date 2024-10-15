/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarejok <okarejok@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:40:39 by okarejok          #+#    #+#             */
/*   Updated: 2023/11/23 13:26:49 by okarejok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_str(const char *str, t_list *res)
{
	int	i;

	i = 0;
	if (!str)
		str = "(null)";
	while (str[i])
	{
		ft_print_char(str[i], res);
		i++;
	}
}

void	ft_print_char(const char c, t_list *res)
{
	if (res->error == -1)
		return ;
	if (write(1, &c, 1) < 0)
		res->error = -1;
	else
		res->length += 1;
}
