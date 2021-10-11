/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apadilha <apadilha@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 17:56:26 by apadilha          #+#    #+#             */
/*   Updated: 2021/10/10 20:17:55 by apadilha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	get_nbr_str(char *str, int n, size_t size)
{
	str[size] = '\0';
	if (n >= 0)
	{
		while (size --)
		{
			str[size] = (n % 10) + '0';
			n = n / 10;
		}
	}
	else
	{
		while (--size)
		{
			str[size] = (n % 10) * -1 + '0';
			n = n / 10;
		}
		str[size] = '-';
	}
}

char	*ft_itoa(int n)
{
	int		temp;
	char	*str;
	size_t	size;

	if (n >= 0)
		size = 1;
	else
		size = 2;
	temp = n / 10;
	while (temp)
	{
		size++;
		temp /= 10;
	}
	str = malloc (size + 1);
	if (str == NULL)
		return (NULL);
	get_nbr_str(str, n, size);
	return (str);
}
