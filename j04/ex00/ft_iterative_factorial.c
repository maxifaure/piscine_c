/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 16:17:16 by mfaure            #+#    #+#             */
/*   Updated: 2016/09/03 19:50:52 by mfaure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int resultat;
	int i;

	resultat = 1;
	i = 1;
	while (i <= nb)
	{
		resultat = i * resultat;
		i = i + 1;
	}
	return (resultat);
}
