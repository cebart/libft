/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbartoli <cbartoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 23:32:17 by cbartoli          #+#    #+#             */
/*   Updated: 2017/11/24 01:09:01 by cbartoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char		*pdest;
	const char	*psrc;
	size_t		sz;
	size_t		ldest;

	pdest = dest;
	psrc = src;
	sz = size;
	while (*pdest && sz)
	{
		pdest++;
		sz--;
	}
	ldest = ft_strlen(dest) - ft_strlen(pdest);
	sz = size - ldest;
	if (!sz)
		return (ldest + ft_strlen(src));
	while (*psrc)
	{
		if (sz != 1)
		{
			*pdest = *psrc;
			pdest++;
			sz--;
		}
		psrc++;
	}
	*pdest = '\0';
	return (ldest + (ft_strlen(src) - ft_strlen(psrc)));
}
