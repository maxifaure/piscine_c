/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 12:59:01 by mfaure            #+#    #+#             */
/*   Updated: 2016/09/09 14:30:40 by mfaure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_nbr_word(char *str)
{
	int		result;
	int		i;

	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			i++;
		}
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			i++;
		}
		result++;
		i++;
	}
	return (result);
}

char	*ft_tab(char *str, int i, int n)
{
	int		nbr;
	char	*result;

	nbr = 0;
	result = (char*)malloc(sizeof(char) * n + 1);
	while (str[i - n] != ' ' && str[i - n] != '\t' && str[i - n] != '\n')
	{
		result[nbr] = str[i - n];
		n--;
		nbr++;
	}
	result[nbr] = '\0';
	return (result);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		i;
	int		n;
	int		j;

	j = 0;
	i = 0;
	tab = (char**)malloc(sizeof(char*) * ft_nbr_word(str) + 1);
	while (str[i] != '\0')
	{
		n = 0;
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			n++;
			i++;
		}
		tab[j] = ft_tab(str, i, n);
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		j++;
	}
	tab[j] = NULL;
	return (tab);
}

int		main(void)
{
	char	**tab;
	int		i;

	i = 0;
	tab = ft_split_whitespaces("    bonjour	maxime            lol       \n");
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}
