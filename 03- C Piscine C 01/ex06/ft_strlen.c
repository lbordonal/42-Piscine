/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:31:52 by lbordona          #+#    #+#             */
/*   Updated: 2022/09/26 19:05:52 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*(str + len) != '\0')
	{
		len++;
	}
	return (len);
}

/* #include <stdio.h>

 int    main(void)
{
    char    *s;
    int        total;
    s = "Lucas";
    total = ft_strlen(s);
    printf("%d", total);
    return (0);
} */