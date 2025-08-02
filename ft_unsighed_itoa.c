/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsighed_itoa.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 23:14:35 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/08/02 16:18:19 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	lenofunsignednum(unsigned int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_unsighed_itoa(unsigned int n)
{
	char		*ans;
	size_t		len;
	long int	n1;

	n1 = n;
	len = lenofunsignednum(n);
	ans = (char *)malloc(len + 1);
	if (!ans)
		return (0);
	ans[len] = 0;
	if (n == 0)
		ans[0] = '0';
	while (n1 > 0)
	{
		ans[len - 1] = n1 % 10 + '0';
		n1 /= 10;
		len--;
	}
	return (ans);
}
