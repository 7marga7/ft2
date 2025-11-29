#include <string.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	int	i;
	int j;
	int lungh;

	lungh = ft_strlen((char *)dst);
	j = ft_strlen(dst);
	i = 0;
	if (dstsize < 1)
		return (ft_strlen((char *)src));
	while ((src[i] || i < ((int) dstsize) - ft_strlen(dst) -1) && j < dstsize -1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	if (dstsize < ft_strlen(((char *)dst)))
		return (ft_strlen((char *)src) + dstsize);
	else
		return (ft_strlen((char *)src) + lungh);
}

/*int	main(void)
{
	char	new [20] = "12345678";
	char	new2 [20] = "12345678";
	int		lungh;
	int		lungh2;

	lungh = 0;
	char	strin[] = "vvuvdefvgdfbdfgbgvdfu";

	lungh = ft_strlcat(new, strin, 21);
	printf("dest %s\n", new);
	printf("num %d\n", lungh);
	lungh2 = strlcat(new2, strin, 21);
	printf("dest2 %s\n", new2);
	printf("num2 %d\n", lungh2);
}*/
