/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaouh <aennaouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 20:56:04 by aennaouh          #+#    #+#             */
/*   Updated: 2022/11/06 10:32:24 by aennaouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d1;
	char	*s1;

	d1 = (char *)dest;
	s1 = (char *)src;
	i = 0;
	if (!d1 && !s1)
		return (0);
	while (i < n)
	{
		d1[i] = s1[i];
		i++;
	}
	return (dest);
}
// int main ()
// {
// int tab1[3] = {50, 100, 110};
// int dst[3] = {1, 2, 3};
// int *p = ft_memcpy(tab1 ,dst ,8);
// //while(i < 3)
// printf("%d\n%d", tab1[0], tab1[1]);
// }