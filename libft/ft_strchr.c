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

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*p;

	i = 0;
	p = ((char *) s);
	while (s[i])
	{
		if (c == s[i])
			return (&p[i]);
		i++;
	}
	if (c == '\0')
		return (&p[i]);
	return (NULL);
}

/*int main(void)
{
	char a[] = "ciao mamma come sei stata ieri serax";

	printf("mia   %s\n", ft_strchr(a, 'x'));
	printf("ori   %s\n", strchr(a, 'x'));
	return (0);
}*/
