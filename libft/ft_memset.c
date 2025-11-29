/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smargaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 13:48:42 by smargaro          #+#    #+#             */
/*   Updated: 2025/11/24 13:48:54 by smargaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = c;
		i++;
	}
	return (s);
}

/*int main(void)
{
	int	i;
	
	i = 0;
	char s[] = "ciao mamma";
	ft_memset(s, '1', 5);
	while(i < 7)
	{
		write(1, &s[i],1);
		i++;
	}
	write(1, "\n",1);
		
}*/
