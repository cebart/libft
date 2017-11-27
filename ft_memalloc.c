/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbartoli <cbartoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 12:59:16 by cbartoli          #+#    #+#             */
/*   Updated: 2017/11/27 12:59:38 by cbartoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void 	*ft_memalloc(size_t size)
{
	void *res;

	res = (void *)malloc(size);
	if (!res)
		return (NULL);
	ft_bzero(res, size);
	return (res);
}

