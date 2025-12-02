/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smargaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 11:37:59 by smargaro          #+#    #+#             */
/*   Updated: 2025/11/27 12:26:27 by smargaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char			*mems;
	size_t			i;
	unsigned char	to_find;

	mems = ((char *) s);
	to_find = ((unsigned char) c);
	i = 0;
	while (i < n)
	{
		if (mems[i] == to_find)
			return (&mems[i]);
		i++;
	}
	return (NULL);
}

/*int main()
{
	char *m1 = "jkd\0cwj";

	printf("mia  %s\n", ft_memchr(m1, 'w', 6));
	printf("orig %s\n", memchr(m1, 'w', 6));
}*/
