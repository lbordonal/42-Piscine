/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 10:06:51 by lbordona          #+#    #+#             */
/*   Updated: 2022/10/06 17:44:15 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	num;
	long	result;

	num = nb;
	if (num <= 0)
	{
		return (0);
	}
	if (num == 1)
	{
		return (1);
	}
	result = 2;
	if (num >= 2)
	{
		while ((result * result) <= num)
		{	
			if (result * result == num)
			{
				return (result);
			}
			result ++;
		}
	}
	return (0);
}
