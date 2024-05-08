/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 22:22:34 by tsolanki          #+#    #+#             */
/*   Updated: 2024/02/23 11:50:48 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	if (to_find[b] == '\0')
		return (str);
	while (str[a] != '\0')
	{
		while (str[a + b] == to_find[b] && str[a + b] != '\0')
		{
			b++;
		}
		if (to_find[b] == '\0')
		{
			return (str + a);
		}
		b = 0;
		a++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
        char    str[] = "you@are#coder$I am a learner";
        char    to_find[] = "@are#";
        printf("%s\n", ft_strstr(str, to_find));
		char	str1[] = "you are a coder I am a learner";
		char	to_find1[] = "I am";
		printf("%s\n", strstr(str1, to_find1));
}*/
