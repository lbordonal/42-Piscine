/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 09:54:06 by lbordona          #+#    #+#             */
/*   Updated: 2022/10/26 12:20:31 by lbordona         ###   ########.fr       */
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
		printf("%s", "src = ");
        printf("%s",src);
        printf("\n");
		printf("%s", "dest = ");
        printf("%s",dest);
        printf("\n");
		printf("%s", "size = ");
        printf("%d",size);
        printf("\n");
        printf("\n");
		printf("%s", "ft_strlcpy = ");		
        printf("%d",ft_strlcpy(dest, src, size));
        printf("\n");
		printf("%s", "src = ");
        printf("%s",src);
        printf("\n");
		printf("%s", "new dest = ");
        printf("%s",dest);
} */