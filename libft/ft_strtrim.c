/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:20:04 by dduarte-          #+#    #+#             */
/*   Updated: 2023/04/20 09:57:41 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (i <= j && ft_strchr(set, s1[i]))
		i++;
	if (i > j)
		return (ft_strdup(s1 + j + 1));
	while (j >= 0 && ft_strchr(set, s1[j]))
		j--;
	str = malloc(sizeof(char) * (j - i + 2));
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[i], j - i + 2);
	return (str);
}
