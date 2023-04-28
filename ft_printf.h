/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 13:19:41 by dduarte-          #+#    #+#             */
/*   Updated: 2023/04/28 11:01:12 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printnbr(int n);
int		ft_printstr(char *str);
int		ft_hex_len(unsigned int n);
int		ft_print_hex(unsigned int n, const char format);
int		ft_ptr_len(unsigned int n);
int		ft_print_ptr(unsigned long long ptr);
char	ft_printchar(char c);
void	ft_putstr(char *str);
void	ft_put_hex(unsigned int n, const char format);
void	ft_put_ptr(uintptr_t n);

#endif