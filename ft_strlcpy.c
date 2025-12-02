/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smargaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 18:01:30 by smargaro          #+#    #+#             */
/*   Updated: 2025/11/29 18:01:39 by smargaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	 size_t	i;
	 size_t	j;

	j = dstsize;
	i = 0;
	if (j != 0)
	{
		while (src[i] && i < j -1)
		{
			dst[i] = src[i];
			i++;
		}
	dst[i] = '\0';
	}
	return (ft_strlen(((char *)src)));
}

/*int	main(void)
{
	char	new [20];
	char	new2 [20];
	int		lungh;
	int		lungh2;

	lungh = 0;
	char	strin[] = "vvuvu";

	lungh = ft_strlcpy(new, strin, -1);
	printf("dest %s\n", new);
	printf("num %d\n", lungh);
	lungh2 = strlcpy(new2, strin, 0);
	printf("dest2 %s\n", new2);
	printf("num2 %d\n", lungh2);
}*/
