/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smargaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 07:21:19 by smargaro          #+#    #+#             */
/*   Updated: 2025/11/28 10:57:17 by smargaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*a;
	char	*b;

	a = ((char *)s1);
	b = ((char *)s2);
	i = 1;
	if (n == 0)
		return (0);
	while ((a[i -1] == b[i -1]) && i < n)
		i++;
	return (a[i -1] - b[i -1]);
}

int main()
 {
	char *a= "ci\0o come as";
	char *b= "ci\0o come vs";
	int n;

	n = 1;
	printf("mia  %d\n",ft_memcmp(a,b,n));
	printf("orig %d\n",memcmp(a,b,n));
 }
