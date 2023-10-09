/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustyilm <mustyilm@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 20:10:31 by mustyilm          #+#    #+#             */
/*   Updated: 2023/02/23 20:10:55 by mustyilm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (1 < argc)
	{
		j = 0;
		while (argv[argc - 1][j])
		{
			write(1, &argv[argc - 1][j], 1);
			j++;
		}
		argc--;
		write(1, "\n", 1);
	}
	return (0);
}
