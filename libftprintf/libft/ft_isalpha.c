/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmani <adahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:05:25 by adahmani          #+#    #+#             */
/*   Updated: 2023/11/14 21:11:40 by adahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

/* int	main(void)
{
	int	c;

	c = '1';
	if (ft_isalpha(c))
		write(1, "ft oui\n", 7);
	else
		write(1, "ft non\n", 7);
	if (isalpha(c))
		write(1, "oui\n", 4);
	else
		write(1, "non\n", 4);
}
 */