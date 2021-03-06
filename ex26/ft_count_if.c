/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbartoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 14:22:33 by cbartoli          #+#    #+#             */
/*   Updated: 2017/08/23 19:46:14 by cbartoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (tab[i] != 0)
	{
		if ((*f)(tab[i]))
			count++;
		i++;
	}
	return (count);
}
