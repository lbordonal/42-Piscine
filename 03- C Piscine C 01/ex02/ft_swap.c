/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 17:44:31 by lbordona          #+#    #+#             */
/*   Updated: 2022/10/26 00:06:31 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/* #include <stdio.h>

int    main(void)
{
    int    a;
    int    b;
    a = 2;
    b = 7;
	printf("%s", "a = ");
    printf("%d\n", a);
	printf("%s", "a = ");
    printf("%d\n", b);
    ft_swap(&a , &b);
	printf("%s", "new a (old b) = ");
	printf("%d\n", a);
    printf("%s", "new b (old a) = ");
	printf("%d\n", b);
}*/
