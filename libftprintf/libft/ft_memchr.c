/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmani <adahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 21:22:22 by adahmani          #+#    #+#             */
/*   Updated: 2023/11/10 18:37:30 by adahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (n-- > 0)
	{
		if (((unsigned char *)s)[i] == ((unsigned char)c))
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
