/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smargaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 17:49:37 by smargaro          #+#    #+#             */
/*   Updated: 2025/11/28 19:28:20 by smargaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_convert(const char *str, int sign)
{
	int			i;
	long int	temp;

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

	i = 0;
	sign = 1;
	while (str[i])
	{
		if (str[i] == '-' && sign == 1)
		{
			sign = sign * -1;
			i++;
		}
		else if (str[i] == ' ' || str[i] == '	')
			i++;
		else if (str[i] < '0' && str[i] > '9')
			return (0);
		else
			return (ft_convert(&str[i], sign));
	}
	return (0);
}

/*int main()
{
	char	s[] = "-2147348-ss ss";

	printf("mia f %d\n", ft_atoi(s));
	printf("atoi  %d\n", atoi(s));
}*/
