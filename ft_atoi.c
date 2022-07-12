/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 10:36:09 by druth             #+#    #+#             */
/*   Updated: 2021/09/07 10:36:09 by druth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	track;
	int	sign;
	int	output;

	track = 0;
	output = 0;
	sign = 1;
	while (nptr[track] == ' ' || nptr[track] == '\t'
		|| nptr[track] == '\n' || nptr[track] == '\v'
		|| nptr[track] == '\f' || nptr[track] == '\r')
		track++;
	if (nptr[track] == '-')
		sign = -1;
	if (nptr[track] == '-' || nptr[track] == '+')
		track++;
	while (nptr[track] >= '0' && nptr[track] <= '9')
	{
		output = output * 10 + (nptr[track] - 48) * sign;
		track++;
	}
	return (output);
}
