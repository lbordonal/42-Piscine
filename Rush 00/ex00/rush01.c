/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 11:01:42 by lbordona          #+#    #+#             */
/*   Updated: 2022/09/25 15:15:50 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	print_start(int x)
{
	int	i;

	i = 1;
	if (x > 1)
	{
		ft_putchar('/');
		while (i < (x - 1))
		{
			ft_putchar('*');
			i++;
		}
		ft_putchar(92);
		ft_putchar('\n');
	}
	if (x == 1)
	{
		ft_putchar('/');
		ft_putchar('\n');
	}
}

void	print_middle(int y)
{
	int	j;

	j = 1;
	if (y > 1)
	{
		ft_putchar('*');
		while (j < (y - 1))
		{
			ft_putchar(' ');
			j++;
		}
	}
	ft_putchar('*');
	ft_putchar('\n');
}

void	print_end(int z)
{
	int	k;

	k = 1;
	if (z > 1)
	{
		ft_putchar(92);
		while (k < (z - 1))
		{	
			ft_putchar('*');
			k++;
		}
		ft_putchar('/');
		ft_putchar('\n');
	}
	if (z == 1)
	{
		ft_putchar(92);
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int	j;

	j = 0;
	if (x > 0 && y > 0)
	{
		print_start(x);
		while (j < (y - 2))
		{
			print_middle(x);
			j++;
		}
		if (y > 1)
		{
			print_end(x);
		}	
	}
}
