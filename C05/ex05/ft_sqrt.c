/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 21:07:56 by tsolanki          #+#    #+#             */
/*   Updated: 2024/02/28 11:45:54 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	r;

	r = 1;
	if (nb > 0)
	{
		while (r * r <= nb)
		{
			if (r * r == nb)
				return (r);
			if (r > 46340)
				return (0);
			r++;
		}
	}
	return (0);
}
/*
#include <stdio.h>

int main()
{
	int num;
	printf("Number:");
	scanf("%d", &num);
	printf("The square root of %d is %d\n", num, ft_sqrt(num));
}*/
