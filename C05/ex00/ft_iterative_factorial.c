/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:01:05 by tsolanki          #+#    #+#             */
/*   Updated: 2024/02/27 16:03:09 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	a;

	a = 1;
	if (nb < 0)
		return (0);
	else
		if (nb <= 1)
			return (a);
	while (nb > 0)
	{
		a *= nb;
		nb--;
	}
	return (a);
}
/*
#include <stdio.h>

int main ()
{
	printf("%d\n", ft_iterative_factorial(4));
}*/
