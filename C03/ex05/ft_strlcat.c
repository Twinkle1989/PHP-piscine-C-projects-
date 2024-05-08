/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.com        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 23:09:19 by tsolanki          #+#    #+#             */
/*   Updated: 2024/02/23 11:55:04 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	srclen;
	unsigned int	destlen;
	unsigned int	a;
	unsigned int	b;

	srclen = 0;
	destlen = 0;
	while (dest[destlen] != '\0' && destlen < size)
		destlen++;
	while (src[srclen] != '\0')
		srclen++;
	if (size <= destlen)
	{
		return (destlen + srclen);
	}
	a = destlen;
	b = 0;
	while (src[b] != '\0' && a < size - 1)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (destlen + srclen);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char	src[] = "swim";
	char	dest[30] = "swimmers ";
//	unsigned int length = ft_strlcat(dest, src, sizeof(dest));
	char	src1[] = "swim";
	char	dest1[30] = "swimmers ";
//	unsigned int length1 = ft_strlcat(dest1, src1, sizeof(dest1));

	printf("Deststring: %u\n", ft_strlcat(dest, src, sizeof(dest)));
	printf("Deststringlength:%s\n", dest);
	printf("funcdeststring: %lu\n", strlcat(dest1,src1, sizeof(dest1)));
	printf("funcdeststringlength: %s\n", dest1);
}*/
