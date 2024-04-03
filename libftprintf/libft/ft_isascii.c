/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmani <adahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:22:00 by adahmani          #+#    #+#             */
/*   Updated: 2023/11/15 19:39:06 by adahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	int	c;

	c = 128;
	if (ft_isascii(c))
		write(1, "ft oui\n", 7);
	else
		write(1, "ft non\n", 7);
	if (isascii(c))
		write(1, "oui\n", 4);
	else
		write(1, "non\n", 4);
}
*/