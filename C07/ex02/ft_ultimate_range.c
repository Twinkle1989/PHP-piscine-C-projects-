/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 13:09:44 by tsolanki          #+#    #+#             */
/*   Updated: 2024/03/03 18:38:29 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		size;
	int		index;
	int		*arr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	arr = (int *)malloc(size * sizeof(int));
	if (arr == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = arr;
	index = 0;
	while (index < size)
	{
		arr[index] = min + index;
		index++;
	}
	return (size);
}
/*
#include <stdio.h>

int		main(void)
{
	int	min = 5;
	int	max = 10;
	int	*range;
	int	size;
	int	index = 0;

	size = ft_ultimate_range(&range, min, max);
	while(index < size)
	{
		printf("%d, ", range[index]);
		index++;
	}
	printf("\n");
	free(range);
}*/
