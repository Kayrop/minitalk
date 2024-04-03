/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmani <adahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:46:55 by adahmani          #+#    #+#             */
/*   Updated: 2023/11/10 16:40:00 by adahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1l;
	size_t	s2l;
	size_t	stot;
	char	*join;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	s1l = ft_strlen((char *)s1);
	s2l = ft_strlen(s2);
	stot = s1l + s2l + 1;
	join = malloc(sizeof(char) * stot);
	if (!join)
		return (0);
	ft_memmove(join, s1, s1l);
	ft_memmove(join + s1l, s2, s2l);
	join[stot - 1] = '\0';
	return (join);
}
