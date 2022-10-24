/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 17:48:00 by lbordona          #+#    #+#             */
/*   Updated: 2022/09/26 19:00:11 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	x;
	int	y;

	x = a / b;
	*div = x;
	y = a % b;
	*mod = y;
}

/* #include <stdio.h>

int    main(void)
{
    int    a;
    int    b;
    int    c;
    int    d;
    a = 10;
    b = 3;
    c = 0;
    d = 0;
    ft_div_mod(a, b, &c, &d);
	printf("%s", "a = ");
    printf("%d\n", a);
	printf("%s", "b = ");
    printf("%d\n", b);
	printf("%s", "div = ");
    printf("%d\n", c);
	printf("%s", "mod = ");
    printf("%d", d);
} */