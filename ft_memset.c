/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 10:36:10 by druth             #+#    #+#             */
/*   Updated: 2021/09/07 10:36:10 by druth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			track;
	unsigned char	input;

	track = 0;
	input = (unsigned char)(c);
	while (track < n)
	{
		*(unsigned char *)(str + track) = input;
		track++;
	}
	return (str);
}
