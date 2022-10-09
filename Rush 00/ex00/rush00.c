/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 11:01:42 by lbordona          #+#    #+#             */
/*   Updated: 2022/09/25 14:32:48 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	print_start_and_end(int x)
{
	int	i;

	i = 1;
	if (x > 1)
	{
		ft_putchar('o');
		while (i < (x - 1))
		{
			ft_putchar('-');
			i++;
		}
	}
	ft_putchar('o');
	ft_putchar('\n');
}

void	print_middle(int y)
{
	int	j;

	j = 1;
	if (y > 1)
	{
		ft_putchar('|');
		while (j < (y - 1))
		{
			ft_putchar(' ');
			j++;
		}
	}
	ft_putchar('|');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	j;

	j = 0;
	if (x > 0 && y > 0)
	{
		print_start_and_end(x);
		while (j < (y - 2))
		{
			print_middle(x);
			j++;
		}
		if (y > 1)
		{
			print_start_and_end(x);
		}	
	}
}
