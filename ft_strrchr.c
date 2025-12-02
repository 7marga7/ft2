/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smargaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 20:24:29 by smargaro          #+#    #+#             */
/*   Updated: 2025/11/26 20:26:49 by smargaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;
	char	d;

	p = ((char *) s);
	i = ft_strlen(p);
	d = ((char) c);
	while (i >= 0)
	{
		if (d == s[i])
			return (&p[i]);
		i--;
	}
	if (d == '\0')
		return (&p[i]);
	return (NULL);
}

/*int main(void)
{
	char a[] = "xciao mamma come sei stata ieri sery";

	printf("mia   %s\n", ft_strrchr(a, 'y'));
	printf("ori   %s\n", strrchr(a, 'y'));
	return (0);
}*/
