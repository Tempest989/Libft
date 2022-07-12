/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 10:36:12 by druth             #+#    #+#             */
/*   Updated: 2021/09/07 10:36:12 by druth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t size)
{
	size_t	track;
	size_t	check;

	track = 0;
	check = 0;
	if (needle == NULL || needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[track] != '\0' && track < size)
	{
		if (haystack[track] == needle[check])
		{
			while (haystack[track + check] == needle[check]
				&& track + check < size)
			{
				if (needle[check + 1] == '\0')
					return ((char *)haystack + track);
				check++;
			}
			check = 0;
		}
		track++;
	}
	return (NULL);
}
