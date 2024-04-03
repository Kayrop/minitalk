/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmani <adahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:36:19 by adahmani          #+#    #+#             */
/*   Updated: 2023/11/10 16:40:56 by adahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			j = i;
		i++;
		if (s[i] == '\0' && j != 0)
			return ((char *)s + j);
	}
	if ((unsigned char)c == 0)
		return ((char *)s + i);
	i = 0;
	if (s[i] == (unsigned char)c)
		return ((char *)s + i);
	return (0);
}
