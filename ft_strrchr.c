/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaouh <aennaouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:29:58 by aennaouh          #+#    #+#             */
/*   Updated: 2022/11/04 13:02:15 by aennaouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*ptr;
	size_t	lent;

	ptr = (char *)str;
	lent = ft_strlen(ptr);
	while (lent > 0)
	{	
		if (ptr[lent] == (char)c)
			return (&ptr[lent]);
		lent--;
	}
	if (lent == 0 && (char )c == ptr[lent])
		return (ptr);
	return (NULL);
}
