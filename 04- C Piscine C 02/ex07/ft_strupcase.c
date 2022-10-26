/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:09:25 by lbordona          #+#    #+#             */
/*   Updated: 2022/10/26 12:20:19 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
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
	printf("%s", "A strupcase = ");
	printf("%s", ft_strupcase(str));
	printf("\n");
	printf("%s", "B strupcase = ");
	printf("%s", ft_strupcase(str1));
	printf("\n");
	printf("%s", "C strupcase = ");
	printf("%s", ft_strupcase(str2));
} */