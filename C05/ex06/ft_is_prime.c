/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:14:05 by tsolanki          #+#    #+#             */
/*   Updated: 2024/02/28 10:23:09 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)

{
	int	a;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	a = 2;
	while (a <= nb / 2)
	{
		if (nb % a == 0)
			return (0);
		a++;
	}
	return (1);
}
/*
#include <stdio.h>

int main ()
{
	printf("%d\n", ft_is_prime(23));
}*/
