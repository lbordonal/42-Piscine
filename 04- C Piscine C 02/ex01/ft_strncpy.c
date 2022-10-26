/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 10:25:58 by lbordona          #+#    #+#             */
/*   Updated: 2022/10/26 12:19:50 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*  #include <stdio.h>

int     main(void)
{
        char    src[] = "Lucas";
        char    dest[] = "Matheus";

		printf("%s", "src = ");
        printf("%s", src);
        printf("\n");
		printf("%s", "dest = ");
        printf("%s", dest);
        printf("\n");
        printf("\n");
        ft_strncpy(dest, src, 9);
		printf("%s", "new dest = ");
        printf("%s", dest);
} */