/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:16:00 by tsolanki          #+#    #+#             */
/*   Updated: 2024/02/23 11:22:45 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char	*s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] == s2[a] && s1[a] != '\0')
	{
		a++;
	}
	if (s1[a] == s2[a])
		return (0);
	else
	{
		return (s1[a] - s2[a]);
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char	s1[] = "bbg";
	char	s2[] = "ggg";
	
	printf("Diff:%d\n", ft_strcmp(s1, s2));

	char	s1_1[] = "bbg";
	char	s2_1[] = "ggg";
	
	printf("Diff:%d\n", strcmp(s1_1, s2_1));
}*/
