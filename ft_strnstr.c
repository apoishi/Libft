/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apadilha <apadilha@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 18:00:13 by apadilha          #+#    #+#             */
/*   Updated: 2021/09/29 22:50:26 by apadilha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (s2[i])
	{
		i++;
	}
	if (i == 0)
		return ((char *)s1);
	while (s1[j] != '\0' && (j + i - 1) < n)
	{
		while (s2[k] == s1[j + k])
		{
			if (k + 1 == i)
				return ((char *)s1 + j);
			k++;
		}
		k = 0;
		j++;
	}
	return (0);
}
