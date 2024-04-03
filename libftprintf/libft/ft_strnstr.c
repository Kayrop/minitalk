/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmani <adahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 22:04:34 by adahmani          #+#    #+#             */
/*   Updated: 2023/11/10 16:40:26 by adahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == 0)
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		while (big[i + j] && little[j] && big[i + j] == little[j]
			&& i + j < len)
			j++;
		if (j == ft_strlen(little))
			return ((char *)(big + i));
		i++;
	}
	return (0);
}
