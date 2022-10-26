/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 14:45:23 by lbordona          #+#    #+#             */
/*   Updated: 2022/09/27 15:01:50 by lbordona         ###   ########.fr       */
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

	printf("%s", str);
	printf("\n");
	printf("%s", str1);
	printf("\n");
	printf("%s", str2);
	printf("\n");
	printf("\n");
	printf("%d", ft_str_is_lowercase(str));
	printf("\n");
	printf("%d", ft_str_is_lowercase(str1));
	printf("\n");
	printf("%d", ft_str_is_lowercase(str2));
} */