/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 09:38:14 by lbordona          #+#    #+#             */
/*   Updated: 2022/09/27 10:23:51 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* #include <stdio.h>

int     main(void)
{
        char    src[] = "Lucas";
        char    dest[] = "";

		printf("%s", "source = ");
        printf("%s",src);
        printf("\n");
		printf("%s", "dest = ");
        printf("%s",dest);
        printf("\n");
        printf("\n");
        ft_strcpy(dest, src);
        printf("\n");
		printf("%s", "new dest = ");
        printf("%s",dest);

} */