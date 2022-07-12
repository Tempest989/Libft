/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 10:36:12 by druth             #+#    #+#             */
/*   Updated: 2021/09/07 10:36:12 by druth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	track;
	char			*output;

	if (s == NULL || f == NULL)
		return (NULL);
	track = 0;
	while (s[track] != '\0')
		track++;
	output = (char *)malloc(sizeof(char) * (track + 1));
	if (output == NULL)
		return (NULL);
	track = 0;
	while (s[track] != '\0')
	{
		output[track] = f(track, s[track]);
		track++;
	}
	output[track] = '\0';
	return (output);
}
