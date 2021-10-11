/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apadilha <apadilha@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 18:58:48 by apadilha          #+#    #+#             */
/*   Updated: 2021/10/09 23:41:25 by apadilha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		s1++;
	len = ft_strlen(&s1[start]);
	if (len != 0)
		while (s1[start + len - 1] && ft_strrchr(set, s1[start + len - 1]))
			len--;
	return (ft_substr(s1, start, len));
}
