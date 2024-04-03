/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmani <adahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:11:55 by adahmani          #+#    #+#             */
/*   Updated: 2023/11/10 16:39:17 by adahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	tmp1 = (unsigned char *)dest;
	tmp2 = (unsigned char *)src;
	if (dest == src)
		return (dest);
	if (n == 0)
		return (dest);
	if (tmp2 < tmp1)
	{
		while (n--)
			*(tmp1 + n) = *(tmp2 + n);
		return (dest);
	}
	while (n--)
		*tmp1++ = *tmp2++;
	return (dest);
}

/* int	main(void)
{
	int	i;
	char s[] = {65, 66, 67, 68, 69, 0, 45};
	char s0[] = { 0,  0,  0,  0,  0,  0, 0};

	i = 0;
	ft_memmove(s0, s, 7);
	while (i < 7)
	{
		if (s[i] == s0[i])
			write(1, "ok ", 3);
		else
			write(1, "ko ", 3);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
 */