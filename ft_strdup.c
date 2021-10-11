/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apadilha <apadilha@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 21:52:20 by apadilha          #+#    #+#             */
/*   Updated: 2021/10/09 22:52:05 by apadilha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)malloc (sizeof(char) * (ft_strlen(string) + 1));
	if (str == NULL)
		return (NULL);
	while (string[i])
	{
		str[i] = string[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
