/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 17:53:11 by lbordona          #+#    #+#             */
/*   Updated: 2022/09/26 19:02:48 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;

	x = *a / *b;
	y = *a % *b;
	*a = x;
	*b = y;
}

/* #include <stdio.h>

int main(void)
{
    int    a;
    int    b;

    a = 10;
    b = 3;
	printf("%s", "a = ");
    printf("%d\n", a);
	printf("%s", "b = ");
    printf("%d\n", b);
    ft_ultimate_div_mod(&a , &b);
	printf("%s", "a (div) = ");	
	printf("%d\n", a);
	printf("%s", "b (mod) = ");	
	printf("%d\n", b);
} */