/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaouh <aennaouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 21:08:16 by aennaouh          #+#    #+#             */
/*   Updated: 2022/11/05 23:35:15 by aennaouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t			i;
	char			*d1;
	char			*s1;

	d1 = (char *)dest;
	s1 = (char *)src;
	i = 0;
	if (d1 == s1)
		return (d1);
	else if (s1 > d1)
		ft_memcpy(dest, src, len);
	else
		while (len--)
			d1[len] = s1[len];
	return (dest);
}
int main ()
{
	char src[]= "helloworld";
	printf("%s",ft_memmove(src + 2, src,3));
}