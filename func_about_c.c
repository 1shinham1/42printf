/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_about_c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 23:23:05 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/08/01 23:23:24 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	func_about_c(va_list args)
{
	char	c;

	c = (char)va_arg(args, int);
	write(1, &c, 1);
}