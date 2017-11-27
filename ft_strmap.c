/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbartoli <cbartoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 10:55:29 by cbartoli          #+#    #+#             */
/*   Updated: 2017/11/27 11:00:35 by cbartoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

char 	*ft_strmap(char const *s, char (*f)(char))
{
	char 	*res;
	int	i;

	i = 0;
	res = ft_strnew(ft_strlen(s) + 1);
	while (s[i])
	{
		res[i] = ((*f)(s[i]));
		i++;
	}
	res[i] = '\0';
	return (res);
}
