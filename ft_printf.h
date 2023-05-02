/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 13:19:41 by dduarte-          #+#    #+#             */
/*   Updated: 2023/05/02 12:06:44 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int		ft_formats(va_list args, const char format);
int		ft_printf(const char *format, ...);
int		ft_printnbr(int num);
int		ft_printstr(char *s);
int		ft_hex_len(unsigned int n);
int		ft_print_hex(unsigned int n, const char format);
int		ft_ptr_len(unsigned long n);
int		ft_print_ptr(unsigned long long ptr);
int		ft_printchar(char c);
int		ft_printpercent(void);
int		ft_num_len(unsigned int num);
int		ft_print_unsigned(unsigned int n);
void	ft_putstr(char *str);
void	ft_put_hex(unsigned int n, const char format);
void	ft_put_ptr(unsigned long n);
char	*ft_uitoa(unsigned int n);

#endif