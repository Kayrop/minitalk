/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmani <adahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:28:37 by adahmani          #+#    #+#             */
/*   Updated: 2023/11/10 16:38:58 by adahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	else
		return (0);
}

/* int	main(void)
{
	int	c;

	c = '~';
	if (ft_isprint(c))
		write(1, "ft oui\n", 7);
	else
		write(1, "ft non\n", 7);
	if (isprint(c))
		write(1, "oui\n", 4);
	else
		write(1, "non\n", 4);
} */
