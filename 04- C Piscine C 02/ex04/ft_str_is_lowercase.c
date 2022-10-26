/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 14:45:23 by lbordona          #+#    #+#             */
/*   Updated: 2022/10/26 12:20:05 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 'a' && str[i] <= 'z')
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

int     main(void)
{
	char    str[] = "Lucas";
	char    str1[] = "";
	char    str2[] = "lucas";

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
	printf("%s", "A is lowercase (0 = no / 1 = yes) = ");
	printf("%d", ft_str_is_lowercase(str));
	printf("\n");
	printf("%s", "B is lowercase (0 = no / 1 = yes) = ");
	printf("%d", ft_str_is_lowercase(str1));
	printf("\n");
	printf("%s", "C is lowercase (0 = no / 1 = yes) = ");
	printf("%d", ft_str_is_lowercase(str2));
} */