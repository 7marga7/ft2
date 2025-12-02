/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smargaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 11:25:01 by smargaro          #+#    #+#             */
/*   Updated: 2025/11/28 17:46:07 by smargaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] && s2[i + 1]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)

{
	size_t		i;
	int		c;
	char	*h;
	char	*n;

	i = 0;
	c = 1;
	h = ((char *)haystack);
	n = ((char *)needle);
	if (!(*n))
		return (h);
	while (h[i] && i < len)
	{
		if ((h[i] == n[0]) && i + ft_strlen(n) <= len)
		{
			c = ft_strcmp(h + i, n);
			if (c == 0)
				return (h + i);
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	*a;
	char	*b;
	char	*c;
	char	*d;

	a = "cnwe dwdew wdwdw jccm";
	b = "dw";
	c = ft_strnstr(a, b, 7);
	d = strnstr(a, b, 7);
	printf("return  %s\n", c);
	printf("strnstr %s\n", d);
}*/
