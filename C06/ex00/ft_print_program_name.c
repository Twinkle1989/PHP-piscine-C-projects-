/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 19:19:27 by tsolanki          #+#    #+#             */
/*   Updated: 2024/02/28 19:23:20 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	a;

	a = 0;
	while (argv[0][a] != '\0')
		a++;
	if (argc == 1)
	{
		write (1, argv[0], a);
		write (1, "\n", 1);
	}
}
