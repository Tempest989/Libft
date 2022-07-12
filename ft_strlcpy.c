/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 10:36:12 by druth             #+#    #+#             */
/*   Updated: 2021/09/07 10:36:12 by druth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	track;
	size_t	length;

	track = 0;
	while (src[track] != '\0')
		track++;
	length = track;
	if (size == 0)
		return (length);
	track = 0;
	while (src[track] && track < (size - 1))
	{
		dest[track] = src[track];
		track++;
	}
	dest[track] = '\0';
	return (length);
}
