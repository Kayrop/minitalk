/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmani <adahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:39:15 by adahmani          #+#    #+#             */
/*   Updated: 2023/11/10 16:38:25 by adahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		((char *)s)[i] = '\0';
		n--;
		i++;
	}
	return ;
}

/* int	main(int argc, char *argv[])
{
	unsigned long		i;
	int					argv2;
	void				*oui;

	argv2 = atoi(argv[2]);
	oui = (char *)argv[1];
	(void)argc;
	i = 0;
	(void)ft_bzero((void *)argv[1], argv2);
	while (i < 6)
	{
		printf("%c", ((char *)oui)[i]);
		i++;
	}
} */
