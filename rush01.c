/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 15:17:06 by lfrederi          #+#    #+#             */
/*   Updated: 2021/10/17 13:13:32 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = -1;
	while (++i < y)
	{
		j = -1;
		while (++j < x)
		{
			if (i == 0 && j == 0)
				ft_putchar('/');
			else if (i == (y - 1) && j == 0)
				ft_putchar(96);
			else if (i == 0 && j == (x - 1))
				ft_putchar(96);
			else if (i == (y - 1) && j == (x - 1))
				ft_putchar('/');
			else if ((i > 0 && i < (y - 1)) && (j > 0 && j < (x - 1)))
				ft_putchar(' ');
			else
				ft_putchar('*');
		}
		ft_putchar('\n');
	}
}