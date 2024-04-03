/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmani <adahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:29:03 by adahmani          #+#    #+#             */
/*   Updated: 2023/11/10 16:38:38 by adahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*p;
	unsigned long	l;

	l = 2147483647;
	if (((nmemb * size) > l) || (size > l && (nmemb != 0))
		|| (nmemb > l && (size != 0)))
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (0);
	ft_bzero(p, nmemb * size);
	return (p);
}

/* int	main(void)
{
	unsigned long	l;
	size_t			a;
	size_t			b;

	l = SIZE_MAX;
	a = -5;
	b = SIZE_MAX;
	printf("%zu\n", a);
	printf("%s\n", (char *)ft_calloc(-5, 0));
	return (0);
} */
