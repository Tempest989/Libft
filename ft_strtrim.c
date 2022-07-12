/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 10:36:12 by druth             #+#    #+#             */
/*   Updated: 2021/09/07 10:36:12 by druth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_finale(char const *s1, char const *set, int track, int count)
{
	int	setter;
	int	check;

	while (count > 0)
	{
		setter = 0;
		check = count;
		while (set[setter] != '\0' && s1[track + count] != '\0')
		{
			while (s1[track + count] == set[setter])
				count--;
			setter++;
		}
		if (check == count)
			break ;
	}
	return (count);
}

static int	ft_finish(char const *s1, char const *set, int track)
{
	int	count;

	count = 0;
	while (s1[track + count] != '\0')
		count++;
	return (ft_finale(s1, set, track, count - 1));
}

static int	ft_count(char const *s1, char const *set, int flag)
{
	int	track;
	int	setter;
	int	check;

	track = 0;
	while (s1[track] != '\0')
	{
		setter = 0;
		check = track;
		while (set[setter] != '\0' && s1[track] != '\0')
		{
			while (s1[track] == set[setter])
				track++;
			setter++;
		}
		if (check == track)
			break ;
	}
	if (flag == 1)
		return (track);
	else
		return (ft_finish(s1, set, track));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		track;
	char	*output;
	int		count;
	int		final;

	count = ft_count(s1, set, 0);
	if (count <= 0)
	{
		output = (char *)malloc(sizeof(char));
		if (output == NULL)
			return (NULL);
		output[0] = '\0';
		return (output);
	}
	output = (char *)malloc(sizeof(char) * count);
	if (output == NULL)
		return (NULL);
	track = ft_count(s1, set, 1);
	final = 0;
	while (final <= count)
		output[final++] = s1[track++];
	output[final] = '\0';
	return (output);
}
