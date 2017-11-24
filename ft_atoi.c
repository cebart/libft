/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbartoli <cbartoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 13:09:34 by cbartoli          #+#    #+#             */
/*   Updated: 2017/11/24 13:16:55 by cbartoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

static int	ft_is_negativ(char c)
{
	int sign;

	sign = 1;
	if (c == '-')
		sign = -1;
	return (sign);
}

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\r'
		       	|| c == '\v' || c == '\f')
		return (1);
	return (0);
}

int		ft_atoi(const char *str)
{
	int sign;
	int result;

	result = 0;
	while (ft_isspace(*str))
		str++;
	sign = ft_is_negativ(*str);
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}
