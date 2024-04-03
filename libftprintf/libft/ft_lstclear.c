/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmani <adahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:33:15 by adahmani          #+#    #+#             */
/*   Updated: 2023/11/15 21:12:05 by adahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*res;
	t_list	*tmp;

	if (!lst || !del)
		return ;
	res = *lst;
	while (res)
	{
		tmp = res->next;
		(ft_lstdelone(res, del), res = tmp);
	}
	*lst = NULL;
}
