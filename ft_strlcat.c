/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaouh <aennaouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:29:48 by aennaouh          #+#    #+#             */
/*   Updated: 2022/11/04 23:38:49 by aennaouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	b;
	size_t	len_dest;
	size_t	len_src;

	len_src = ft_strlen(src);
	if (!dest && !dstsize)
		return (len_src);
	b = ft_strlen(dest);
	len_dest = b;
	if (!dstsize)
		return (ft_strlen(src));
	if (dstsize <= ft_strlen(dest))
		return (dstsize + ft_strlen(src));
	i = 0;
	while (src[i] && i < dstsize - len_dest - 1)
	{
		dest[b] = src[i];
		i++;
		b++;
	}
	dest[b] = 0;
	return (len_dest + len_src);
}
