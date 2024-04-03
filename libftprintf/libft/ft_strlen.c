/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmani <adahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:35:18 by adahmani          #+#    #+#             */
/*   Updated: 2023/11/10 16:40:15 by adahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/* int	main(void)
{
	char	*c;
	int		a;
	int		b;

	c = "Oui, bonjour ! haha je suis boblenon";
	a = ft_strlen(&*c);
	b = strlen(&*c);
	printf("%d\n%d\n", a, b);
} */
