/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:58:19 by tsolanki          #+#    #+#             */
/*   Updated: 2024/02/19 18:41:11 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if ((str[a] >= 'a' && str[a] <= 'z') \
				|| (str[a] >= 'A' && str[a] <= 'Z'))
			a++;
		else
			return (0);
	}
	return (1);
}

/*int main()
{
	char str1[] = "basfasfasuhfasufaufsfahfah";
	char str2[] = "Hell0swimmers";
	char str3[] = "";
	printf("%d\n", ft_str_is_alpha(str1));
	printf("%d\n", ft_str_is_alpha(str2));
	printf("%d\n", ft_str_is_alpha(str3));


}*/
