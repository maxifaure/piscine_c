/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 21:28:38 by mfaure            #+#    #+#             */
/*   Updated: 2016/09/01 23:42:20 by mfaure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_print_comb(void)
{
	char a;
	char b;
	char q;

	a = '0';
	b = '1';
	q = '2';
	while (a < '8')
	{
		b = '0';
		while (b <= '9')
		{
			q = '0';
			while (q <= '9')
			{
				if (q > b && b > a)
				{
					ft_putchar(a);
					ft_putchar(b);
					ft_putchar(q);
					ft_putchar(',');
					ft_putchar(' ');
				}
				q = q + 1;
			}
			b = b + 1;
		}
		a = a + 1;
	}
}

int		main()
{
	ft_print_comb();
	return (0);
}
