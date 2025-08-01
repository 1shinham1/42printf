/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_about_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 23:27:30 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/08/01 23:27:47 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	func_about_p(va_list args)
{
	unsigned long int	p;

	p = va_arg(args, unsigned long int);
	write(1,"0x",2);
	print_hex_lower(p);
}