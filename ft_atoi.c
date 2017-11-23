/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbartoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 13:30:14 by cbartoli          #+#    #+#             */
/*   Updated: 2017/08/09 15:29:56 by cbartoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

static int		ft_is_negativ(const char *str)
{
	int sign;

	sign = 1;
	if (*str == '-')
		sign = -1;
	return (sign);
}

int		ft_atoi(const char *str)
{
	int sign;
	int result;

	result = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t')
		str++;
	sign = ft_is_negativ(str);
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}