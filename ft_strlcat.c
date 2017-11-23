/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbartoli <cbartoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 23:32:17 by cbartoli          #+#    #+#             */
/*   Updated: 2017/11/24 00:10:27 by cbartoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	ldest;

	j = 0;
	i = 0;
	ldest = ft_strlen(dest);
	if(!size)
		return (ldest + ft_strlen(src));
	while (dest[j] != '\0')
		j++;
	size = size - (j + 1);
	while (src[i] != '\0' && i < size)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = src[i];
	return (ldest + ft_strlen(src));
}
