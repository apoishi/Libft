/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apadilha <apadilha@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 18:11:40 by apadilha          #+#    #+#             */
/*   Updated: 2021/09/24 20:12:30 by apadilha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*cstr;
	unsigned char	cc;

	i = 0;
	cstr = (unsigned char *)str;
	cc = (unsigned char)c;
	while (i < n)
	{
		if (*cstr == cc)
			return (cstr);
		cstr++;
		i++;
	}
	return (NULL);
}
