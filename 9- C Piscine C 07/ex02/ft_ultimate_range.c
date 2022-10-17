/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:57:32 by lbordona          #+#    #+#             */
/*   Updated: 2022/10/11 17:55:07 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>*/

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*matrix;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	matrix = malloc(sizeof(int) * (max - min));
	if (!matrix)
		return (-1);
	while (min < max)
	{
		matrix[i] = min;
		i++;
		min++;
	}
	*range = matrix;
	return (i);
}

/*int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i;

	i = 0;
	min = 0;
	max = 5;
	size = ft_ultimate_range(&tab, min, max);
	printf("%d", size);
	printf("\n");
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (0);
}*/
