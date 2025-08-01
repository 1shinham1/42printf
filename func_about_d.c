/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_about_d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 23:28:02 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/08/01 23:28:28 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	func_about_d(va_list args)
{
	int		d;
	char	*itoa;

	d = va_arg(args, int);
	itoa = ft_itoa(d);
	write(1, itoa, ft_strlen(itoa));
}
