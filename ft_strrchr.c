/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 10:36:12 by druth             #+#    #+#             */
/*   Updated: 2021/09/07 10:36:12 by druth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	track;
	int	last;

	track = 0;
	last = -1;
	while (str[track] != '\0')
	{
		if (str[track] == (char)(c))
			last = track;
		track++;
	}
	if (str[track] == '\0' && (char)(c) == '\0')
		return ((char *)(str + track));
	if (last != -1)
		return ((char *)(str + last));
	else
		return (NULL);
}
