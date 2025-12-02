/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smargaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 13:32:51 by smargaro          #+#    #+#             */
/*   Updated: 2025/11/29 20:57:27 by smargaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/*int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while(s[i])
		i++;
	return(i);
}

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	int	i;

	i = 0;
	while (src[i] && i < ((int) dstsize) - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(((char *)src)));
}*/



char *ft_strdup(const char *s1)
{
	char	*cpy;

	cpy = (char *) malloc(ft_strlen(s1) * (sizeof(char)+1));
	if (!cpy)
		return (NULL);
	ft_strlcpy(cpy, s1, ft_strlen(s1)+1);
	return(cpy);
}

/*int main()
{
	char *s1 = "ciao come va?";

	printf("copy is %s\n", ft_strdup(s1));
}*/
