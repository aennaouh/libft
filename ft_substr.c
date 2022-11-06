/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaouh <aennaouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 03:26:19 by aennaouh          #+#    #+#             */
/*   Updated: 2022/11/04 13:25:28 by aennaouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*tab;
	size_t	lent;

	if (!s)
		return (0);
	lent = ft_strlen(s);
	if (start > ft_strlen(s))
		start = ft_strlen(s);
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	i = 0;
	tab = malloc(len + 1 * sizeof(char));
	if (!tab)
		return (NULL);
	while (i < len && start < lent)
		tab[i++] = s[start++];
	tab[i] = '\0';
	return (tab);
}
