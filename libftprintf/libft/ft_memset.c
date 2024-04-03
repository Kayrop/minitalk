/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmani <adahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:52:14 by adahmani          #+#    #+#             */
/*   Updated: 2023/11/10 16:39:21 by adahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int				i;

	i = 0;
	while (n > 0)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		n--;
		i++;
	}
	return (s);
}

/* int	main(void)
{
	int		i;
	char	tab[100];

	memset(tab, 0, (100));
	ft_memset(tab, 'A', 0);
	i = 0;
	while (tab[i])
	{
		write(1, &tab[i], 1);
		i++;
	}
	write(1, "\n", 1);
	ft_memset(tab, 'A', 42);
	i = 0;
	while (tab[i])
	{
		write(1, &tab[i], 1);
		i++;
	}
} */
