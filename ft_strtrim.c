/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbartoli <cbartoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 11:17:09 by cbartoli          #+#    #+#             */
/*   Updated: 2017/12/01 21:18:24 by cbartoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

char		*ft_strtrim(char const *s)
{
	int	start;
	int	len;
	int	end;
	char	*sr;

	len = 0;
	start = 0;
	end = (ft_strlen(s) - 1);
	while (ft_isspace(s[end]))
	{
		len++;
		end--;
	}
	if (!(sr = ft_strnew(len)))
		return (NULL);
	if (end < 0)
		return (sr);
	while (ft_isspace(s[start]))
		start++;
	len = ft_strlen(s) - start - len;
	sr = ft_strsub(s, start, (size_t)len);
	return (sr);
}
