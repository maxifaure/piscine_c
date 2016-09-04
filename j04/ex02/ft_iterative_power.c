/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 20:06:35 by mfaure            #+#    #+#             */
/*   Updated: 2016/09/03 20:35:12 by mfaure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int resultat;
	int i;

	resultat = 1;
	i = 1;
	while (i <= power)
	{
		resultat = nb * resultat;
		i = i + 1;
	}
	return (resultat);
}
