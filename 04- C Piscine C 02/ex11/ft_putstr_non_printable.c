/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 13:52:13 by lbordona          #+#    #+#             */
/*   Updated: 2022/10/01 12:39:53 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_puthexa(int c, int err)
{
	char	*base;

	base = "0123456789abcdef";
	if (c <= 0 && err == 0)
	{
		c += 256;
	}
	if (c >= 16)
	{
		ft_puthexa((c / 16), 1);
		ft_puthexa((c % 16), 1);
	}
	else
	{
		if (err == 0)
		{
			ft_putchar('0');
		}
		ft_putchar(base[c]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			ft_putchar(str[i]);
		}
		else
		{
			ft_putchar('\\');
			ft_puthexa(str[i], 0);
		}
		i++;
	}
}

/* #include <stdio.h>

int     main(void)
{
        char    str[] = "Oi\nvoce esta bem?";

        printf("%s","str = ");
		printf("\n");
        printf("%s",str);
        printf("\n");
		printf("\n");
		printf("%s","ft_putstr_non_printable = ");
		printf("\n");
        ft_putstr_non_printable(str);
} */