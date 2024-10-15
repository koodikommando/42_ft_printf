/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarejok <okarejok@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:13:20 by okarejok          #+#    #+#             */
/*   Updated: 2023/11/23 13:42:47 by okarejok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

typedef struct t_list
{
	int	length;
	int	error;
}	t_list;

int		ft_printf(const char *format, ...);
void	ft_handle_spec(const char *format, va_list ap, t_list *res);
void	print_str(const char *str, t_list *res);
void	print_nbr(int n, t_list *res);
void	ft_print_char(const char c, t_list *res);
void	ft_put_hex(unsigned int nbr, const char *format, t_list *res);
void	ft_print_hex(unsigned int nbr, const char *format, t_list *res);
void	print_unsigned_nbr(unsigned int n, t_list *res);
void	ft_put_ptr(unsigned long ptr, t_list *res);
void	ft_print_ptr(unsigned long ptr, t_list *res);

#endif
