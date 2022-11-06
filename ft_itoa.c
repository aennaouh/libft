/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaouh <aennaouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 13:15:00 by aennaouh          #+#    #+#             */
/*   Updated: 2022/11/05 21:47:26 by aennaouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(long n)
{
	int	count;

	count = 0;
	if (n == 0)
		count++;
	if (n < 0)
	{
		n = n * -1;
		count++;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		lent;
	long	nb;

	nb = n;
	lent = count(nb);
	str = (char *)malloc(lent * sizeof(char) + 1);
	if (!str)
		return (NULL);
	str[lent--] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	else if (nb == 0)
		str[lent] = '0';
	while (nb > 0)
	{
		str[lent] = nb % 10 + 48;
		nb = nb / 10;
		lent--;
	}
	return (str);
}

