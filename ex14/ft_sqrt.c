/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbartoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 15:04:42 by cbartoli          #+#    #+#             */
/*   Updated: 2017/08/10 13:25:13 by cbartoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	unsigned int	root;
	unsigned int	number;
	int				res;

	root = 1;
	number = nb;
	while (root * root <= number)
	{
		if (root * root == number)
		{
			res = root;
			return (res);
		}
		root++;
	}
	return (0);
}
