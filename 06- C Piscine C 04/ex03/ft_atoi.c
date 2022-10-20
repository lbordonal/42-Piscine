/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 10:33:39 by lbordona          #+#    #+#             */
/*   Updated: 2022/10/03 17:07:14 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	sign_and_pointer(char *str, int *ptr)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	while (str[i] != '\0' && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
		{
		sign = -sign;
		}
		i++;
	}
	*ptr = i;
	return (sign);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	output;

	i = 0;
	output = 0;
	sign = sign_and_pointer(str, &i);
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		output = output * 10;
		output = output + (str[i] - '0');
		i++;
	}
	output = output * sign;
	return (output);
}
