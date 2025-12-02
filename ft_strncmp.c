/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smargaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 20:30:22 by smargaro          #+#    #+#             */
/*   Updated: 2025/11/26 21:10:32 by smargaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	size_t		j;

	//j = ((int) n);
	j = n;
	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] || s2[i]) && i <= j -1)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

/*int main()
{
char *s1 = "abcd ";
char *s2 = "abcddefg";
printf ("differenza %d\n", ft_strncmp(s1, s2, 5));
printf ("original f %d\n", strncmp(s1, s2, 5));
}*/
