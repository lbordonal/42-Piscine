/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:37:22 by lbordona          #+#    #+#             */
/*   Updated: 2022/10/12 13:08:37 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>*/

int	*ft_range(int min, int max)
{
	int	*matrix;
	int	i;
	int	size;

	i = 0;
	size = max - min;
	if (min >= max)
		return (NULL);
	matrix = (int *)malloc(sizeof(int) * size);
	if (!matrix)
		return (NULL);
	while (i < size)
	{
		matrix[i] = min;
		i++;
		min++;
	}
	return (matrix);
}
/*
int	main(void)
{
	int min = -15;
	int max = 16;
	int size = max - min;
	int i = 0;
	int *a = ft_range(min, max);

	while (i < size)
	{
		printf("%d ", a[i]);
		i++;
	}
	return (0);
}*/
