/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki  <tsolanki@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:28:01 by tsolanki          #+#    #+#             */
/*   Updated: 2024/02/28 13:55:47 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
		return (nb * ft_recursive_power(nb, power - 1));
	return (nb);
}
/*
#include <stdio.h>

int main()
{
	printf("%d\n", ft_recursive_power(1005, -642));
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(1966, 0));
	printf("%d\n", ft_recursive_power(1787, 1));
	printf("%d\n", ft_recursive_power(0, 2));
	printf("%d\n", ft_recursive_power(2, 3));
	printf("%d\n", ft_recursive_power(4, 4));
	printf("%d\n", ft_recursive_power(7, 5));
	printf("%d\n", ft_recursive_power(8, 6));
	printf("%d\n", ft_recursive_power(-8, 8));
	printf("%d\n", ft_recursive_power(-5, 9));
}*/
