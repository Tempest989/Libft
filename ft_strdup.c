/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 10:36:11 by druth             #+#    #+#             */
/*   Updated: 2021/09/07 10:36:11 by druth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		track;
	char	*copy;

	if (src == NULL)
		return (NULL);
	track = 0;
	while (src[track] != '\0')
		track++;
	copy = (char *)malloc(sizeof(char) * (track + 1));
	if (copy == NULL)
		return (NULL);
	track = 0;
	while (src[track] != '\0')
	{
		copy[track] = src[track];
		track++;
	}
	copy[track] = '\0';
	return (copy);
}
