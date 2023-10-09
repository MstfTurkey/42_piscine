/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustyilm <mustyilm@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:22:11 by mustyilm          #+#    #+#             */
/*   Updated: 2023/02/22 21:22:26 by mustyilm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;
	long	long_nb;

	long_nb = nb;
	i = 1;
	while (i * i <= long_nb)
	{
		if (i * i == long_nb)
			return (i);
		i++;
	}
	return (0);
}
