/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 10:36:10 by druth             #+#    #+#             */
/*   Updated: 2021/09/07 10:36:10 by druth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int				track;

	if (lst == NULL)
		return (0);
	track = 0;
	while (lst != NULL)
	{
		track++;
		lst = lst->next;
	}
	return (track);
}
