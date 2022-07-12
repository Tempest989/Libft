/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 10:36:10 by druth             #+#    #+#             */
/*   Updated: 2021/09/07 10:36:10 by druth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *dest, int c, size_t n)
{
	size_t	track;

	if (dest == 0)
		return (NULL);
	track = 0;
	while (track < n)
	{
		if (*(unsigned char *)(dest + track) == (unsigned char)(c))
			return ((void *)(dest + track));
		track++;
	}
	return (NULL);
}
