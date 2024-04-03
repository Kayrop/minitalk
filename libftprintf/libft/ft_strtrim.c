/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmani <adahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 22:33:12 by adahmani          #+#    #+#             */
/*   Updated: 2023/11/15 21:47:49 by adahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_in_charset(char c, char const *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s;
	size_t	e;
	size_t	i;
	char	*trim;

	s = 0;
	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[s] && check_in_charset(s1[s], set))
		s++;
	e = ft_strlen(s1);
	while (e > s && check_in_charset(s1[e - 1], set))
		e--;
	trim = (char *)malloc((e - s + 1) * sizeof(char));
	if (!trim)
		return (NULL);
	i = 0;
	while (s < e)
		trim[i++] = s1[s++];
	return (trim[i] = '\0', trim);
}

/* int	main(void)
{
	printf("%s", ft_strtrim(" xtripouille   xxx   ", " x"));
}
 */