/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaouh <aennaouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:58:45 by aennaouh          #+#    #+#             */
/*   Updated: 2022/11/04 13:00:06 by aennaouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	ft_test(const char *set, char c)
{
	char	*ptr;

	ptr = (char *)set;
	while (*ptr)
	{
		if (*ptr == c)
			return (1);
		ptr++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		lent;

	i = 0;
	if (s1 == 0)
		return (NULL);
	if (!s1[0])
		return (ft_strdup(""));
	else if (!set)
		return ((char *)s1);
	lent = ft_strlen(s1);
	while (ft_test(set, s1[i]))
		i++;
	while (ft_test(set, s1[lent - 1]) && lent > i)
		lent--;
	return (ft_substr(s1, i, lent - i));
}
