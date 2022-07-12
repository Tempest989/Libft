/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 10:36:10 by druth             #+#    #+#             */
/*   Updated: 2021/09/07 10:36:10 by druth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	track;

	track = 0;
	while (track < n)
	{
		if (*(unsigned char *)(s1 + track) != *(unsigned char *)(s2 + track))
			return (*(unsigned char *)(s1 + track)
				- *(unsigned char *)(s2 + track));
		track++;
	}
	return (0);
}
