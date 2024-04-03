/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmani <adahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:11:41 by adahmani          #+#    #+#             */
/*   Updated: 2023/11/10 16:38:56 by adahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/* int	main(void)
{
	int	c;

	c = '*';
	if (ft_isdigit(c))
		write(1, "ft oui\n", 7);
	else
		write(1, "ft non\n", 7);
	if (isdigit(c))
		write(1, "oui\n", 4);
	else
		write(1, "non\n", 4);
} */
