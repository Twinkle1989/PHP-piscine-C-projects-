/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 19:22:06 by tsolanki          #+#    #+#             */
/*   Updated: 2024/02/28 20:52:52 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);

int	main(int argc, char *argv[])
{
	int	t1;

	t1 = argc - 1;
	while (t1 > 0)
	{
		write(1, argv[t1], ft_strlen(argv[t1]));
		write(1, "\n", 1);
		t1--;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
