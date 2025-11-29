/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smargaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:07:42 by smargaro          #+#    #+#             */
/*   Updated: 2025/11/24 15:07:49 by smargaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = '\0';
		i++;
	}
}

/*int main(void)
{
	int	i;
	
	i = 0;
	char s[] = "ciao mamma";
	//char *s = "ciao mamma";
	
		printf("mia %s\n",s);
		ft_bzero(s, 4);
		printf("dopo in int ");
		while (i < 10)
		{
		printf("%d ",s[i]);
		i++;
		}
}*/
