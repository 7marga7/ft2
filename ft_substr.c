/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smargaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 11:11:36 by smargaro          #+#    #+#             */
/*   Updated: 2025/11/30 11:16:59 by smargaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	char	*q;
	size_t	i;
	int		count;

	i = 0;
	count = start ;
	p = (char *)malloc(sizeof(char) * len + 1);
	if (p == NULL)
		return (NULL);
	while (i < len && s[count])
	{
		p[i] = s[count];
		i++;
		count++;
	}
	q = malloc(sizeof(char) * ft_strlen(p));
	ft_memcpy(q, p, ft_strlen(p));
	free (p);
	return (q);
}

/*int main()
{
	char s[]="ciao ciao come stai?";
	int start = 4;
	int len = 2;
	char *p = ft_substr(s, 4, 4);
	printf("sub = %s\n", p);
}*/
