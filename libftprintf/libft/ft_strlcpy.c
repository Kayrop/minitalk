/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmani <adahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:26:25 by adahmani          #+#    #+#             */
/*   Updated: 2023/11/15 21:13:57 by adahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen((const char *)src));
	while (src[i] && size - 1 > 0)
	{
		dst[i] = src[i];
		size--;
		i++;
	}
	return (dst[i] = '\0', ft_strlen((const char *)src));
}
