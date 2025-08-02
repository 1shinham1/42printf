/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_about_c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 23:23:05 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/08/02 16:17:25 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	func_about_c(va_list args, int *returnvalue)
{
	char	c;

	c = (char)va_arg(args, int);
	write(1, &c, 1);
	(*returnvalue)++;
}
