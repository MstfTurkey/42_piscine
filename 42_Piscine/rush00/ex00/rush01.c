/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahtuncay <ahtuncay@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:38:13 by ahtuncay          #+#    #+#             */
/*   Updated: 2023/02/05 17:40:12 by ahtuncay         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	a;
	int	b;

	b = 1;
	while (b <= y && x > 0)
	{
		a = 1;
		while (a <= x)
		{
			if ((a == 1 && b == 1) || (a == x && b == y && a != 1 && b != 1))
				ft_putchar('/');
			else if ((a == x && b == 1) || (a == 1 && b == y))
				ft_putchar('\\');
			else if ((a == 1) || (a == x) || (b == 1) || (b == y))
				ft_putchar('*');
			else
				ft_putchar(' ');
			a++;
		}
		ft_putchar('\n');
		b++;
	}
}
