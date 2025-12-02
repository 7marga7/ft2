/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smargaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 03:33:33 by smargaro          #+#    #+#             */
/*   Updated: 2025/11/30 03:35:15 by smargaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	lungh;

	lungh = ft_strlen((char *)dst);
	j = ft_strlen(dst);
	i = 0;
	if (dstsize < 1)
		return (ft_strlen((char *)src));
	while (src[i] && j < dstsize - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	if (dstsize >= lungh)
		return (lungh + ft_strlen((char *)src));
	else
		return (ft_strlen((char *)src) + dstsize);
}

/*int	main(void)
{
	char	new [20] = "12345678";
	char	new2 [20] = "12345678";
	int		lun;
	int		lungh2;

	lun = 0;
	char	strin[] = "vvuvdeubbsjwibujwi2b";

	lun = ft_strlcat(new, strin, 10);
	printf("dest %s\n", new);
	printf("num %d\n", lun);
	lungh2 = strlcat(new2, strin, 10);
	printf("dest2 %s\n", new2);
	printf("num2 %d\n", lungh2);
}*/
