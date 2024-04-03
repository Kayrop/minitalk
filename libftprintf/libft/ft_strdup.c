/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmani <adahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:44:34 by adahmani          #+#    #+#             */
/*   Updated: 2023/11/15 19:43:52 by adahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*cp;
	int		i;

	i = 0;
	cp = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!cp)
		return (NULL);
	while (s[i] != '\0')
	{
		cp[i] = s[i];
		i++;
	}
	cp[i] = 0;
	return (cp);
}

/*#include <stdio.h>

int	main(void)
{
	char	*s;
	char	*p;
	char	*t;

	s = ft_strdup("TestWowowo");
	p = ft_strdup("484df41hdy1h1151erg55reg5er55er55");
	t = strdup("484df41hdy1h1151erg55reg5er55er55");
	printf("%s\n", s);
	printf("%s :%s\n", t,
		p);
	free(s);
	free(p);
	free(t);
	return (0);
}
*/