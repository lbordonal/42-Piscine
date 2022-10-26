/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:03:52 by lbordona          #+#    #+#             */
/*   Updated: 2022/09/27 15:12:28 by lbordona         ###   ########.fr       */
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

int     main(void)
{
	char    str[] = "Lucas";
	char    str1[] = "";
	char    str2[] = "lucas";

	printf("%s", str);
	printf("\n");
	printf("%s", str1);
	printf("\n");
	printf("%s", str2);
	printf("\n");
	printf("\n");
	printf("%d", ft_str_is_uppercase(str));
	printf("\n");
	printf("%d", ft_str_is_uppercase(str1));
	printf("\n");
	printf("%d", ft_str_is_uppercase(str2));
} */
