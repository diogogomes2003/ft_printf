/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:51:46 by dduarte-          #+#    #+#             */
/*   Updated: 2023/04/20 11:37:28 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*check_if(size_t size, char *str)
{
	if (size == 0 && str[1] == '\0')
		*(str + size) = '0';
	if (size == 0 && str[1] != '\0')
		*(str + size) = '-';
	return (str);
}

long	check_nbr(long nbr)
{
	if (nbr < 0)
		nbr = -nbr;
	return (nbr);
}

int	check_n(int n)
{
	if (n > 0)
		n = 0;
	else
		n = 1;
	return (n);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	size_t	size;

	nbr = n;
	size = check_n(n);
	nbr = check_nbr(nbr);
	while (n)
	{
		n /= 10;
		size++;
	}
	str = (char *) malloc(size + 1);
	if (!str)
		return (0);
	*(str + size--) = '\0';
	while (nbr > 0)
	{
		*(str + size--) = nbr % 10 + '0';
		nbr /= 10;
	}
	str = check_if(size, str);
	return (str);
}
