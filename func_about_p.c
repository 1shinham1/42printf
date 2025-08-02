/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_about_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 23:27:30 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/08/02 16:17:41 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	func_about_p(va_list args, int *returnvalue)
{
	unsigned long	p;

	p = va_arg(args, unsigned long);
	write(1, "0x", 2);
	(*returnvalue) += 2;
	print_long_hex_lower(p, returnvalue);
}
