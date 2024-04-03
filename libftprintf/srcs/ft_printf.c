/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmani <adahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 20:19:57 by adahmani          #+#    #+#             */
/*   Updated: 2023/11/24 13:30:52 by adahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../includes/libft.h"

int	ft_printchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_diffparam(va_list lst, const char c)
{
	int	res;

	res = 0;
	if (c == 'c')
		res = res + ft_printchar(va_arg(lst, int));
	else if (c == 's')
		res = res + ft_printstr(va_arg(lst, char *));
	else if (c == 'p')
		res = res + ft_printptr(va_arg(lst, unsigned long long));
	else if (c == 'd' || c == 'i')
		res = res + ft_printdecint(va_arg(lst, int));
	else if (c == 'u')
		res = res + ft_printunsigned(va_arg(lst, unsigned int));
	else if (c == 'x' || c == 'X')
		res = res + ft_printhex(va_arg(lst, unsigned int), c);
	else if (c == '%')
		res = res + ft_printpercent();
	return (res);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	lst;
	int		res;

	i = 0;
	res = 0;
	va_start(lst, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			res = res + ft_diffparam(lst, str[i + 1]);
			i++;
		}
		else
			res = res + ft_printchar(str[i]);
		i++;
	}
	va_end(lst);
	return (res);
}
