/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfunsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmani <adahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 21:55:50 by adahmani          #+#    #+#             */
/*   Updated: 2023/11/24 12:24:43 by adahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../includes/libft.h"

int	ft_num_len(unsigned	int n)
{
	int	len;

	len = 0;
	while (n)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_uitoa(unsigned int n)
{
	char	*num;
	int		len;

	len = ft_num_len(n);
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (!num)
		return (0);
	num[len] = '\0';
	while (n)
	{
		num[len - 1] = n % 10 + 48;
		n = n / 10;
		len--;
	}
	return (num);
}

int	ft_printunsigned(unsigned int d)
{
	int		res;
	char	*n;

	res = 0;
	if (d == 0)
		res = res + write(1, "0", 1);
	else
	{
		n = ft_uitoa(d);
		res = res + ft_printstr(n);
		free(n);
	}
	return (res);
}
