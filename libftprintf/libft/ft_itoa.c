/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayrop <kayrop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:08:55 by adahmani          #+#    #+#             */
/*   Updated: 2024/01/12 23:40:15 by kayrop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_rev_char_tab(char *tab, size_t size)
{
	size_t	i;
	size_t	j;
	int		c;

	i = 0;
	j = size - 1;
	while (i < size / (size_t)2)
	{
		c = tab[i];
		tab[i++] = tab[j];
		tab[j--] = c;
	}
}

long	intlen(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*autre(int n, int sign, char *str)
{
	int		i;

	i = 0;
	while (n != 0)
	{
		str[i++] = '0' + (n % 10);
		n = n / 10;
	}
	if (sign < 0)
		str[i] = '-';
	ft_rev_char_tab(str, ft_strlen(str));
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		sign;

	i = 0;
	sign = 1;
	if (n < 0)
	{
		sign = -1;
		n = -1 * n;
	}
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = ft_calloc((intlen(n) + (sign == -1) + 1), sizeof(*str));
	if (!(str))
		return (NULL);
	if (n == 0)
		str[i] = '0';
	else
		str = autre(n, sign, str);
	return (str);
}

/* int	main(void)
{
	printf("%s, %s\n", "42", ft_itoa(42));
} */
