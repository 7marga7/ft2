/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smargaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 14:52:57 by smargaro          #+#    #+#             */
/*   Updated: 2025/11/30 14:53:02 by smargaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*fun(char *pr, const char *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (set[j])
	{
		i = 0;
		while (pr[i])
		{
			if (pr[i] == set[j])
				ft_memmove (pr + i, pr + i + 1, ft_strlen(pr) - i);
			else
				i++;
		}
		j++;
	}
	return (pr);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*pr;
	char	*ris;
	size_t	l;

	l = ft_strlen(s1);
	pr = (char *) malloc(sizeof(char) * ft_strlen(s1) + 1);
	ft_memcpy(pr, s1, l);
	pr = fun (pr, set);
	ris = (char *) malloc(sizeof(char) * ft_strlen(pr)+1);
	ft_memcpy(ris, pr, ft_strlen(pr));
	free(pr);
	return (ris);
}

/*int main ()
{
	char *s = " jiewondfjwendjqondioqiqondqiondiqndiqndioqndiqndin";
	char  *n = " xn2qd";
	size_t i = 0;

	char *t = ft_strtrim(s, n);
	printf("mah %s\n",t);
	while(i<= ft_strlen(t))
		{printf("mah %d\n",t[i]);
			i++;
		}
}*/
