/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smargaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 12:33:24 by smargaro          #+#    #+#             */
/*   Updated: 2025/11/29 13:30:49 by smargaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
//#include <unistd.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	cc;

	cc = c + '0';
	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = c;
		i++;
	}
	return (s);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*r;

	r = malloc(count * size);
	if (r == NULL)
		return (NULL);
	ft_memset(r, 0, count * size);
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
