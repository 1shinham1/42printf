/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_about_u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 23:29:09 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/08/01 23:29:43 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	func_about_u(va_list args)
{
	unsigned int	d;
	char			*unsighed_itoa;

	d = va_arg(args, unsigned int);
	unsighed_itoa = ft_unsighed_itoa(d);
	write(1, unsighed_itoa, ft_strlen(unsighed_itoa));
}
