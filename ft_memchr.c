/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbartoli <cbartoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 18:15:50 by cbartoli          #+#    #+#             */
/*   Updated: 2017/11/24 12:33:54 by cbartoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void 	*ft_memchr(const void *s, int c, size_t n)
{
	if(s)
	{
		while(n)
		{
			if(*(unsigned char *)s == (unsigned char)c)
				return ((void *)s);
        		s++;
			n--;
		}
	}
	return (NULL);
}
