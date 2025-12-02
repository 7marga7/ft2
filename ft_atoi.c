/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smargaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 17:49:37 by smargaro          #+#    #+#             */
/*   Updated: 2025/12/01 14:01:00 by smargaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <xlocale.h>
#include <stdlib.h>
//#include "libft.h"

int	ft_convert(const char *str, int sign)
{
	int			i;
	int			temp;

	i = 0;
	temp = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		temp = (temp * 10) + (str[i] - '0');
		i++;
	}
	temp = temp * sign;
	return (temp);
}

int	ft_atoi(const char *str)
{
	int			sign;
	int			i;
	int			flag;

	i = 0;
	sign = 1;
	flag = 0;
	while (str[i] <= 32)
		i++;
	while ((str[i] == '+' || str [i] == '-') && !flag)
	{
		if (str[i] == '-')
		{
			sign = -sign;
		}
		flag = 1;
		i++;
	}
	if (str [i] >= '0' && str [i] <= '9')
		return (ft_convert (str + i, sign));
	return (0);
}

/*int main()
{
	char	s[] = "-+34dkd32";

	printf("mia f %d\n", ft_atoi(s));
	printf("atoi  %d\n", atoi(s));
}*/
