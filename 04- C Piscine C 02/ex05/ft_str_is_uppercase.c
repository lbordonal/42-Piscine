/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:03:52 by lbordona          #+#    #+#             */
/*   Updated: 2022/10/26 12:20:11 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 'A' && str[i] <= 'Z')
	{
		i++;
	}
	if (str[i] == '\0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/* #include <stdio.h>

int	main(void)
{
	char	str[] = "LUCAS";
	char	str1[] = "";
	char	str2[] = "lucas";

	printf("%s", "A = ");
	printf("%s", str);
	printf("\n");
	printf("%s", "B = ");
	printf("%s", str1);
	printf("\n");
	printf("%s", "C = ");
	printf("%s", str2);
	printf("\n");
	printf("\n");
	printf("%s", "A is uppercase (0 = no / 1 = yes) = ");
	printf("%d", ft_str_is_uppercase(str));
	printf("\n");
	printf("%s", "B is uppercase (0 = no / 1 = yes) = ");
	printf("%d", ft_str_is_uppercase(str1));
	printf("\n");
	printf("%s", "C is uppercase (0 = no / 1 = yes) = ");
	printf("%d", ft_str_is_uppercase(str2));
} */