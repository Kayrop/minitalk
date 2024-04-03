/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmani <adahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:46:12 by adahmani          #+#    #+#             */
/*   Updated: 2023/11/14 21:04:56 by adahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_list;
	t_list	*res;

	if (!lst || !f || !del)
		return (0);
	n_list = ft_lstnew(f(lst->content));
	if (!n_list)
		return (0);
	res = n_list;
	lst = lst->next;
	while (lst)
	{
		n_list->next = ft_lstnew(f(lst->content));
		if (!n_list->next)
		{
			ft_lstclear(&res, del);
			return (0);
		}
		n_list = n_list->next;
		lst = lst->next;
	}
	n_list->next = NULL;
	return (res);
}
