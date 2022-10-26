/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:15:20 by lbordona          #+#    #+#             */
/*   Updated: 2022/09/28 15:02:26 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 32 && str[i] <= 127)
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
        char    str[] = "Lucas*(*&$@#";
        char    str1[] = "";
        char    str2[] = "\n";

        printf("%s", str);
        printf("\n");
        printf("%s", str1);
        printf("\n");
        printf("%s", str2);
        printf("\n");
        printf("\n");
        printf("%d", ft_str_is_printable(str));
        printf("\n");
        printf("%d", ft_str_is_printable(str1));
        printf("\n");
        printf("%d", ft_str_is_printable(str2));
} */