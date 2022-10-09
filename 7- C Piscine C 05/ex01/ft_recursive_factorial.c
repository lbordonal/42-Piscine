/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 09:55:07 by lbordona          #+#    #+#             */
/*   Updated: 2022/10/03 10:42:43 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	unsigned int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb > 0)
	{
		result = result * nb * ft_recursive_factorial(nb - 1);
	}
	return (result);
}
