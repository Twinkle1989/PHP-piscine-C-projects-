/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 10:56:11 by tsolanki          #+#    #+#             */
/*   Updated: 2024/02/18 13:21:25 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main(void)
{
	int a = 10;
	int b = 5;
	int division;
	int modulus;
	ft_div_mod(a,b,&division,&modulus);
	printf("Division:%d\n,Modulus:%d\n",division,modulus);
	return (0);
}*/
