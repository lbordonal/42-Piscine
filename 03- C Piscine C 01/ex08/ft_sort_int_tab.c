/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:32:00 by lbordona          #+#    #+#             */
/*   Updated: 2022/09/29 10:58:21 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	*x;
	int	*y;

	while (size >= 0)
	{
		i = 0;
		while (i < (size - 1))
		{
			if (tab[i] > tab[i + 1])
			{
				x = &tab[i];
				y = &tab[i + 1];
				ft_swap(x, y);
			}
			i++;
		}
		size--;
	}
}

/* #include <stdio.h>

int	main(void)
{
    int tab[5] = {15, 0, 9, 4, 6};
    int size = 5;

	printf("%s", "Original = ");
    printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
	printf("\n");
    ft_sort_int_tab(tab, size);
	printf("%s", "REV = ");
    printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
    return (0);
} */