/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 14:03:54 by tsolanki          #+#    #+#             */
/*   Updated: 2024/02/29 14:07:51 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb2(void)
{
	int a;
	int b;
	int c;

	a = '0';
	while (a <= '9')
	{
		b = a + 1;
