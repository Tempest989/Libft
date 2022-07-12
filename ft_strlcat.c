/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 10:36:11 by druth             #+#    #+#             */
/*   Updated: 2021/09/07 10:36:11 by druth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	track;
	size_t	second;
	size_t	length;

	length = ft_strlen(dest);
	track = length;
	second = 0;
	if (length < size - 1 && size > 0)
	{
		while (src[second] && (length + second) < (size - 1))
		{
			dest[track] = src[second];
			track++;
			second++;
		}
		dest[track] = '\0';
	}
	if (length >= size)
		length = size;
	while (src[second] != '\0')
		second++;
	return (length + second);
}
