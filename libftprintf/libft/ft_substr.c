/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmani <adahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:23:17 by adahmani          #+#    #+#             */
/*   Updated: 2023/11/10 16:41:02 by adahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*cp;

	i = 0;
	if (!s)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	cp = (char *)malloc((len + 1) * sizeof(char));
	if (!cp)
		return (NULL);
	while (i < len && s[i + start] != '\0')
	{
		cp[i] = s[i + start];
		i++;
	}
	cp[i] = '\0';
	return (cp);
}

/* #include <stdio.h>

int	main(void)
{
	printf("%s", ft_substr("tripouille", 0, 42));
	return (0);
} */
