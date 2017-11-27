/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbartoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 14:29:09 by cbartoli          #+#    #+#             */
/*   Updated: 2017/08/20 14:45:06 by cbartoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	i = 0;
	if (min < max)
	{
		tab = malloc(sizeof(int) * (max - min));
		while (min < max)
		{
			tab[i] = min;
			i++;
			min++;
		}
		return (tab);
	}
	return (NULL);
}
