/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apadilha <apadilha@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 18:09:23 by apadilha          #+#    #+#             */
/*   Updated: 2021/10/11 15:47:45 by apadilha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char	*temp;

	temp = (char *)malloc(n * sizeof(char));
	if (temp == NULL)
	{
		return (NULL);
	}
	ft_memcpy(temp, s2, n);
	ft_memcpy(s1, temp, n);
	free(temp);
	return (s1);
}
