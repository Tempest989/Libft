/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 10:36:12 by druth             #+#    #+#             */
/*   Updated: 2021/09/07 10:36:12 by druth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_check(char const *s, unsigned int start, size_t len)
{
	size_t	track;

	track = 0;
	while (s[track] != '\0')
		track++;
	track++;
	if (start > track || start < 0)
		return (0);
	if ((start + len) > track)
		return (-1 * (start - track));
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		track;
	char		*output;

	if (s == NULL)
		return (NULL);
	len = ft_check(s, start, len);
	output = (char *)malloc(sizeof(char) * (len + 1));
	if (output == NULL)
		return (NULL);
	track = 0;
	while (track < len)
	{
		output[track] = s[track + start];
		track++;
	}
	output[track] = '\0';
	return (output);
}
