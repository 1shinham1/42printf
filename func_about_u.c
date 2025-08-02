/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_about_u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 23:29:09 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/08/02 15:14:32 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	func_about_u(va_list args, int *returnvalue)
{
	unsigned int	d;
	char			*unsighed_itoa;
	size_t			len;

	d = va_arg(args, unsigned int);
	unsighed_itoa = ft_unsighed_itoa(d);
	len = ft_strlen(unsighed_itoa);
	write(1, unsighed_itoa, ft_strlen(unsighed_itoa));
	free(unsighed_itoa);
	(*returnvalue) += len;
}
