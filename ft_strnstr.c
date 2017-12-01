/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbartoli <cbartoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 12:56:10 by cbartoli          #+#    #+#             */
/*   Updated: 2017/12/01 21:12:37 by cbartoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	j = 0;
	k = 0;
	if (!len)
		return (NULL);
	while (to_find[k])
		k++;
	if (!k)
		return ((char *)str);
	while (str[i] && len--)
	{
		while (to_find[j] == str[i + j] && (len - j) > 0)
		{
			if (j == k - 1)
				return ((char *)str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
