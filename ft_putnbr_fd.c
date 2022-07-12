/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 10:36:11 by druth             #+#    #+#             */
/*   Updated: 2021/09/07 10:36:11 by druth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_printer(char *output, int fd)
{
	int	track;

	track = 9;
	while (track >= 0)
	{
		if (output[track] != '\0')
			write(fd, &output[track], 1);
		track--;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	int		track;
	int		sign;
	char	output[10];

	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	sign = 1;
	if (n < 0)
		write(fd, "-", 1);
	if (n < 0)
		sign *= -1;
	track = 0;
	while (n != 0 || track < 10)
	{
		if (n == 0)
			output[track] = '\0';
		else
			output[track] = (n % 10) * sign + 48;
		n /= 10;
		track++;
	}
	ft_printer(output, fd);
}
