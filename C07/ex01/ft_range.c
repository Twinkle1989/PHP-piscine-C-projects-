/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki  <tsolanki@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 11:47:12 by tsolanki          #+#    #+#             */
/*   Updated: 2024/03/03 13:08:09 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	unsigned int	size;
	unsigned int	a;
	int				*arr;

	if (min >= max)
		return (NULL);
	size = max - min;
	arr = (int *)malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);
	a = 0;
	while (a < size)
	{
		arr[a] = min + a;
		a++;
	}
	return (arr);
}
/*
#include <stdio.h>

int main(void)
{
	int min = 1;
	int max = 2;
	unsigned int a = 0;
	unsigned int size = max - min;
	int *result = ft_range(min, max);

	if (result == NULL)
		printf("Error: min value is greateer or equal to max \n");
	else
	{
		printf("Generated array: ");
		while (a < size)
		{
			printf("%d ", result[a]);
			a++;
		}
		printf("\n");
		free(result);
	}
	//	return (0);
}*/
