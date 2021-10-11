/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apadilha <apadilha@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 14:54:20 by apadilha          #+#    #+#             */
/*   Updated: 2021/10/09 22:43:36 by apadilha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*aux;
	size_t	counter;

	aux = (char *)s;
	counter = 0;
	while (counter < n)
	{
		aux[counter] = c;
		counter++;
	}
	return (s);
}
