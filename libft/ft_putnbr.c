/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrosset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 15:11:03 by agrosset          #+#    #+#             */
/*   Updated: 2015/12/03 11:27:17 by agrosset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	char c;

	c = '0';
	if (n < 0)
	{
		write(1, "-", 1);
		c -= (n % 10);
		if (n < -9)
			ft_putnbr(-(n / 10));
		write(1, &c, 1);
	}
	if (n > 0)
	{
		c += n % 10;
		if (n > 9)
			ft_putnbr(n / 10);
		write(1, &c, 1);
	}
	else if (n == 0)
		write(1, &c, 1);
}
