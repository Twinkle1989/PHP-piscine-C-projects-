/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.com        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 21:07:45 by tsolanki          #+#    #+#             */
/*   Updated: 2024/02/25 10:08:28 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while ((*s1 || *s2) && (a < n))
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		a++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
	char	s1[] = "123456789";
	char	s2[] = "1234567";
	
	printf("Diff:%d\n", ft_strncmp(s1, s2, 8));
	char	s1_1[] = "123456789";
	char	s2_1[] = "1234567";

	printf("Diff:%d\n", strncmp(s1_1, s2_1, 8));
}*/
