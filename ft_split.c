/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 10:36:11 by druth             #+#    #+#             */
/*   Updated: 2021/09/07 10:36:11 by druth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_length(char const *s, char c)
{
	int	track;
	int	length;

	track = 0;
	length = 0;
	while (s[track] != '\0')
	{
		if (s[track] != c)
		{
			length++;
			while (s[track] != c && s[track] != '\0')
				track++;
		}
		else
		{
			while (s[track] == c && s[track] != '\0')
				track++;
		}
	}
	return (length + 1);
}

static int	ft_gurt(char const *s, char c, int track)
{
	int	length;

	length = 0;
	while (s[track + length] != c && s[track + length] != '\0')
		length++;
	return (length + 1);
}

static int	ft_freeloader(char **output, int count)
{
	while (count >= 0)
	{
		free(output[count]);
		count--;
	}
	free(output);
	return (-1);
}

static int	ft_count(char const *s, char c, char **output, int track)
{
	int	length;
	int	count;

	count = 0;
	while (s[track] != '\0')
	{
		length = 0;
		while (s[track] == c && s[track] != '\0')
			track++;
		if (s[track] != c && s[track] != '\0')
		{
			output[count] = (char *)malloc(sizeof(char) * ft_gurt(s, c, track));
			if (output[count] == NULL)
				return (ft_freeloader(output, count));
			while (s[track] != c && s[track] != '\0')
			{
				output[count][length] = s[track];
				length++;
				track++;
			}
			output[count][length] = '\0';
		}
		count++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**output;
	int		track;
	int		sum;

	if (s == NULL)
		return (NULL);
	sum = ft_length(s, c);
	output = (char **)malloc(sizeof(char *) * sum);
	if (output == NULL)
		return (NULL);
	track = 0;
	if (ft_count(s, c, output, track) == -1)
		return (NULL);
	output[sum - 1] = NULL;
	return (output);
}
