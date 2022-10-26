/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 09:54:06 by lbordona          #+#    #+#             */
/*   Updated: 2022/10/01 12:48:47 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	if (size != 0)
	{
		while (src[i] != '\0' && (i < (size - 1)))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (j);
}

/* #include <stdio.h>

int     main(void)
{
        char    src[] = "Hello";
        char    dest[] = "World";
        unsigned int    size;

        size = 3;
        printf("%s",src);
        printf("\n");
        printf("%s",dest);
        printf("\n");
        printf("%d",size);
        printf("\n");
        printf("\n");
        printf("%d",ft_strlcpy(dest, src, size));
        printf("\n");
        printf("%s",src);
        printf("\n");
        printf("%s",dest);
} */