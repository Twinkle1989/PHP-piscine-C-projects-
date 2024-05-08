/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:21:17 by tsolanki          #+#    #+#             */
/*   Updated: 2024/02/18 13:35:38 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*int main(void)
{
	int a;
	int b;
	a = 10;
	b = 5;
	int div;
	int mod;
	div = a / b;
	mod = a % b;
	printf("before:a = %d,b = %d\n",a,b);
	ft_ultimate_div_mod(&a,&b);
	printf("after:a = %d,b = %d\n",div,mod);
}*/
