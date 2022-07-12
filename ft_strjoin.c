/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 10:36:11 by druth             #+#    #+#             */
/*   Updated: 2021/09/07 10:36:11 by druth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_join(char const *s1, char const *s2, char *output)
{
	int	track;
	int	final;

	track = 0;
	final = 0;
	while (s1 != NULL && s1[track] != '\0')
	{
		output[track] = s1[track];
		track++;
	}
	while (s2 != NULL && s2[final] != '\0')
	{
		output[track + final] = s2[final];
		final++;
	}
	output[track + final] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		track;
	int		second;
	char	*output;

	track = 0;
	while (s1 != NULL && s1[track] != '\0')
		track++;
	second = 0;
	while (s2 != NULL && s2[second] != '\0')
		second++;
	output = (char *)malloc(sizeof(char) * (track + second + 1));
	if (output == NULL)
		return (NULL);
	ft_join(s1, s2, output);
	return (output);
}
