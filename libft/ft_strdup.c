/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:25:00 by dduarte-          #+#    #+#             */
/*   Updated: 2023/04/19 15:07:32 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*a;
	int		i;
	int		size;

	size = 0;
	while (src[size])
		++size;
	a = ((char *) malloc(sizeof(char) * (size + 1)));
	if (!a)
		return (NULL);
	i = 0;
	while (src[i])
	{
		a[i] = src[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}
