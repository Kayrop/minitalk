/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmani <adahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:09:04 by adahmani          #+#    #+#             */
/*   Updated: 2023/11/17 19:16:03 by adahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	if (dst == 0 && size == 0)
	{
		return (0);
	}
	i = 0;
	j = 0;
	k = ft_strlen(dst);
	while (dst[i] != '\0')
		i++;
	if (size < k)
		return ((size_t)(ft_strlen(src) + size));
	else if (size > 0)
	{
		while (src[j] != '\0' && i < size - 1)
			dst[i++] = src[j++];
	}
	return (dst[i] = '\0', (size_t)(i + ft_strlen(src) - j));
}
