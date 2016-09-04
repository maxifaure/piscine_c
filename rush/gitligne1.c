/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 23:41:03 by mfaure            #+#    #+#             */
/*   Updated: 2016/09/04 02:50:48 by mfaure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void	premiereligne(int hor)
{
	int y;

	y = 0;
	while(y <= hor)
	{
		if(y == 0)
		{
			ft_putchar('A');
		}
		if(y > 1  && y < hor)
		{
			ft_putchar('B');
		}
		if(y == hor)
		{
			ft_putchar('C');
		}
		y++;
	}
}

int		main()
{
	premiereligne(5);
	return (0);
}

