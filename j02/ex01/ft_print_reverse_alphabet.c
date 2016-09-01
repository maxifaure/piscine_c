/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 10:48:25 by mfaure            #+#    #+#             */
/*   Updated: 2016/09/01 19:40:24 by mfaure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_reverse_alphabet(void)
{
	char n;

	n = 'z';
	while (n >= 'a')
	{
		ft_putchar(n);
		n = n - 1;
	}
}
