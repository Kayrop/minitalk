/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmani <adahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 20:11:40 by adahmani          #+#    #+#             */
/*   Updated: 2023/11/10 20:27:14 by adahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*res;

	i = 0;
	if (!s || !*f)
		return (ft_strdup(""));
	res = ft_strdup(s);
	if (!res)
		return (res = NULL);
	while (s[i])
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	return (res);
}
