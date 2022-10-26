/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:09:25 by lbordona          #+#    #+#             */
/*   Updated: 2022/09/27 16:32:16 by lbordona         ###   ########.fr       */
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

        printf("%s", str);
        printf("\n");
        printf("%s", str1);
        printf("\n");
        printf("%s", str2);
        printf("\n");
        printf("\n");
        printf("%s", ft_strupcase(str));
        printf("\n");
        printf("%s", ft_strupcase(str1));
        printf("\n");
        printf("%s", ft_strupcase(str2));
} */