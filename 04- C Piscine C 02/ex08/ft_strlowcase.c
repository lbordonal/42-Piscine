/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:34:34 by lbordona          #+#    #+#             */
/*   Updated: 2022/10/26 12:20:24 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
	i++;
	}
	return (str);
}

/* #include <stdio.h>

int     main(void)
{
    char    str[] = "Lucas*(*&$@#";
    char    str1[] = "";
    char    str2[] = "LUCAS";

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
	printf("%s", "A strlowcase = ");
	printf("%s", ft_strlowcase(str));
	printf("\n");
	printf("%s", "B strlowcase = ");
	printf("%s", ft_strlowcase(str1));
	printf("\n");
	printf("%s", "C strlowcase = ");
	printf("%s", ft_strlowcase(str2));
} */