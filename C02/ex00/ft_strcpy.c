/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 23:09:30 by tsolanki          #+#    #+#             */
/*   Updated: 2024/02/20 14:32:46 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char	*dest, char	*src)
{
	int	a;

	a = 0;
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

/*int main()
{
	char src[] = "Hello swimmers";
	char dest[20]; //keep it large enough for the source string and null term

	ft_strcpy(dest,src);
	printf("new str: %s\n",dest);
	return 0;
}*/
