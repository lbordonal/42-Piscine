/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:05:13 by lbordona          #+#    #+#             */
/*   Updated: 2022/09/26 10:04:11 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_print_alphabet(void)
{
	char	i;

	i = 'a' ;
	while (i <= 'z')
	{
		write(1, &i, 1);
		i++;
	}
}

/* int    main(void)
{
    ft_print_alphabet();
return (0);
} */