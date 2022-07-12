/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 10:36:09 by druth             #+#    #+#             */
/*   Updated: 2021/09/07 10:36:09 by druth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_length(int n)
{
	int	track;

	track = 1;
	if (n < 0)
		track++;
	while (n != 0)
	{
		track++;
		n /= 10;
	}
	return (track);
}

char	*ft_itoa(int n)
{
	int		track;
	int		sign;
	char	*output;

	track = ft_length(n);
	sign = 1;
	output = (char *)malloc(sizeof(char) * track);
	if (output == NULL)
		return (NULL);
	output[--track] = '\0';
	if (n == 0)
		output[0] = '0';
	if (n < 0)
	{
		output[0] = '-';
		sign *= -1;
	}
	while (n != 0)
	{
		track--;
		output[track] = ((n % 10) * sign) + 48;
		n /= 10;
	}
	return (output);
}
