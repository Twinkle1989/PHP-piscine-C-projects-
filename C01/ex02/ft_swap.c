/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:02:32 by tsolanki          #+#    #+#             */
/*   Updated: 2024/02/18 13:19:40 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)

{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*int main(void)
{
	int a;
	int b;
	a = 10;
	b = 5;
	ft_swap(&a, &b);
	printf("a:%d\n,b:%d\n",a,b);
	return (0);
}*/
