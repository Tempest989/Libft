/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 10:36:10 by druth             #+#    #+#             */
/*   Updated: 2021/09/07 10:36:10 by druth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_freeloader(t_list *lst, void (*del)(void *))
{
	t_list	*temp;

	temp = lst->next;
	ft_lstclear(&lst, del);
	while (lst != NULL)
	{
		temp = lst->next;
		del(lst);
		lst = temp;
	}
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*start;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	newlst = ft_lstnew(f(lst->content));
	if (newlst == NULL)
		return (NULL);
	start = newlst;
	lst = lst->next;
	while (lst != NULL)
	{
		newlst->next = ft_lstnew(f(lst->content));
		if (newlst->next == NULL)
			return (ft_freeloader(start, del));
		lst = lst->next;
		newlst = newlst->next;
	}
	return (start);
}
