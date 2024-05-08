/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:18:28 by tsolanki          #+#    #+#             */
/*   Updated: 2024/02/28 10:29:56 by tsolanki         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	if (i < 2)
		return (2);
	while (!ft_is_prime(i))
		i++;
	return (i);
}
/*
#include <stdio.h>

int main ()
{
	printf("%d\n", ft_find_next_prime(100));
}*/
