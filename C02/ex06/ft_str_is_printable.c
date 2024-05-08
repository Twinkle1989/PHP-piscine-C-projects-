/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:48:13 by tsolanki          #+#    #+#             */
/*   Updated: 2024/02/19 19:59:15 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] >= 32 && str[a] <= 126)
			a++;
		else
			return (0);
	}
	return (1);
}

/*int main()
{
	char str1[] = "hello=+swimmers";
	char str2[] = "\n\t\v\f";
	char str3[] = "";
	printf("%d\n", ft_str_is_printable(str1));
	printf("%d\n", ft_str_is_printable(str2));
	printf("%d\n", ft_str_is_printable(str3));
	
}*/
