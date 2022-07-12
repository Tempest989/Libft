/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 10:36:10 by druth             #+#    #+#             */
/*   Updated: 2021/09/07 10:36:10 by druth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	track;

	if (n == 0)
		return (dest);
	if (dest == 0 || src == 0)
		return (NULL);
	if (dest > src)
	{
		track = (int)(n) - 1;
		while (track >= 0)
		{
			*(char *)(dest + track) = *(char *)(src + track);
			track--;
		}
	}
	else
	{
		track = 0;
		while (track < (int)(n))
		{
			*(char *)(dest + track) = *(char *)(src + track);
			track++;
		}
	}
	return (dest);
}
