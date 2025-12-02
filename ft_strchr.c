/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smargaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 18:16:44 by smargaro          #+#    #+#             */
/*   Updated: 2025/11/29 18:16:49 by smargaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include <libft.h>
//#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*p;
	char	d;

	i = 0;
	p = ((char *) s);
	d = ((char) c);
	while (s[i])
	{
		if (d == s[i])
			return (&p[i]);
		i++;
	}
	if (d == '\0')
		return (&p[i]);
	return (NULL);
}

/*int main(void)
{
	char a[] = "ciao mamma come sei stata ieri serax";

	printf("mia   %s\n", ft_strchr(a, 'c'));
	printf("ori   %s\n", strchr(a, 'c'));
	return (0);
}*/
