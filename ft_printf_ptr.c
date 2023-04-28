/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 10:36:10 by dduarte-          #+#    #+#             */
/*   Updated: 2023/04/28 11:00:52 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ptr_len(uintptr_t n)
{
	unsigned int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n = n / 16;
	}
	return (len);
}

void	ft_put_ptr(uintptr_t n)
{
	if (n >= 16)
	{
		ft_put_ptr(n / 16, format);
		ft_put_ptr(n % 16, format);
	}
	else
	{
		if (n <= 9)
			ft_putchar_fd((n + 48), 1);
		else
			ft_putchar_fd((n - 10 + 'a'), 1);
	}
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	print_len;

	print_len = 0;
	print_len = print_len + write(1, "0x", 2);
	if (ptr == 0)
	{
		print_len = print_len + write(1, "0", 1);
	}
	else
	{
		ft_put_ptr(ptr);
		print_len += ft_ptr_len(ptr);
	}
	return (print_len);
}