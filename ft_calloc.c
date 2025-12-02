/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smargaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 12:33:24 by smargaro          #+#    #+#             */
/*   Updated: 2025/11/30 05:14:22 by smargaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
//#include <unistd.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*r;

	if (count !=0 && size >= SIZE_MAX / count)
		return NULL;
	r = malloc(count * size);
	if (!r)
		return (NULL);
	ft_bzero(r, count * size);
	return (r);
}
/*int main(void)
{
	size_t	count;
	size_t	size;
	int	i;
	char	*a;
	char	*b;

	i = 0;
	count = 99;
	size = 1519991;
	a = calloc(count, size);
	b = ft_calloc(count, size);
	printf("sua %p\n",a);
	printf("mia %p\n",b);
}*/
