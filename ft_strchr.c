/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apadilha <apadilha@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 19:22:58 by apadilha          #+#    #+#             */
/*   Updated: 2021/10/10 20:41:47 by apadilha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (NULL == s)
		return (NULL);
	while (*s)
	{
		if (*s == (char) c)
			return ((char *)s);
		s++;
	}
	if (c == '\0' && *s == '\0')
		return ((char *)s);
	return (NULL);
}
