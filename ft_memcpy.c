/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apadilha <apadilha@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 16:26:33 by apadilha          #+#    #+#             */
/*   Updated: 2021/10/09 22:42:46 by apadilha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*cdest;
	char		*csrc;
	size_t		i;

	cdest = (char *)dest;
	csrc = (char *)src;
	i = 0;
	if (cdest == 0 && csrc == 0)
		return (0);
	while (i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (dest);
}
