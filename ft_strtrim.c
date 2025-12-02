/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smargaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 14:52:57 by smargaro          #+#    #+#             */
/*   Updated: 2025/12/02 11:01:04 by smargaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	funav(char const *pr, const char *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (pr[i])
	{
		while (set[j])
		{
			if (set[j] == pr[i] || pr[i] < 32)
			{
				i++;
				j = 0;
			}
			else
				j++;
		}
		return (i);
	}
	return (0);
}

int	funret(char const *pr, const char *set)
{
	int	i;
	int	j;

	i = ft_strlen(pr)-1;
	j = 0;
	while (pr[i])
	{
		while (set[j])
		{
			if (set[j] == pr[i] || pr[i] < 32)
			{
				i--;
				j = 0;
			}
			else
				j++;
		}
		return (i);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*pr;
	int		l;
	int		in;
	int		fin;

	in = funav(s1, set);
	fin = funret(s1, set);
	l = (ft_strlen(s1) - in) - (ft_strlen(s1) - fin -1);
	if (fin < in)
		{
			pr = calloc(sizeof(char),1);
				pr[0]= '\0';
				if (!pr)
				return NULL;
		}
	else
	{
		pr = (char *)ft_calloc(sizeof(char),l);
		if (pr == NULL)
			return NULL;
	pr = ft_substr(s1, in, l);
	}
	return (pr);
}

/*int main ()
{
	char *s = " xx  xx123x";
	char  *n = " x";
	size_t i = 0;

	char *t = ft_strtrim(s, n);
	printf("ris %s\n",t);
	while(t[i])
		{printf(" %d\n",t[i]);
			i++;
		}
}*/
