/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:16:27 by tsolanki          #+#    #+#             */
/*   Updated: 2024/02/29 12:55:49 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void)
{
		write(1, "abcdefghijklmnopqrstuvwxyz\n", 26);
}

int main()
{
	ft_print_alphabet();
	return(0);
}

