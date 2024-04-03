/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmani <adahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:10:06 by adahmani          #+#    #+#             */
/*   Updated: 2023/11/17 19:10:52 by adahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_in_charset(char c, char str)
{
	if (str == c)
		return (1);
	return (0);
}

static int	ft_strlen_word(char const *str, char charset)
{
	int	i;

	i = 0;
	while (str[i] && !(check_in_charset(str[i], charset)))
		i++;
	return (i);
}

static int	ft_count_words(char const *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] != '\0' && check_in_charset(str[i], c))
			i++;
		if (str[i] != '\0')
			j++;
		while (str[i] != '\0' && !check_in_charset(str[i], c))
			i++;
	}
	return (j);
}

static char	*ft_word(char const *str, char charset)
{
	char	*res;
	int		i;

	res = (char *)malloc(sizeof(char) * (ft_strlen_word(str, charset) + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < ft_strlen_word(str, charset))
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**ok;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	ok = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!ok)
		return (NULL);
	while (*s)
	{
		while (*s != '\0' && check_in_charset(*s, c))
			s++;
		if (*s != '\0')
		{
			ok[i] = ft_word(s, c);
			i++;
		}
		while (*s != '\0' && !(check_in_charset(*s, c)))
			s++;
	}
	ok[i] = 0;
	return (ok);
}

/* int	main(void)
{
	int	i;
	char	**tab;

	i = 0;
	tab = ft_split("  tripouille  42  ", ' ');
	while (i <= ft_count_words("  tripouille  42  ", ' '))
	{
		printf("%s\n", tab[i]);
		i++;
	}
} */
