/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   caseofpersent.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 23:22:01 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/08/01 23:22:30 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	caseofpersent(const char **str, va_list args)
{
	if (**str == 'c')
		func_about_c(args);
	else if (**str == 's')
		func_about_s(args);
	else if (**str == 'p')
		func_about_p(args);
	else if (**str == 'd')
		func_about_d(args);
	else if (**str == 'i')
		func_about_d(args);
	else if (**str == 'u')
		func_about_u(args);
	else if (**str == 'x')
		print_hex_lower(va_arg(args, unsigned long int));
	else if (**str == 'X')
		print_hex_upper(va_arg(args, unsigned long int));
	else if (**str == '%')
		write(1,"%%",1);
	(*str)++;
}
