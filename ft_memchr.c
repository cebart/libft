/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbartoli <cbartoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 18:15:50 by cbartoli          #+#    #+#             */
/*   Updated: 2017/11/23 18:16:00 by cbartoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void 	*ft_memchr(const void *s, int c, size_t n)
{
	const char *cs;

	cs = s;
	while(n--)
	{
		if(*cs == (unsigned char)c)
			return ((char *)cs);
        cs++;
	}
	return (NULL);
}
