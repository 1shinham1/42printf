/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   caseofpersent.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 23:22:01 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/08/02 16:18:57 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	caseofpersent(const char **str, va_list args, int *returnvalue)
{
	if (**str == 'c')
		func_about_c(args, returnvalue);
	else if (**str == 's')
		func_about_s(args, returnvalue);
	else if (**str == 'p')
		func_about_p(args, returnvalue);
	else if (**str == 'd')
		func_about_d(args, returnvalue);
	else if (**str == 'i')
		func_about_d(args, returnvalue);
	else if (**str == 'u')
		func_about_u(args, returnvalue);
	else if (**str == 'x')
		print_hex_lower(va_arg(args, unsigned long int), returnvalue);
	else if (**str == 'X')
		print_hex_upper(va_arg(args, unsigned long int), returnvalue);
	else if (**str == '%')
	{
		(*returnvalue)++;
		write(1, "%%", 1);
	}
	(*str)++;
}
