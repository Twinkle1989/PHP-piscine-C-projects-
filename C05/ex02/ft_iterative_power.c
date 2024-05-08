/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:57:19 by tsolanki          #+#    #+#             */
/*   Updated: 2024/02/28 11:05:45 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	a;
	int	r;

	r = 1;
	a = 1;
	if (power < 0)
		return (0);
	else
		if (nb == 0 && power == 0)
			return (1);
	while (a <= power)
	{
		r *= nb;
		a++;
	}
	return (r);
}
/*
#include <stdio.h>

int main()
{
	int num;
	int power;

	printf("Enter a number:");
	scanf("%d", &num);
	printf("power:");
	scanf("%d", &power);
	printf("%d to the power %d is %d\n", 
	num, power, ft_iterative_power(num, power));
}*/
