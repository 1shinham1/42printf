/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_about_d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 23:28:02 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/08/02 15:13:35 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	func_about_d(va_list args, int *returnvalue)
{
	int		d;
	char	*itoa;
	size_t	len;

	d = va_arg(args, int);
	itoa = ft_itoa(d);
	len = ft_strlen(itoa);
	write(1, itoa, len);
	free(itoa);
	(*returnvalue) += len;
}
